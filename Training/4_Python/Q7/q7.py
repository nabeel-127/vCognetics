import logging
import time
import asyncio





def find_divisibles(end, divisor):
    divisibles = []
    for i in range(1, end + 1):
        if i % divisor == 0:
            divisibles.append(i)
    return divisibles


def synchronous():	
	ranges = [(50800000, 34113), (100052, 3210), (20000, 5)]
	for end, divisor in ranges:
		divisibles = find_divisibles(end, divisor)
		print(f"Range: 1-{end}  Divisor: {divisor}")
		# print("Divisibles:", divisibles)
		print()


async def find_divisibles_async(end, divisor):
	divisibles = await asyncio.to_thread(find_divisibles, end, divisor)
	print(divisibles)
	return divisibles

async def asynchronous():
    ranges = [(50800000, 34113), (100052, 3210), (20000, 5)]
    tasks = []

    for end, divisor in ranges:
        task = asyncio.create_task(find_divisibles_async(end, divisor))
        tasks.append(task)

    completed_tasks = await asyncio.gather(*tasks)

    for i, (end, divisor) in enumerate(ranges):
        divisibles = completed_tasks[i]
        print(f"Range: 1-{end}  Divisor: {divisor}")
        print("Divisibles:", divisibles)
        print()





if __name__ == "__main__":
	print()
	logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
	# logging.basicConfig(filename='divisibles.log', level=logging.INFO)
	print()
    
	logging.info("Entering synchronous function . . . ")
	start_time = time.time()
	synchronous()
	end_time = time.time()
	synchronous_time = end_time - start_time
	logging.info("Time taken for synchronous: %f seconds", synchronous_time)
	print()
	
	logging.info("Entering asynchronous function . . . ")
	start_time = time.time()
	asynchronous()
	end_time = time.time()
	asynchronous_time = end_time - start_time
	logging.info("Time taken for asynchronous: %f seconds", asynchronous_time)



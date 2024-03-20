numbers = []
for i in range(2000, 3600):
	if (i % 7 == 0 and i % 5 != 0):
		print(i)
		numbers.append(i)
print(numbers)

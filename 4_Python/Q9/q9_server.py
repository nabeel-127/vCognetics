import asyncio
import websockets
import json
import time
import logging

messages = []

async def handler(websocket):
		global messages
		message = await websocket.recv()
		print(f"Message recieved:\n{message}")
		message_dict = json.loads(message)
		message_dict['timestamp'] = time.time()
		messages.append(message_dict)
		message = json.dumps(message_dict)
		with open("output_messages_server.json", 'w') as file:
			json.dump(messages, file, indent=4)
		logging.info(message)
		await websocket.send(message)
		print(f"Message sent:\n{message}\n")

async def main():
    async with websockets.serve(handler, "", 8001):
        await asyncio.Future()

if __name__ == "__main__":
	logging.basicConfig(filename='output_messages_server.log', level=logging.INFO, filemode='w')
	try:
		asyncio.run(main())
	except KeyboardInterrupt:
		pass

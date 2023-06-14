import asyncio
import websockets
import json
import os
import logging

myMessage = [
  { "jsonrpc": "2.0", "method": "message-1" },
  { "jsonrpc": "2.0", "method": "message-2" },
  { "jsonrpc": "2.0", "method": "message-3" },
  { "jsonrpc": "2.0", "method": "message-4" },
  { "jsonrpc": "2.0", "method": "message-5" },
  { "jsonrpc": "2.0", "method": "message-6" },
  { "jsonrpc": "2.0", "method": "message-7" },
  { "jsonrpc": "2.0", "method": "message-8" },
  { "jsonrpc": "2.0", "method": "message-9" },
  { "jsonrpc": "2.0", "method": "message-10" }
]
myMessage = "hola"

messages = []

length = 0

def parse_json():
	with open(os.getcwd() + "/client_messages.json") as file:
		data = json.load(file)
	# data = data[:10]
	return data

async def main():
	data = parse_json()
	i = 0
	while True:
		async with websockets.connect('ws://localhost:8001') as websocket:
			message = json.dumps(data[i])
			await websocket.send(message)
			print(f"Message sent:\n{message}")
			logging.info(message)
			message =  await websocket.recv()
			print(f"Message received:\n{message}\n")
			logging.info(message)
			messages.append(json.loads(message))
		await asyncio.sleep(1)
		# break
		if i < 50: # len(data):
			i += 1
		else:
			with open("output_messages_client.json", 'w') as file:
				json.dump(messages, file, indent=4)
			break

if __name__ == "__main__":
	logging.basicConfig(filename='output_messages_client.log', level=logging.INFO, filemode='w')
	try:
		asyncio.run(main())
	except KeyboardInterrupt:
		pass



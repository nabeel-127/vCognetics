import asyncio
import websockets
import json
import os

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

def parse_json():
	with open(os.getcwd() + "/client_messages.json") as file:
		data = json.load(file)
	data = data[:10]
	return data

async def main():
	while True:
		async with websockets.connect('ws://localhost:8001') as websocket:
			message = json.dumps(parse_json())
			# message = input("Enter a message: ")
			await websocket.send(message)
			print("Message sent.")
			response =  await websocket.recv()
			print(f"Message received.\n{response}")
		await asyncio.sleep(1)
		break


if __name__ == "__main__":
	try:
		asyncio.run(main())
	except KeyboardInterrupt:
		pass



import asyncio
import websockets

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

async def send_message():
    async with websockets.connect('ws://localhost:8001') as websocket:
        message = myMessage
        # message = input("Enter a message: ")
        await websocket.send(message)
        print("Message sent.")
        response = await websocket.recv()
        print("Response received:", response)

asyncio.run(send_message())

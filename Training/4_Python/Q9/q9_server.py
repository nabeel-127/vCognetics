import asyncio
import websockets
import json
import time

async def handler(websocket):
        message = await websocket.recv()
        await websocket.send(str(time.time()) + " " + message)
        data = json.loads(message)
        print(data)

async def main():
    async with websockets.serve(handler, "", 8001):
        await asyncio.Future()

if __name__ == "__main__":
	try:
		asyncio.run(main())
	except KeyboardInterrupt:
		pass

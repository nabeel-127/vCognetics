import math
import sys
import argparse

# if len(sys.argv) != 5:
#     print("Incorrect number of arguments. Syntax: python3 main.py x1 x2 y1 y2")
#     sys.exit()

# x1 = int(sys.argv[1])
# x2 = int(sys.argv[2])
# y1 = int(sys.argv[3])
# y2 = int(sys.argv[4])

# # print(sys.argv)

parser = argparse.ArgumentParser()
parser.add_argument("x1", type=int, help="x-coordinate of the first point")
parser.add_argument("x2", type=int, help="x-coordinate of the second point")
parser.add_argument("y1", type=int, help="y-coordinate of the first point")
parser.add_argument("y2", type=int, help="y-coordinate of the second point")
args = parser.parse_args()

x1 = args.x1
x2 = args.x2
y1 = args.y1
y2 = args.y2

distance = math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
print("Distance = " + str(distance))



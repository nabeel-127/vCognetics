import math
import sys
import argparse

if len(sys.argv) != 5:
    print("Incorrect number of arguments. Syntax: python3 main.py x1 x2 y1 y2")
    sys.exit()

x1 = int(sys.argv[1])
x2 = int(sys.argv[2])
y1 = int(sys.argv[3])
y2 = int(sys.argv[4])

# print(sys.argv)

distance = math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
print("Distance = " + str(distance))



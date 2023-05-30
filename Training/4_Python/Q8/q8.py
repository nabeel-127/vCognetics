import sys
import os
import math
import numpy

if len(sys.argv) != 2:
	print("Incorrect syntax. Enter path to file.")
	sys.exit()

file_path = os.getcwd() + sys.argv[1]

with open(file_path, 'r') as file:
	data = numpy.loadtxt(file_path, delimiter=',', usecols=(0, 1, 2))
	# data = numpy.genfromtxt(file_path, delimiter=',')

mean = numpy.mean(data)
median = numpy.median(data)
maximum = numpy.max(data)
minimum = numpy.min(data)
standard_deviation = numpy.std(data)
percentile_99 = numpy.percentile(data, 99)
percentile_99_9 = numpy.percentile(data, 99.9)
percentile_99_99 = numpy.percentile(data, 99.99)
percentile_99_999 = numpy.percentile(data, 99.999)

print(mean)
print(median)
print(maximum)
print(minimum)
print(standard_deviation)
print(percentile_99)
print(percentile_99_9)
print(percentile_99_99)
print(percentile_99_999)



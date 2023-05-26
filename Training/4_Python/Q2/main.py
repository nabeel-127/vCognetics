import sys
import psutil

print("Bye order: " + sys.byteorder)

print("Logical Core count: " + str(psutil.cpu_count()))
print("Physical Core count: " + str(psutil.cpu_count(logical=False)))

with open('/proc/cpuinfo', 'r') as file:
	for line in file:
		if "model name" in line:
			print(line.split(':')[1].strip())
			break

print("CPU max. frequency: " + str(int(psutil.cpu_freq().max)) + "MHz")
print("CPU min. frequency: " + str(int(psutil.cpu_freq().min)) + "MHz")
print("CPU current frequency: " + str(int(psutil.cpu_freq().current)) + "MHz")

# print("Virtualization: ")

with open('/proc/cpuinfo', 'r') as file:
    cpuinfo = file.read()

l1i_cache_size = cpuinfo.split('cache size')[2]

# l1i_cache_size = cpuinfo.split('cache size')[1].split('\n')[0].strip()
# l1d_cache_size = cpuinfo.split('cache size')[2].split('\n')[0].strip()
# l2_cache_size = cpuinfo.split('cache size')[3].split('\n')[0].strip()
# l3_cache_size = cpuinfo.split('cache size')[4].split('\n')[0].strip()

print("L1i cache size:", l1i_cache_size)
# print("L1d cache size:", l1d_cache_size)
# print("L2 cache size:", l2_cache_size)
# print("L3 cache size:", l3_cache_size)


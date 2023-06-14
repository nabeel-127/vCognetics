import sys
import psutil
import subprocess

print("Bye order: " + sys.byteorder)

print("Logical Core count: " + str(psutil.cpu_count()))
print("Physical Core count:", str(psutil.cpu_count(logical=False)))

with open('/proc/cpuinfo', 'r') as file:
	cpuinfo = file.read()
	for line in file:
		if "model name" in line:
			print(line.split(':')[1].strip())
			break

	output = subprocess.check_output("lscpu", shell=True).decode().splitlines()
	cache_sizes = {}
	for line in output:
		cache_type, cache_size = line.split(":")
		cache_sizes[cache_type.strip()] = cache_size.strip()
	# print(cache_sizes)
	print("L1i cache size:", cache_sizes["L1i cache"])
	print("L1d cache size:", cache_sizes["L1d cache"])
	print("L2 cache size:", cache_sizes["L2 cache"])
	print("L3 cache size:", cache_sizes["L3 cache"])

	print("Thread(s) per core: " + cpuinfo.split('siblings')[1].split('\n')[0].strip())


print("CPU max. frequency: " + str(int(psutil.cpu_freq().max)) + "MHz")
print("CPU min. frequency: " + str(int(psutil.cpu_freq().min)) + "MHz")
print("CPU current frequency: " + str(int(psutil.cpu_freq().current)) + "MHz")



print("Distributor ID:", subprocess.check_output(["lsb_release", "-si"]).decode().strip())
print("Distributor Description:", subprocess.check_output("lsb_release -sd", shell=True).decode().strip())
print("Distributor Codename:", subprocess.check_output("lsb_release -sc", shell=True).decode().strip())

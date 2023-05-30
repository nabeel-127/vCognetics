import sys
import psutil
import subprocess

print("Bye order: " + sys.byteorder)

print("Logical Core count: " + str(psutil.cpu_count()))
print("Physical Core count:", str(psutil.cpu_count(logical=False)))

with open('/proc/cpuinfo', 'r') as file:
	for line in file:
		if "model name" in line:
			print(line.split(':')[1].strip())
			break

print("CPU max. frequency: " + str(int(psutil.cpu_freq().max)) + "MHz")
print("CPU min. frequency: " + str(int(psutil.cpu_freq().min)) + "MHz")
print("CPU current frequency: " + str(int(psutil.cpu_freq().current)) + "MHz")

with open('/proc/cpuinfo', 'r') as file:
    cpuinfo = file.read()
print("L1i cache size:", cpuinfo.split('cache size')[1].split('\n')[0].strip())
print("L1d cache size:", cpuinfo.split('cache size')[2].split('\n')[0].strip())
print("L2 cache size:", cpuinfo.split('cache size')[3].split('\n')[0].strip())
print("L3 cache size:", cpuinfo.split('cache size')[4].split('\n')[0].strip())

print("Thread(s) per core: " + cpuinfo.split('siblings')[1].split('\n')[0].strip())

print("Distributor ID:", subprocess.check_output("lsb_release -si", shell=True).decode().strip())
print("Distributor Description:", subprocess.check_output("lsb_release -sd", shell=True).decode().strip())
print("Distributor Codename:", subprocess.check_output("lsb_release -sc", shell=True).decode().strip())

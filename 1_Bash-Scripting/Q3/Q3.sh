#!/bin/bash

cpuUsage="CPU Usage: $(top -bn1 | awk '/Cpu/ { print $2}')"
memUsage="Memory Usage: $(free -m | awk '/Mem/ {print $3}')"
diskUsage="Disk Usage: $(df -h | awk '$NF=="/"{printf "%d/%dGB (%s)\n", $3,$2,$5}')"


echo $cpuUsage%
echo $memUsage MB
echo $diskUsage

stats=$(ifconfig | awk '/RX packets/ {print "- Received packets:", $5; print "- Transmitted packets:", $9; print "- Received bytes:", $6; print "- Transmitted bytes:", $10}')
echo "$stats"




# display port info, and ip and name, CPU core data and related info, bracket issue *, awk, %d etc; sed vs awk vs grep;



# #!/bin/bash

# # Get CPU and memory usage
# cpu_usage=$(top -bn1 | grep "Cpu(s)" | sed "s/.*, *\([0-9.]*\)%* id.*/\1/" | awk '{print 100 - $1"%"}')
# mem_usage=$(free -m | awk 'NR==2{printf "%.2f%%", $3*100/$2 }')

# # Get disk space usage
# disk_usage=$(df -h / | awk 'NR==2{print $5}')

# # Get network statistics
# rx_bytes=$(cat /proc/net/dev | grep eth0 | awk '{print $2}')
# tx_bytes=$(cat /proc/net/dev | grep eth0 | awk '{print $10}')

# # Create report
# echo "SYSTEM USAGE REPORT"
# echo "-------------------"
# echo "CPU usage: $cpu_usage"
# echo "Memory usage: $mem_usage"
# echo "Disk usage: $disk_usage"
# echo "Network statistics:"
# echo "    RX bytes: $rx_bytes"
# echo "    TX bytes: $tx_bytes"

# # Save report to file
# echo -e "\n\nSYSTEM USAGE REPORT\n-------------------\nCPU usage: $cpu_usage\nMemory usage: $mem_usage\nDisk usage: $disk_usage\nNetwork statistics:\n    RX bytes: $rx_bytes\n    TX bytes: $tx_bytes" > system_usage_report.txt

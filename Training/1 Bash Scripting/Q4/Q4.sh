#!/bin/bash

LogFile="LogFile.log"

tail -n0 -f $LogFile | head -n10 | while read line; do
	if [[ "$line" == *"error"* || "$line" == *"Error"* ]]; then
		echo "Error message detected in log file: $line"
	elif [[ "$line" == *"warning"* || "$line" == *"Warning"* ]]; then
		echo "Warning message detected in log file: $line"
	fi
done

previousCount=$(wc -l < $LogFile)

while true
do
	currentCount=$(wc -l < $LogFile)
	if [[ $currentCount -gt $previousCount ]]
	then
		newLines=$(($currentCount - $previousCount))
		tail -$newLines $LogFile | grep -i "error"
		tail -$newLines $LogFile | grep -i "warning"
		previousCount=$currentCount
	fi
	sleep 1
done










# #!/bin/bash

# LogFile="LogFile.log"

# tail -n0 -f $LogFile | while read line; do
# 	if [[ "$line" == *"error"* || "$line" == *"Error"* ]]; then
# 		echo "Error message detected in log file: $line"
# 	elif [[ "$line" == *"warning"* || "$line" == *"Warning"* ]]; then
# 		echo "Warning message detected in log file: $line"
# 	fi
# done

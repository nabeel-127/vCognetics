#!/bin/bash

LogFile="LogFile.log"

# tail -n0 -f $LogFile | head -n10 | while read line; do
# 	if [[ "$line" == *"error"* || "$line" == *"Error"* ]]; then
# 		echo "Error message detected in log file: $line"
# 	elif [[ "$line" == *"warning"* || "$line" == *"Warning"* ]]; then
# 		echo "Warning message detected in log file: $line"
# 	fi
# done

previousCount=$(wc -l < $LogFile)

while true
do
	currentCount=$(wc -l < $LogFile)
	if [[ $currentCount -gt $previousCount ]]
	then
		newLines=$(($currentCount - $previousCount))
		tail -n $newLines $LogFile | grep -i "error" > /dev/null
        if [ $? -eq 0 ]
        then
            echo "Error found in log file!"
        fi
		tail -n $newLines $LogFile | grep -i "warning" > /dev/null
        if [ $? -eq 0 ]
        then
            echo "Warning found in log file!"
        fi
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

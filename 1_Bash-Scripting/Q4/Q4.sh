#!/bin/bash

LogFile="LogFile.log"

if [ $# -eq 1 ]
then
    LogFile=$1
else
    echo "Usage: $0 <LogFile>"
    exit 1
fi

lastPosition=$(wc -c < "$LogFile")

while true; do
    currentPosition=$(wc -c < "$LogFile")

    if [[ $currentPosition -gt $lastPosition ]]; then
        tail -c +$((lastPosition + 1)) "$LogFile" | while IFS= read -r line; do
            if echo "$line" | grep -q -i "error"; then
                echo "Error message detected in log file: $line"
            elif echo "$line" | grep -q -i "warning"; then
                echo "Warning message detected in log file: $line"
            fi
        done
        lastPosition=$currentPosition
    fi

    sleep 1
done

# tail -f "$LogFile" | while read -r line
# do
# 	echo $line | grep -i "error"
# 	echo $line | grep -i "warning"
#     # if [[ "$line" == *"error"* || "$line" == *"Error"* ]]
#     # then
#     #     echo "Error message detected in log file: $line"
#     # elif [[ "$line" == *"warning"* || "$line" == *"Warning"* ]]
#     # then
#     #     echo "Warning message detected in log file: $line"
#     # fi
# done



























# #!/bin/bash

# LogFile="LogFile.log"

# if [ $# -eq 1 ]
# then
#     LogFile=$1
# else
#     echo "Usage: $0 <LogFile>"
#     exit 1
# fi

# # tail -n0 -f $LogFile | head -n10 | while read line; do
# # 	if [[ "$line" == *"error"* || "$line" == *"Error"* ]]; then
# # 		echo "Error message detected in log file: $line"
# # 	elif [[ "$line" == *"warning"* || "$line" == *"Warning"* ]]; then
# # 		echo "Warning message detected in log file: $line"
# # 	fi
# # done

# previousCount=$(wc -l < $LogFile)

# while true
# do
# 	currentCount=$(wc -l < $LogFile)
# 	if [[ $currentCount -gt $previousCount ]]
# 	then
# 		newLines=$(($currentCount - $previousCount))
# 		tail -n $newLines $LogFile | grep -i "error"
#         if [ $? -eq 0 ]
#         then
#             echo "Error found in log file!"
#         fi
# 		tail -n $newLines $LogFile | grep -i "warning"
#         if [ $? -eq 0 ]
#         then
#             echo "Warning found in log file!"
#         fi
# 		previousCount=$currentCount
# 	fi
# 	sleep 1
# done

# multiple errors, bugs; /dev/null; /dev terminal comm; 






























# #!/bin/bash

# LogFile="LogFile.log"

# tail -n0 -f $LogFile | while read line; do
# 	if [[ "$line" == *"error"* || "$line" == *"Error"* ]]; then
# 		echo "Error message detected in log file: $line"
# 	elif [[ "$line" == *"warning"* || "$line" == *"Warning"* ]]; then
# 		echo "Warning message detected in log file: $line"
# 	fi
# done

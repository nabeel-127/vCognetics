#!/bin/bash

FileIn="bash_scripting_q6.csv"
if [ ! -r "$FileIn" ]; then
    echo "Input file does not exist or is not readable"
    exit 1
fi

# cat $FileIn

rm -f formatted.csv
touch "formatted.csv"
formattedFile="formatted.csv"
rm -f warnings.log
touch "warnings.log"
warningFile="warnings.log"

echo "Full Name,Phone Number,Email Domain" > $formattedFile

while IFS=, read -r firstName lastName email phoneNumber; do
  
    # echo "First Name:$first_name"
    # echo "Last Name:$last_name"
    # echo "Email:$email"
    # echo "Phone Number:$phone_number"
	
	# phoneNumber=${phoneNumber// /}
	# phoneNumber=${phoneNumber//-/}

	if [[ ! "$phoneNumber" =~ ^[0-9]{3}\ [0-9]{3}-[0-9]{4}$ ]]; then
		echo "Invalid phone number: $phoneNumber" >> "$warningFile"
		# echo " " >> "$formattedFile"
    	continue
	fi

	formattedPhoneNumber="(${phoneNumber:0:3}) ${phoneNumber:4:3}-${phoneNumber:8:4}"
	# echo $formattedPhoneNumber #>> "$formattedFile"

	formattedFullName="$firstName $lastName"
	# echo "$formattedFullName"

	formattedEmailDomain=$(echo "$email" | cut -d "@" -f 2)
	# echo "$formattedEmailDomain"

	echo "$formattedFullName,$formattedPhoneNumber,$formattedEmailDomain" >> $formattedFile

done < "$FileIn"

sort -t, -k1 formatted.csv -o formatted.csv

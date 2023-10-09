import os
import sys

print()

if len(sys.argv) == 1:
	current_directory = os.path.dirname(__file__) + '/'
	file_path = current_directory + "my_dummy_file.txt"
elif len(sys.argv) == 2:
	file_path = sys.argv[1]
else:
	print("Incorrect syntax.")
	sys.exit()

if os.path.isfile(file_path):
	os.system(f"chmod 777 {file_path}")

try:
    with open(file_path, 'r') as file:
        print(file.read())
        
except IOError as error:
    print("ERROR.", str(error))
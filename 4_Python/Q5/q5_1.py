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

if not os.path.isfile(file_path):
    with open(file_path, 'w') as file:
        file.write("my_dummy_file.txt . . . ")

os.system(f"chmod a=- {file_path}")
# os.system(f"chmod 777 {file_path}")

try:
    with open(file_path, 'r') as file:
        print(file.read())
        
except IOError as error:
    print("ERROR.", str(error))




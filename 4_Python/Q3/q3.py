import json
import os

current_director = os.path.dirname(os.path.realpath(__file__)) + '/'
file_name = current_director + 'Input.json'
with open(file_name, 'r') as file:
	data = json.load(file)

# print(data)
# print(json.dumps(data))

data_out = {}

for chunk in data:
	occupation = chunk['occupation']
	if occupation in data_out:
		data_out[occupation].append(chunk)
	else:
		data_out[occupation] = [chunk]

print(json.dumps(data_out, indent = 4))

file_name = current_director + 'Output.json' 
with open(file_name, 'w') as file:
	json.dump(data_out, file, indent = 4)


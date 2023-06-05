import os
import matplotlib.pyplot as plt
import matplotlib
matplotlib.use('TkAgg')
from q6_module import square, cube

print()

# with open(os.path.dirname(__file__) + "/my_dummy_file.txt", 'r') as file:
with open("my_dummy_file.txt", 'r') as file:
	data_in = file.read()
	data = [int(x) for x in data_in.split(',')]

data_square = square(data)
data_cube = cube(data)


plt.plot(data_square, data_cube, 'o')
plt.xlabel('Square')
plt.ylabel('Cube')
plt.title('Square vs Cube')
plt.show()


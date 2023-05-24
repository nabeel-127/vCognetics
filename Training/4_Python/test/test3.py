#!/usr/bin/python3
import os

def main():
	current_directory = os.path.dirname(os.path.realpath(__file__))
	try:
		file_name = os.path.join(current_directory, "test3.txt")
		file_in = open(file_name, "r+")
		str = file_in.read()
		print(str)
	except IOError:
		print("test3.txt doesn't exist")
	else:
		pass

if __name__ == '__main__': main()

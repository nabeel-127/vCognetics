Project based on codility tasks 'BinaryGap' and 'FrogJmp'. BinaryGap function for finding the largest binary gap in a given input integer. FrogJmp used to add X to a number multiplied by a multiplier until it is >= another input integer Y. CMakeLists file downloads and sets up the googletest and benchmark dependencies and runs both unit tests and benchmarking on the given functions.

Usage:
Run the following commands to build the targets:
	mkdir build
	cd build
	cmake ..
	make
Once built, open a new terminal inside the build folder and run the following commands for running unit tests:
	cd unittest
	./unittest_exe
And for benchmarking, open a new terminal in build again and run:
	cd benchmark
	./benchmark
#instruction for creating every executable file
all: two_city.exe

#cleans out the bin folder containing the executables
clean:
	rm ../../bin/*.exe

#instructions for creating two_city.exe executable file
two_city.exe: two_city.cpp
	g++ -o ../../bin/two_city.exe two_city.cpp
#instruction to execute the two_city.exe file
run01: 
	@echo ---------------------
	@echo Running two_city.exe
	../../bin/two_city.exe
	@echo

#instruction for creating every executable file
all: circle.exe rectangle.exe

#cleans out the bin folder containing the executables
clean:
	rm ../../bin/*.exe

#instructions for creating circle.exe executable file
circle.exe: circle.cpp
	g++ -o ../../bin/circle.exe circle.cpp
#instruction to execute the circle.exe file
run01: 
	@echo ---------------------
	@echo Running circle.exe
	../../bin/circle.exe
	@echo

#instructions for creating rectangle.exe executable file
rectangle.exe: rectangle.cpp
	g++ -o ../../bin/rectangle.exe rectangle.cpp
#instruction to execute the rectangle.exe file
run02: 
	@echo ---------------------
	@echo Running rectangle.exe
	../../bin/rectangle.exe
	@echo
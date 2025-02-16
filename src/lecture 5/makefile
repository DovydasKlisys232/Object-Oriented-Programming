#instruction for creating every executable file
all: exception.exe area_v1.exe area_v2.exe

#cleans out the bin folder containing the executables
clean:
	rm ../../bin/*.exe

#instructions for creating exception.exe executable file
exception.exe: exception.cpp
	g++ -o ../../bin/exception.exe exception.cpp
#instruction to execute the exception.exe file
run01: 
	@echo ---------------------
	@echo Running exception.exe
	../../bin/exception.exe
	@echo

#instructions for creating area_v1.exe executable file
area_v1.exe: area_v1.cpp
	g++ -o ../../bin/area_v1.exe area_v1.cpp
#instruction to execute the area_v1.exe file
run02: 
	@echo ---------------------
	@echo Running area_v1.exe
	../../bin/area_v1.exe
	@echo

#instructions for creating area_v2.exe executable file and for debugging
area_v2.exe: area_v2.cpp
	g++ -g -o ../../bin/area_v2.exe area_v2.cpp
#debug area_v2.exe
debug01:
	gdb ../../bin/area_v2.exe
#instruction to execute the area_v2.exe file
run03: 
	@echo ---------------------
	@echo Running area_v2.exe
	../../bin/area_v2.exe
	@echo

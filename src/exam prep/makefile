#used to execute all makefile instructions
all: exception.exe pass.exe

runall: run01 run02 run03

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

#instructions for creating pass.exe executable file
pass.exe: pass.cpp
	g++ -o ../../bin/pass.exe pass.cpp
#instruction to execute the pass.exe file
run02: 
	@echo ---------------------
	@echo Running pass.exe
	../../bin/pass.exe
	@echo

#instructions for creating enum.exe executable file
enum.exe: enum.cpp
	g++ -o ../../bin/enum.exe enum.cpp
#instruction to execute the enum.exe file
run03: 
	@echo ---------------------
	@echo Running enum.exe
	../../bin/enum.exe
	@echo
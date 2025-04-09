#instruction for creating every executable file
all: harness.exe 

#cleans out the bin folder containing the executables
clean:
	rm ../../bin/*.exe

#instructions for creating harness.exe executable file after linking
harness.exe: harness.cpp scheduler.cpp
	g++ -o ../../bin/harness.exe harness.cpp scheduler.cpp 
#instruction to execute the harness.exe file
run01: 
	@echo ---------------------
	@echo Running harness.exe
	../../bin/harness.exe 
	@echo

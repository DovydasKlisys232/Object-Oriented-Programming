#instruction for creating every executable file
all: skeleton.exe harness.exe bigsmall.exe

#cleans out the bin folder containing the executables
clean:
	rm ../../bin/*.exe

#instructions for creating skeleton.exe executable file
skeleton.exe: skeleton.cpp
	g++ -o ../../bin/skeleton.exe skeleton.cpp
#instruction to execute the harness.exe file
run01: 
	@echo ---------------------
	@echo Running skeleton.exe
	../../bin/skeleton.exe
	@echo

#instructions for creating harness.exe executable file
harness.exe: harness.cpp
	g++ -o ../../bin/harness.exe harness.cpp
#instruction to execute the harness.exe file
run02: 
	@echo ---------------------
	@echo Running harness.exe
	../../bin/harness.exe
	@echo

#instructions for creating bigsmall.exe executable file
bigsmall.exe: bigsmall.cpp
	g++ -o ../../bin/bigsmall.exe bigsmall.cpp
#instruction to execute the bigsmall.exe file
run03: 
	@echo ---------------------
	@echo Running bigsmall.exe
	../../bin/bigsmall.exe
	@echo


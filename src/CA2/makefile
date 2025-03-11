#instruction for creating every executable file
all: harness.exe planets.exe

#cleans out the bin folder containing the executables
clean:
	rm ../../bin/*.exe

#instructions for creating harness.exe executable file after linking
harness.exe: harness.cpp 
	g++ -o ../../bin/harness.exe harness.cpp 
#instruction to execute the harness.exe file
run01: 
	@echo ---------------------
	@echo Running harness.exe
	../../bin/harness.exe
	@echo

#instructions for creating planets.exe executable file after linking
planets.exe: planets.cpp 
	g++ -o ../../bin/planets.exe planets.cpp 
#instruction to execute the planets.exe file
run02: 
	@echo ---------------------
	@echo Running planets.exe
	../../bin/planets.exe
	@echo
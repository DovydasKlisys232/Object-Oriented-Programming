#instruction for creating every executable file
all: harness.exe main.exe

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

#instructions for creating main.exe executable file after linking
main.exe: main.cpp scheduler.cpp 
	g++ -o ../../bin/main.exe main.cpp scheduler.cpp
#instruction to execute the main.exe file
run02: 
	@echo ---------------------
	@echo Running main.exe
	../../bin/main.exe
	@echo
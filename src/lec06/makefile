#instruction for creating every executable file
all: harness.exe swap.exe namespace.exe

#cleans out the bin folder containing the executables
clean:
	rm ../../bin/*.exe

#instructions for creating harness.exe executable file after linking
harness.exe: harness.cpp tinylib.cpp
	g++ -o ../../bin/harness.exe harness.cpp tinylib.cpp
#instruction to execute the harness.exe file
run01: 
	@echo ---------------------
	@echo Running harness.exe
	../../bin/harness.exe
	@echo

#instructions for creating swap.exe executable file for debugging
swap.exe: swap.cpp
	g++ -g -o ../../bin/swap.exe swap.cpp
#instruction to execute the swap.exe file
run02: 
	@echo ---------------------
	@echo Running swap.exe
	../../bin/swap.exe
	@echo
#debug swap.exe
debug01:
	gdb ../../bin/swap.exe

#instructions for creating namespace.exe executable file after linking
namespace.exe: namespace.cpp
	g++ -o ../../bin/namespace.exe namespace.cpp
#instruction to execute the namespace.exe file
run03: 
	@echo ---------------------
	@echo Running namespace.exe
	../../bin/namespace.exe
	@echo
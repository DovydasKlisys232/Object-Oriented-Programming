#instruction for creating every executable file
all: harness.exe harness2.exe bigsmall.exe

#cleans out the bin folder containing the executables
clean:
	rm ../../bin/*.exe

#instructions for creating harness.exe executable file
harness.exe: harness.cpp
	g++ -o ../../bin/harness.exe harness.cpp
#instruction to execute the harness.exe file
run01: 
	@echo ---------------------
	@echo Running harness.exe
	../../bin/harness.exe
	@echo

#instructions for creating harness2.exe executable file
harness2.exe: harness2.cpp
	g++ -o ../../bin/harness2.exe harness2.cpp
#instruction to execute the harness2.exe file
run02: 
	@echo ---------------------
	@echo Running harness2.exe
	../../bin/harness2.exe
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

#instructions for creating test.exe executable file after linking
test.exe: test.cpp eurolib.cpp
	g++ -o ../../bin/test.exe test.cpp harness.cpp
#instruction to execute the test.exe file
run04: 
	@echo ---------------------
	@echo Running test.exe
	../../bin/test.exe
	@echo
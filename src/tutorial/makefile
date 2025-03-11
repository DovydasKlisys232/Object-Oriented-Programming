#instruction for creating every executable file
all: custom.exe width.exe data.exe read.exe

#cleans out the bin folder containing the executables
clean:
	rm ../../bin/*.exe

#instructions for creating custom.exe executable file after linking
custom.exe: custom.cpp 
	g++ -o ../../bin/custom.exe custom.cpp 
#instruction to execute the custom.exe file
run01: 
	@echo ---------------------
	@echo Running custom.exe
	../../bin/custom.exe
	@echo

#instructions for creating width.exe executable file after linking
width.exe: width.cpp 
	g++ -o ../../bin/width.exe width.cpp 
#instruction to execute the width.exe file
run02: 
	@echo ---------------------
	@echo Running width.exe
	../../bin/width.exe
	@echo

#instructions for creating data.exe executable file after linking
data.exe: data.cpp 
	g++ -o ../../bin/data.exe data.cpp 
#instruction to execute the data.exe file
run03: 
	@echo ---------------------
	@echo Running data.exe
	../../bin/data.exe
	@echo

#instructions for creating read.exe executable file after linking
read.exe: read.cpp 
	g++ -o ../../bin/read.exe read.cpp 
#instruction to execute the read.exe file
run04: 
	@echo ---------------------
	@echo Running read.exe
	../../bin/read.exe
	@echo
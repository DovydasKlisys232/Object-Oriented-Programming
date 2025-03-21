#instruction for creating every executable file
all: animal.exe cat.exe default.exe virtual.exe

#cleans out the bin folder containing the executables
clean:
	rm ../../bin/*.exe

#instructions for creating animal.exe executable file after linking
animal.exe: animal.cpp 
	g++ -o ../../bin/animal.exe animal.cpp 
#instruction to execute the animal.exe file
run01: 
	@echo ---------------------
	@echo Running animal.exe
	../../bin/animal.exe
	@echo

#instructions for creating cat.exe executable file after linking
cat.exe: cat.cpp 
	g++ -o ../../bin/cat.exe cat.cpp 
#instruction to execute the cat.exe file
run02: 
	@echo ---------------------
	@echo Running cat.exe
	../../bin/cat.exe
	@echo

#instructions for creating default.exe executable file after linking
default.exe: default.cpp 
	g++ -o ../../bin/default.exe default.cpp 
#instruction to execute the default.exe file
run03: 
	@echo ---------------------
	@echo Running default.exe
	../../bin/default.exe
	@echo

#instructions for creating virtual.exe executable file after linking
virtual.exe: virtual.cpp 
	g++ -o ../../bin/virtual.exe virtual.cpp 
#instruction to execute the virtual.exe file
run04: 
	@echo ---------------------
	@echo Running virtual.exe
	../../bin/virtual.exe
	@echo
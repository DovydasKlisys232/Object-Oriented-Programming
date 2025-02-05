#instruction for creating every executable file
all: type-safe.exe const_mod.exe

#cleans out the bin folder containing the executables
clean:
	rm ../../bin/*.exe

#instructions for creating type-safe.exe executable file
type-safe.exe: type-safe.cpp
	g++ -o ../../bin/type-safe.exe type-safe.cpp
#instruction to execute the type-safe.exe file
run01: 
	@echo ---------------------
	@echo Running type-safe.exe
	../../bin/type-safe.exe
	@echo

#instructions for creating const_mod.exe executable file
const_mod.exe: const_mod.cpp
	g++ -o ../../bin/const_mod.exe const_mod.cpp
#instruction to execute the const_mod.exe file
run02: 
	@echo ---------------------
	@echo Running const_mod.exe
	../../bin/const_mod.exe
	@echo


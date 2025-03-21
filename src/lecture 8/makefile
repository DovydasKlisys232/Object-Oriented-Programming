#instruction for creating every executable file
all: write.exe read.exe words.exe exception.exe

#cleans out the bin folder containing the executables
clean:
	rm ../../bin/*.exe

#instructions for creating write.exe executable file
write.exe: write.cpp
	g++ -o ../../bin/write.exe write.cpp
#instruction to execute the write.exe file
run01: 
	@echo ---------------------
	@echo Running write.exe
	../../bin/write.exe
	@echo

#instructions for creating read.exe executable file
read.exe: read.cpp
	g++ -o ../../bin/read.exe read.cpp
#instruction to execute the read.exe file
run02: 
	@echo ---------------------
	@echo Running read.exe
	../../bin/read.exe
	@echo

#instructions for creating words.exe executable file
words.exe: words.cpp
	g++ -o ../../bin/words.exe words.cpp
#instruction to execute the words.exe file
run03: 
	@echo ---------------------
	@echo Running words.exe
	../../bin/words.exe
	@echo

#instructions for creating exception.exe executable file
exception.exe: exception.cpp
	g++ -o ../../bin/exception.exe exception.cpp
#instruction to execute the exception.exe file
run04: 
	@echo ---------------------
	@echo Running exception.exe
	../../bin/exception.exe
	@echo

#instructions for creating state.exe executable file
state.exe: state.cpp
	g++ -o ../../bin/state.exe state.cpp
#instruction to execute the state.exe file
run05: 
	@echo ---------------------
	@echo Running state.exe
	../../bin/state.exe
	@echo
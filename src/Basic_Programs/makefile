#used to execute all makefile instructions
all: hello.exe divide.exe float_div.exe string.exe sum1.exe sum2.exe string2.exe

runall: run01 run02 run03

#cleans out the bin folder containing the executables
clean:
	rm ../../bin/*.exe

#instructions for creating hello.exe executable file
hello.exe: hello.cpp
	g++ -o ../../bin/hello.exe hello.cpp
#instruction to execute the hello.exe file
run01: 
	@echo ---------------------
	@echo Running hello.exe
	../../bin/hello.exe
	@echo
	

#instructions for creating divide executable file
divide.exe: divide.cpp
	g++ -o ../../bin/divide.exe divide.cpp
#instruction to execute the divide.exe file
run02: 
	@echo ---------------------
	@echo Running divide.exe
	../../bin/divide.exe
	@echo
	

#instructions for creating float_div executable file
float_div.exe: float_div.cpp
	g++ -o ../../bin/float_div.exe float_div.cpp
#instruction to execute the float_div.exe file
run03: 
	@echo ---------------------
	@echo Running float_div.exe
	../../bin/float_div.exe
	@echo
	

#instructions for creating string executable file
string.exe: string.cpp
	g++ -o ../../bin/string.exe string.cpp

#instructions for creating sum1 executable file
sum1.exe: sum1.cpp
	g++ -o ../../bin/sum1.exe sum1.cpp

#instructions for creating sum2 executable file
sum2.exe: sum2.cpp
	g++ -o ../../bin/sum2.exe sum2.cpp

#instructions for creating string2 executable file
string2.exe: string2.cpp
	g++ -o ../../bin/string2.exe string2.cpp

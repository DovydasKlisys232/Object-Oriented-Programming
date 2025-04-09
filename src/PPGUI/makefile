#instruction for creating every executable file
all: fltk.exe 

#cleans out the bin folder containing the executables
clean:
	rm ../../ppgui/*.exe

#instructions for creating fltk.exe executable file after linking
fltk.exe: fltk.cpp
	g++ -o ../../ppgui/fltk.exe fltk.cpp -lfltk
#instruction to execute the fltk.exe file
run01: 
	@echo ---------------------
	@echo Running fltk.exe
	../../ppgui/fltk.exe
	@echo

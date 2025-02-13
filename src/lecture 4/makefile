#instruction for creating every executable file
all: two_city.exe temp_stats.exe guess.exe name-value_v1.exe name-value_v2.exe

#cleans out the bin folder containing the executables
clean:
	rm ../../bin/*.exe

#instructions for creating two_city.exe executable file
two_city.exe: two_city.cpp
	g++ -o ../../bin/two_city.exe two_city.cpp
#instruction to execute the two_city.exe file
run01: 
	@echo ---------------------
	@echo Running two_city.exe
	../../bin/two_city.exe
	@echo

#instructions for creating temp_stats.exe executable file
temp_stats.exe: temp_stats.cpp
	g++ -o ../../bin/temp_stats.exe temp_stats.cpp
#instruction to execute the temp_stats.exe file
run02: 
	@echo ---------------------
	@echo Running temp_stats.exe
	../../bin/temp_stats.exe
	@echo

#instructions for creating guess.exe executable file
guess.exe: guess.cpp
	g++ -o ../../bin/guess.exe guess.cpp
#instruction to execute the guess.exe file
run03: 
	@echo ---------------------
	@echo Running guess.exe
	../../bin/guess.exe
	@echo

#instructions for creating name-value_v1.exe executable file
name-value_v1.exe: name-value_v1.cpp
	g++ -o ../../bin/name-value_v1.exe name-value_v1.cpp
#instruction to execute the name-value_v1.exe file
run04: 
	@echo ---------------------
	@echo Running name-value_v1.exe
	../../bin/name-value_v1.exe
	@echo

#instructions for creating name-value_v2.exe executable file
name-value_v2.exe: name-value_v2.cpp
	g++ -o ../../bin/name-value_v2.exe name-value_v2.cpp
#instruction to execute the name-value_v2.exe file
run05: 
	@echo ---------------------
	@echo Running name-value_v2.exe
	../../bin/name-value_v2.exe
	@echo
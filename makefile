COMPILE = main.cpp battle.cpp choices.cpp classes.cpp ascii.cpp
HEADER_COMPILE = battle.hpp choices.hpp classes.hpp ascii.hpp

compile:
	g++ $(COMPILE) -o godofwar

zip:
	zip godofwar.zip $(COMPILE) $(HEADER_COMPILE)
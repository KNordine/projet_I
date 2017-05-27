#change your file names below
SRCtool=Callbacks.cpp data.cpp
SRCmain=main.cpp
EXEC=runnable

#Do not touch under this line
CXX=g++
CFLAGS=-Wall -std=c++14 -g -O0
EXEFLAGS=-lsx
OBJtool=$(subst .cpp,.o,$(SRCtool))
HDRtool=$(subst .cpp,.hpp,$(SRCtool))
OBJmain=$(subst .cpp,.o,$(SRCmain))
OBJtest=$(subst .cpp,.o,$(SRCtest))
	
all: main

main: main.o tool.o
	$(CXX) $(CFLAGS) -o $(EXEC) $(OBJmain) $(OBJtool) $(EXEFLAGS)
main.o:
	$(CXX) $(CFLAGS) -c $(SRCmain) 
tool: tool.o

tool.o: $(HDRtool)
	$(CXX) $(CFLAGS) -c $(SRCtool)

run:
	./$(EXEC)
clean:
	rm -rf *.o
cleaner: clean
	rm -rf $(EXEC)

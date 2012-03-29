EXE = *.exe *.pdb *.suo *.ilk
OBJS = *.OBJ
OBJ = main.obj map.obj 
FLAGS = \link 
LIBS = map.lib snake.lib

all : main.exe

main.exe : $(OBJ)

map.obj : map.h


%.exe :
	link /out:$@ $^

$(OBJ) : %.obj : %.cpp
	cl /c $<
	

clear:
	-del $(EXE) $(OBJS)

push:
	push.bat

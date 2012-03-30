EXE = *.exe *.pdb *.suo *.ilk
OBJS = *.OBJ
OBJ = main.obj map.obj Snake.obj 
FLAGS = \link 
LIBS = map.lib snake.lib

all : main.exe

main.exe : $(OBJ)

map.obj : map.h
Snake.obj: Snake.h


%.exe :
	link /out:$@ $^

$(OBJ) : %.obj : %.cpp
	cl /c $<
	

clear:
	-del $(EXE) $(OBJS)

push:
	push.bat

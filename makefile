EXE = *.exe *.pdb *.suo *.ilk
OBJS = *.OBJ
OBJ = main.obj Snakemap.obj Snake.obj
FLAGS = \link 

all : main.exe

main.exe : $(OBJ)

Snakemap.obj : Snakemap.h

Snake.obj : Snake.h SnakeMap.h



%.exe :
	link /out:$@ $^

$(OBJ) : %.obj : %.cpp
	cl /c $<
	

clear:
	-del $(EXE) $(OBJS)

push:
	push.bat

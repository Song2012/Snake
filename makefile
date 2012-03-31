EXE = *.exe *.pdb *.suo *.ilk
OBJS = *.OBJ
OBJ = main.obj Snakemap.obj Snake.obj food.obj tool.obj
PATH = .\obj\\

all : main.exe

main.exe : $(OBJ)

Snakemap.obj : Snakemap.h 

Snake.obj : Snake.h SnakeMap.h food.h tool.h

food.obj: food.h tool.h

tool.obj:tool.h

%.exe :
	link /out:$@ $^

$(OBJ) : %.obj : %.cpp
	cl /c  $(PATH) $<
	

clear:
	-del $(EXE) $(OBJS)


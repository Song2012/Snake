EXE = *.exe *.pdb *.suo *.ilk
OBJ = *.obj

clear:
	-del $(EXE) $(OBJ)

push:
	git push origin master

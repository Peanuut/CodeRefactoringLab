#Makes the test for the calculations as "TEST.exe"
test: calculations.c calcTests.c Unity/src/unity.c
	gcc calculations.c calcTests.c Unity/src/unity.c -o TEST

#Makes the main program as "MAINPROGRAM.exe"
program: main.c calculations.c menufunctions.c
	gcc main.c calculations.c menufunctions.c -o MAINPROGRAM

clean:
	-rm -f *.o

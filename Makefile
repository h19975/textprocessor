a4q4: main.o allcaps.o count.o decorator.o doublewords.o dropfirst.o echo.o textprocess.o
	g++-5 -std=c++14 main.o allcaps.o count.o decorator.o doublewords.o dropfirst.o echo.o textprocess.o -o a4q4
decorator.o: decorator.cc decorator.h textprocess.h
	g++-5 -std=c++14 -c decorator.cc
echo.o: echo.cc echo.h textprocess.h
	g++-5 -std=c++14 -c echo.cc
allcaps.o: allcaps.cc allcaps.h decorator.h
	g++-5 -std=c++14 -c allcaps.cc
count.o: count.cc count.h decorator.h
	g++-5 -std=c++14 -c count.cc
doublewords.o: doublewords.cc doublewords.h decorator.h
	g++-5 -std=c++14 -c doublewords.cc
dropfirst.o: dropfirst.cc dropfirst.h decorator.h
	g++-5 -std=c++14 -c dropfirst.cc
textprocess.o: textprocess.cc textprocess.h 
	g++-5 -std=c++14 -c textprocess.cc
main.o: main.cc textprocess.h echo.h dropfirst.h doublewords.h decorator.h count.h allcaps.h
	g++-5 -std=c++14 -c main.cc

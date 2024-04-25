todo: main.o empresa.o empleado.o fijo.o jornalero.o paga.o cambio.o
	g++ -o main.exe main.o empresa.o empleado.o fijo.o jornalero.o paga.o cambio.o

main.o: main.cpp
	g++ -c main.cpp

empresa.o: empresa.h empresa.cpp empleado.h
	g++ -c empresa.cpp

empleado.o: empleado.h empleado.cpp
	g++ -c empleado.cpp

fijo.o: fijo.h fijo.cpp empleado.h
	g++ -c fijo.cpp

jornalero.o: jornalero.h jornalero.cpp empleado.h
	g++ -c jornalero.cpp

paga.o: paga.h paga.cpp cambio.h
	g++ -c paga.cpp

cambio.o: cambio.h cambio.cpp
	g++ -c cambio.cpp

limpiar:
	rm *.o main.exe
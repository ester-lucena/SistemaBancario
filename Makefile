#criação dos arquivos .o
 cliente.o: cliente.cpp Cliente.h
	g++ cliente.cpp -c

 contabancaria.o: contabancaria.cpp ContaBancaria.h Cliente.h
	g++ contabancaria.cpp -c 

 main.o: main.cpp contabancaria.cpp ContaBancaria.h cliente.cpp Cliente.h
	g++ main.cpp -c

#ligação dos arquivos .o
 banco: cliente.o contabancaria.o main.o
	g++ cliente.o contabancaria.o main.o -o banco

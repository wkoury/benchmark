all: benchmark

benchmark: benchmark.c benchmark.o
	gcc benchmark.c -o benchmark	

benchmark.o: benchmark.c
	gcc benchmark.c -c -o benchmark.o

time:
	make clean
	make
	time ./benchmark
	make clean

dev:
	make clean
	make
	./benchmark
	make clean

.c.o:
	gcc -c -03 -Wall $< -o $@

clean:
	rm -f *.o benchmark

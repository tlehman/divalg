dirs:
	mkdir -p bin lib

libs: dirs
	g++ -c src/quaternion.cpp -o lib/quaternion.o -std=c++11

test: libs
	g++ lib/quaternion.o test/quaternion_test.cpp -o bin/qtest -std=c++11 && ./bin/qtest

clean:
	rm -rf bin lib

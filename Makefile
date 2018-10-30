test: dirs
	g++ -g test/octonion_test.cpp -o bin/test -std=c++11 && ./bin/test

qtest: dirs
	g++ -g test/quaternion_test.cpp -o bin/qtest -std=c++11 && ./bin/qtest

dirs:
	mkdir -p bin lib

clean:
	rm -rf bin lib

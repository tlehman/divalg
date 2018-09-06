test: dirs
	g++ test/quaternion_test.cpp -o bin/qtest -std=c++11 && ./bin/qtest

dirs:
	mkdir -p bin lib

clean:
	rm -rf bin lib

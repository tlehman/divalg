#include <iostream>
#include "../include/quaternion.h"
using namespace divalg;
using namespace std;

void test_copy_constructor() {
  quaternion<int> p(1,2,3,4);
  quaternion<int> q(p);
  static_assert(p == q, "Copy constructor is incorrect");
}

void test_quaternion_ints() {
  quaternion<int> q(1,2,3,4);
}

void test_quaternion_floats() {
  quaternion<float> q(2.5, -1., -3.2, 5.5);
}

void test_quaternion_doubles() {
  quaternion<double> q(2.5, -1., -3.2, 5.5);
}

int main(int argc, char **argv) {
  test_quaternion_ints();
  test_quaternion_floats();
  test_quaternion_doubles();
}

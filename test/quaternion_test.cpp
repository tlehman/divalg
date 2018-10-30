#include <iostream>
#include <assert.h>
#include "../include/quaternion.h"
using namespace std;

void test_copy_constructor() {
  quaternion<int> p(1,2,3,4);
  quaternion<int> q(p);
  assert(p == q);
}

void test_quaternion_addition() {
  quaternion<int> q(1,2,3,4);
  quaternion<int> p(4,3,2,1);
  quaternion<int> r(5,5,5,5);

  assert((p + q) == (q + p));
  assert((p + q == r));
}

void test_quaternion_scaling() {
  quaternion<int> p(1,1,1,1);
  quaternion<int> q(5,5,5,5);

  assert(p*6 == q);
}

void test_quaternion_multiplication() {
  quaternion<int> positive_one(1,0,0,0);
  quaternion<int> negative_one(-1,0,0,0);
  quaternion<int> i(0,1,0,0);
  quaternion<int> j(0,1,0,0);
  quaternion<int> k(0,1,0,0);

  assert(i * i == negative_one);
  assert(j * j == negative_one);
  assert(k * k == negative_one);
}

int main(int argc, char **argv) {
  test_quaternion_addition();
  test_copy_constructor();
}

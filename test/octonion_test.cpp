#include <iostream>
#include <assert.h>
#include "../include/octonion.h"
using namespace std;

void test_copy_constructor() {
  int coefs[8] = {1,1,1,1,1,1,1,1};
  octonion<int> o(coefs);
  octonion<int> p(o);
  assert(p == o);
}

void test_octonion_addition() {
  int coefs1[8] = {1,1,1,1,1,1,1,1};
  int coefs2[8] = {2,2,2,2,2,2,2,2};
  octonion<int> o(coefs1);
  octonion<int> p(coefs2);
  assert((o+o)==p);
}

int main(int argc, char **argv) {
  test_octonion_addition();
  test_copy_constructor();
}

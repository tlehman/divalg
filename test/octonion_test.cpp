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

void test_octonion_ouput() {
  int coefs1[8] =  {1,0,0,0,0,0,0,0};
  int coefsE1[8] = {0,1,0,0,0,0,0,0};
  int coefsE2[8] = {0,0,1,0,0,0,0,0};
  int coefsE4[8] = {0,0,0,0,1,0,0,0};
  octonion<int> one(coefs1);
  octonion<int> e1(coefsE1);
  octonion<int> e2(coefsE2);
  octonion<int> e4(coefsE4);
  cout << one << endl
       << e1 << endl
       << e2 << endl
       << e4 << endl;
}
int main(int argc, char **argv) {
  test_octonion_addition();
  test_copy_constructor();
  test_octonion_ouput();
}

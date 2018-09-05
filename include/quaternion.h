#include <iostream>

namespace divalg {
  using std::ostream;

  template <class scalar>
  class quaternion {
  public:
    quaternion(scalar a, scalar b, scalar c, scalar d) {
      this->_a = a;
      this->_b = b;
      this->_c = c;
      this->_d = d;
    }
    scalar a() { return _a; }
    scalar b() { return _b; }
    scalar c() { return _c; }
    scalar d() { return _d; }
  private:
    scalar _a;
    scalar _b;
    scalar _c;
    scalar _d;
  };

  template <class scalar>
  ostream& operator<<(const ostream& os, quaternion<scalar> q) {
    os << q.a();
  }
};

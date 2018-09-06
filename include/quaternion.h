#include <iostream>

namespace divalg {
  using std::ostream;
  using std::string;

  template <class scalar>
  class quaternion {
  public:
    quaternion(scalar a, scalar b, scalar c, scalar d) {
      this->_a = a;
      this->_b = b;
      this->_c = c;
      this->_d = d;
    }

    // Copy constructor
    quaternion(const quaternion& q) {
      quaternion(q.a(), q.b(), q.c(), q.d());
    }

    scalar a() const { return _a; }
    scalar b() const { return _b; }
    scalar c() const { return _c; }
    scalar d() const { return _d; }
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

  template <class scalar>
  bool operator==(const quaternion<scalar>& p,
                  const quaternion<scalar>& q) {
    return p.a() == q.a() &&
      p.b() == q.b() &&
      p.c() == q.c() &&
      p.d() == q.d();
  }
};

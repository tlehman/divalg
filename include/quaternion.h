#include <iostream>

using std::ostream;
using std::string;

template <class scalar>
class quaternion {
public:
  quaternion(scalar a, scalar b, scalar c, scalar d) {
    _a = a;
    _b = b;
    _c = c;
    _d = d;
  }

  // Copy constructor
  quaternion(const quaternion& q) {
    _a = q.a();
    _b = q.b();
    _c = q.c();
    _d = q.d();
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
ostream& operator<<(ostream& os, const quaternion<scalar>& q) {
  os << q.a() << " + "
     << q.b() << "i + "
     << q.c() << "j + "
     << q.d() << "k";
  return os;
}

template <class scalar>
bool operator==(const quaternion<scalar>& p,
                const quaternion<scalar>& q) {
  return p.a() == q.a() &&
    p.b() == q.b() &&
    p.c() == q.c() &&
    p.d() == q.d();
}

template <class scalar>
quaternion<scalar> operator+(const quaternion<scalar>& p,
                             const quaternion<scalar>& q) {
  return quaternion<int>(p.a() + q.a(),
                         p.b() + q.b(),
                         p.c() + q.c(),
                         p.d() + q.d());
}

template <class scalar>
quaternion<scalar> operator*(const quaternion<scalar>& p,
                             scalar c) {
  return quaternion<int>(p.a() * c,
                         p.b() * c,
                         p.c() * c,
                         p.d() * c);
}


template <class scalar>
quaternion<scalar> operator*(const quaternion<scalar>& p,
                             const quaternion<scalar>& q) {
  // TODO
  return p;
};

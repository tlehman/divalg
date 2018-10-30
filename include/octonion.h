#include <iostream>

using std::ostream;
using std::string;

template <class scalar>
class octonion {
public:
  octonion(scalar coefs[]) {
    for(int i = 0; i < 8; i++) {
      coefficients[i] = coefs[i];
    }
  }

  // Copy constructor
  octonion(const octonion& o) {
    for(int i = 0; i < 8; i++) {
      coefficients[i] = o.coefficient(i);
    }
  }

  scalar coefficient(int index) const {
    return coefficients[index];
  }
protected:
  scalar coefficients[8];
};


template <class scalar>
ostream& operator<<(ostream& os, octonion<scalar> q) {
  os << q.coefficient(0) << " + "
     << q.coefficient(1) << "e₁ + "
     << q.coefficient(2) << "e₂ + "
     << q.coefficient(3) << "e₃ + "
     << q.coefficient(4) << "e₄ + "
     << q.coefficient(5) << "e₅ + "
     << q.coefficient(6) << "e₆ + "
     << q.coefficient(7) << "e₇";
  return os;
};

template <class scalar>
bool operator==(const octonion<scalar>& a, const octonion<scalar>& b) {
  bool same = true;
  for(int i = 0; i < 8; i++) {
    same = same && (a.coefficient(i) == b.coefficient(i));
  }
  return same;
}

template <class scalar>
octonion<scalar> operator+(const octonion<scalar>& a, const octonion<scalar>& b) {
  scalar coefs[8];
  for(int i = 0; i < 8; i++) {
    coefs[i] = (a.coefficient(i) + b.coefficient(i));
  }
  return octonion<scalar>(coefs);
}


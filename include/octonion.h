#include <iostream>
#include <sstream>

using std::ostream;
using std::ostringstream;
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

  string term(int index) {
    scalar c = coefficient(index);
    string basis[7] = {"e₁", "e₂", "e₃", "e₄", "e₅", "e₆", "e₇"};
    ostringstream retval;
    if(c != 0) {
      if(c == 1 && index == 0) {
        retval << "1";
      }
      if(index > 0) {
        retval << basis[index-1];
        if(index < 7) {
          retval << " + ";
        }
      }
    }
    return retval.str();
  }

  scalar coefficient(int index) const {
    return coefficients[index];
  }
protected:
  scalar coefficients[8];
};


template <class scalar>
ostream& operator<<(ostream& os, octonion<scalar> q) {
  os << q.term(0)
     << q.term(1)
     << q.term(2)
     << q.term(3)
     << q.term(4)
     << q.term(5)
     << q.term(6)
     << q.term(7);
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


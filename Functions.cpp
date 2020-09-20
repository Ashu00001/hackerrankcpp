#include <iostream>
using namespace std;
class large {
  int a, b, c, d;

public:
  void max_of_four(int x, int y, int z, int h) {
    a = x;
    b = y;
    c = z;
    d = h;

    if (a > b && a > c && a > d) {
      cout << a;
    }

    if (b > c && b > d && b > a) {
      cout << b;
    }

    if (c > d && c > b && c > a) {
      cout << c;
    }
    if (d > a && d > b && d > c) {
      cout << d;
    }
  }
};
int main() {
  int a, b, c, d;
  large ob;
  cin >> a >> b >> c >> d;
  ob.max_of_four(a, b, c, d);
}

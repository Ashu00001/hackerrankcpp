#include <iostream>
#include<string.h>
using namespace std;
class Student {
  int a, std;
  char b[100], c[100];

public:
  void set_age() { cin >> a; }
  void get_age() { cout << a << "\n"; }
  void set_first_name() { cin >> b; }
  void set_last_name() { cin >> c; }
  void set_standard() { cin >> std; }
  void get_first_name() { cout << b << "\n"; }
  void get_last_name() { cout << c << ", "; }
  void get_standard() { cout << std<<"\n"<<"\n"; }
  void data(){cout<<a<<","<<b<<","<<c<<","<<std;
  }
};
int main() {
  Student ob;
  ob.set_age();
  ob.set_first_name();
  ob.set_last_name();
  ob.set_standard();
  ob.get_age();
  ob.get_last_name();
  ob.get_first_name();
  ob.get_standard();
  ob.data();
}

 #include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char e=a[0];
    a[0]=b[0];
    b[0]=e;
    cout<<a<<" "<<b;
    return 0;
}
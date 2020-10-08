#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n;
    cin>>n;
       vector <long long> a;
       for(int i=0;i<n;i++)
       {    long long x;
       cin>>x;
          a.push_back(x);
       }
       sort(a.begin(),a.end());
     for(int i=0;i<a.size();i++)
     {
         cout<<a[i]<<" ";
     }
    return 0;
}

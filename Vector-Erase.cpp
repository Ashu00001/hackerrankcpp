#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n,c,a,b;
    cin>>n;
   vector<long long> v;
   for(int i=0;i<n;i++)
   {
       long long x;
       cin>>x;
       v.push_back(x);
   }
   cin>>c;
   cin>>a>>b;
    v.erase(v.begin()+c-1);
    
    v.erase(v.begin()+a-1,v.begin()+b-1);
   cout<<v.size()<<"\n";
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<" ";
   }
    return 0;
}

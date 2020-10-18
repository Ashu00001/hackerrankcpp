#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,y,s=0;
    cin>>x>>y;
    int *a[x];
    while(x>0)
    {
        int n;
        cin>>n;
        a[s]=new int[n];
        for(int i=0;i<n;i++)
        cin>>a[s][i];

        s++;
        x--;
    }
    while(y>0)
{
    int c,d;
    cin>>c>>d;
    cout<<a[c][d]<<endl;
    y--;
}
    return 0;
}

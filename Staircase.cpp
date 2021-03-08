#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {

int j=n;
while(j>0)
{
    int i=0;
    while(i<j-1)
    {
        cout<<" ";
        i++;
    }
    for(int k=j-1;k<n;k++)
    {
        cout<<"#";
    }
    cout<<"\n";
    j--;
}
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

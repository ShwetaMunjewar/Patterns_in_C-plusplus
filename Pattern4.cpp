/*  3 2 1
    3 2 1
    3 2 1  */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a=n;
    while(a>=1)
    {
        int b=n;
        while(b>=1)
        {
            cout<<" "<<b;
            b=b-1;
        }
        cout<<endl;
        a=a-1;
    }}

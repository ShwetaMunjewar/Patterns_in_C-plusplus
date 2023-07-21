/* 1 1 1 1
   2 2 2 2
   3 3 3 3
   4 4 4 4  */

#include<iostream>
using namespace std;
int main()
{
    int a=1;
    int n;
    cin>>n;

    while(a<=n)
    {
        int b=1;
        while(b<=n)
        {
            cout<<a;
            b=b+1;
        }
        cout<<endl;
        a=a+1;
    }
}

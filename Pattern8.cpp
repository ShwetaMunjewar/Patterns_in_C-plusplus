/* 1
   2 3
   4 5 6
   7 8 9 10 */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int count=1;
    int r=1;
    while(r<=n)
    {
        int c=1;
        while(c<=r)
        {
            cout<<count;
            count=count+1;
            c=c+1;
        }
        cout<<endl;
        r=r+1;
    }
}



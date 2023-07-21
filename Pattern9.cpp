/* 1
   2 3
   3 4 5
   4 5 6 7 */

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
        int count=r;
        while(c<=r)
        {
            cout<<" "<<count;
            count=count+1;
            c=c+1;
        }
        cout<<endl;
        r=r+1;
    }
}



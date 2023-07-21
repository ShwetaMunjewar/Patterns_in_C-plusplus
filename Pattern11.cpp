/* 1
   2 1
   3 2 1
   4 3 2 1 */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int r=1;
    while(r<=n)
    {
        int c=1;
        while(c<=r)
        {
            cout<<" "<<(r-c+1);
            c=c+1;
        }
        cout<<endl;
        r=r+1;
    }
}

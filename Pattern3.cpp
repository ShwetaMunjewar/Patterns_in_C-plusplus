/* 1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4  */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a=1;
    while(a<=n)
    {
        int b=1;
        while(b<=n)
        {
            cout<<" "<<b;
            b=b+1;
        }
    cout<<endl;
    a=a+1;
    }


}




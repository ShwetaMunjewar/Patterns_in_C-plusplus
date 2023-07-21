/* 1 2 3
   4 5 6
   7 8 9 */

#include<iostream>
using namespace std;
int main()
{
    int a=1;
    int n;
    cin>>n;

    int count=1;
    while(a<=n)
    {
        int b=1;
        while(b<=n)
        {
            cout<<" "<<count;
            count=count+1;

            b=b+1;
        }
        cout<<endl;
        a=a+1;
    }

   }


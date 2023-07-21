/*  * * * *
    * * * *
    * * * *
    * * * *  */
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
            cout<<"* ";
            b=b+1;
        }
        cout<<endl;
        a=a+1;
    }
}

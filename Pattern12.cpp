/* A A A
   B B B
   C C C */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int r = 1;
    while(r<=n)
    {
        int c = 1;
        while(c<=n)
        {
            char ch= 'A'+r-1;
            cout<<" "<<ch;
            c=c+1;
        }
        cout<<endl;
        r=r+1;
    }
}

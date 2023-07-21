/* A
   B C
   C D E
   D E F G */

#include<iostream>
using namespace std;
int main()
{
    int n;
    char ch='A';
    cout<<"Enter n: ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch='A'+i+j-2;
            cout<<ch;
            j=j+1;
        }

        i=i+1;
        cout<<endl;
    }
}


/* A
   A B
   A B C
   A B C D  */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        char count='A';
        while(j<=i)
        {
            char ch='A'+i-1;
            //cout<<ch;
            cout<<" "<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}


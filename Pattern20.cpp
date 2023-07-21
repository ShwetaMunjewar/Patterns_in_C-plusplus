/* D
   C C
   B B B
   A A A A */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

   // char ch='Z';
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch='A'+n-i;
            cout<<" "<<ch;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
}

/* D
   C D
   B C D
   A B C D */

#include<iostream>
using namespace std;
int main()
{

    int n;
    int count=n;
    cout<<"Enter n: ";
    cin>>n;

   // char ch='Z';
    int row=1;
    while(row<=n)
    {
        int col=1;
        char ch='A'+n-row;
        while(col<=row)
        {
            cout<<" "<<ch;
            ch=ch+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}

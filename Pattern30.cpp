/*   1 2 3 4 5 5 4 3 2 1
     1 2 3 4 * * 4 3 2 1
     1 2 3 * * * * 3 2 1
     1 2 * * * * * * 2 1
     1 * * * * * * * * 1   */

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
        while(j<=n-i+1)
        {
            cout<<" "<<j;
             j=j+1;
        }
        int s1=i-1;
        while(s1)
        {
            cout<<" *";
            s1--;
        }
        int s2=i-1;
        while(s2)
        {
            cout<<"* ";
            s2=s2-2;
        }

        int j2=n-i-j+2;
        while(j2)
        {
            cout<<" "<<j2;
            j2--;

        }
        cout<<endl;
          i=i+1;
}
}


/*  1 2 3 4
      2 3 4
        3 4
          4  */

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
        int space=i-1;
        while(space)
        {
            cout<<"";
            space=space-1;
        }
        int j=1;
        while(j>=n-i-2)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}


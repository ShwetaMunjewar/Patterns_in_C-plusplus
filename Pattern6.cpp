/* *
   * *
   * * *
   * * * *   */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int rows=1;
    while(rows<=n)
    {
        int cols=1;
        while(cols<=rows)
        {
            cout<<"* ";
            cols=cols+1;
        }
        cout<<endl;
        rows=rows+1;

    }
}

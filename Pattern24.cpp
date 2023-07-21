/*  * * * *
    * * *
    * *
    *     */

#include<iostream>
using namespace std;
int main()
{
    int rows, i,j;
    cout<<"Enter no of rows: ";
    cin>>rows;

    i=rows;
    while(i>=1)
    {
        j=1;
        while(j<=i)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i--;
    }

}

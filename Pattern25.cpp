/*   * * * *
       * * *
         * *
           *   */
#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter row: ";
    cin>>row;

    int i=0;
    while(i<row)
    {
        int j=0;
        while(j<i)
        {
            cout<<"  ";
            j++;
        }
        int k=0;
        while(k<row-i)
        {
            cout<<"* ";
            k=k+1;
        }
        cout<<endl;
        i=i+1;
    }
}

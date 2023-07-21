/* A B C
   D E F
   G H I */

#include<iostream>
using namespace std;
int main(){

    int n,repeat = 1;
    char ch = 65;
    cin >>n;

    while (repeat <= n)
    {
        int i=1;
        while (i<=n)
        {
            cout << ch << " ";
            ch = ch + 1;
            i=i+1;
        }
        cout <<endl;
        repeat = repeat + 1;

    }

}

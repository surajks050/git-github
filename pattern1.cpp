#include<iostream>
using namespace std;
int main()
{
    int i=1, j=1, n;
    cout<<"Enter the number ";
    cin>>n;
    while(i<=n)
    {
        while(j<=n)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        j=1;
        i=i+1;
    }
}
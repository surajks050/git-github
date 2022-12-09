#include<iostream>
using namespace std;
int main()
{
    int n,i=1,j=1;
    cout<<"Enter the rows and columns ";
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
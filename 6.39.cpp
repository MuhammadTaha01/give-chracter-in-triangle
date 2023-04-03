#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    int n,i,j;
    cout<<"Enter the height of Triangle: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
    return 0;
}

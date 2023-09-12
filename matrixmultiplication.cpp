#include<iostream>
using namespace std;
int main()
{
    int a[2][2];
    int b[2][2];
    int ans[2][2];
    cout<<"A matrix \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"a : ";
            cin>>a[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"b : ";
            cin>>b[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            ans[i][j] =0;
            for(int k=0;k<2;k++)//here k is no of rows in second  matrix
            {
                ans[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }
    cout<<"the multiplication of 2 matices are : \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }

}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void freq(int ar[],int n,int k,int f[])
{
    for(int i=0;i<n;i++)
    {
        f[ar[i]]++;
    }
    for(int i=1;i<k;i++)
    {
        f[i] += f[i-1];

    }
}
int maxiElement(int ar[],int n)
{
    int maxi=ar[0];
    for(int i=1;i<n;i++)
    {
        if(ar[i] > maxi){
            maxi =ar[i];
        }
    }
    return maxi;
}
int main(){
    int ar[] ={5,4,2,1,1,6,4};
    int n = sizeof(ar)/sizeof(ar[0]);
    int k=maxiElement(ar,n);
    int f[k+1] = {0};
    freq(ar,n,k+1,f);
    cout<<"Frequency array : \n";
    for(int ele :f)
    {
        cout<<ele<<" ";
    }
    int op[n];
    int i=n;
    while(i--)
    {
        op[f[ar[i]]-1]=ar[i];
        f[ar[i]] -=1;
    }
    
    for(int j=0;j<n;j++)
    {
        ar[j] = op[j];
    }
    cout<<"\nSorted array : ";
    for(int item:ar)
    {
        cout<<item<<" ";
    }
}

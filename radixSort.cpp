// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int getmax(int ar[],int n)
{
    int max=ar[0];
    for(int i=1;i<n;i++)
    {
        if(ar[i]>max){
            max=ar[i];
        }
    }
    return max;
}
void countingSort(int ar[],int n,int exp)
{
    int f[10] ={0};
    for(int i=0;i<n;i++)
    {
        f[((ar[i]/exp) %10)]++;
    }
    //prefix sum
    for(int i=1;i<n;i++)
    {
        f[i] =f[i] +  f[i-1];
    }
    int op[n];
    for(int i=n-1;i>=0;i--)
    {
        op[f[(ar[i]/exp)%10] - 1] =ar[i];
        f[((ar[i]/exp)% 10)]--;
    }
    for(int i=0;i<n;i++)
    {
        ar[i]=op[i];
    }
}
void radixSort(int ar[],int n ,int m)
{
    for(int exp=1;(m/exp)>0;exp=exp*10)
    {
        countingSort(ar,n,exp);
    }
}


int main() {
    //cout<<floor(log10(n) +1)<<endl;
    int ar[] ={78,92,246,78,956,1003,24,896,410,785,120};
    int n = sizeof(ar)/sizeof(ar[0]);
    int m=getmax(ar,n);
    radixSort(ar,n,m);
    cout<<"Required sorted array : \n";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
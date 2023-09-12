// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void shellSort(int ar[],int n)
{
    for(int gap =n/2;gap>0;gap =gap/2)
    {
        for(int i=gap;i<n;i++)
        {
            int temp=ar[i];
            int j;
            for(j=i;j>=gap and ar[j-gap] > temp;j=j-gap)
            {
                ar[j]=ar[j-gap];
            }
            ar[j]=temp;
        }
    }
}
void print(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}
int main() {
    //cout<<floor(log10(n) +1)<<endl;
    int ar[] ={78,92,246,78,956,1003,24,896,410,785,120};
    int n = sizeof(ar)/sizeof(ar[0]);
    shellSort(ar,n);
    cout<<"Required sorted array : \n";
    print(ar,n);
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(int ar[],int l,int h)
{
    int i=l-1;
    int pivot=ar[h];
    for(int j=l;j<=(h-1);j++)
    {
        if(ar[j]<pivot)
        {
            i++;
            swap(ar[i],ar[j]);
        }
    }
    swap(ar[i+1],ar[h]);
    return i+1;
}

void quickSort(int ar[],int l,int h){
    
    if(l<h)
    {
        int p = partition(ar,l,h);
        quickSort(ar,l,p-1);
        quickSort(ar,p+1,h);
    
    }// cout<<"THE value of p is : "<<p<<en

}
int main()
{
    int ar[] = {2,-1,-2,2,3,22,3,1,5,7,87,5,621,2,1};

    int n = sizeof(ar)/sizeof(ar[0]);
    int l =0;
    int h =n-1;
    quickSort(ar,l,h);
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
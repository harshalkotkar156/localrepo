#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lomuto(int ar[],int l,int h)
{
    int i=l-1;
    int pivot= ar[h];
    for(int j=l;j<=h-1;j++){
        
        if(ar[j]<pivot){
            i++;
            swap(ar[i],ar[j]);
        }
    }
    swap(ar[i+1],ar[h]);
    return i+1;
}
int main()
{
    cout<<"Start\n";
    int ar[] = {10,80,30,90,40,50,70};
    int n =sizeof(ar)/sizeof(ar[0]);
    int l=0;
    int p;cout<<"ENter pivot index : ";cin>>p;
    int h=n-1;
    swap(ar[h],ar[p]);
    int pos = lomuto(ar,l,h);
    cout<<"The pos of pivot is : "<<pos<<endl;
    
    cout<<"Sorted array : "<<endl;
    for(int x:ar){
        cout<<x<<" ";
    }

    return 0;
}
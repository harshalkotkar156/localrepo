#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int hoares(int ar[],int l,int h)
{
    int pivot = ar[l];
    int i=l-1;
    int j = h+1;
    while(true){

        do
        {
            i++;
        } while (ar[i]<pivot);
        do
        {
            /* code */
            j--;
        } while (ar[j]> pivot);

        if(i>=j){
            return j;
        }
        swap(ar[i],ar[j]);
    }
}
void quickSort(int ar[],int l,int h)
{
    if(l<h){

        int p = hoares(ar,l,h);
        // cout<<"THE VALUE OF  P =  "<<p<<endl;
        quickSort(ar,l,p);
        quickSort(ar,p+1,h);
    }
}
int main()
{
    int ar[] = {5,3,8,4,2,7,1,10};
    int n = sizeof(ar)/sizeof(ar[0]);
    int l=0;
    int h = n-1;
    quickSort(ar,l,h);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}
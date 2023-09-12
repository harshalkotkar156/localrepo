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
int main()
{
    int ar[] = {6,4,7,9,1,2,5,10,17,18};
    int n = sizeof(ar)/sizeof(ar[0]);
    int l=0;
    int h = n-1;
    int pivot_index = hoares(ar,l,h);
    cout<<"THE pivot is at "<<pivot_index;
    cout<<"\nRequired array is : \n";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}
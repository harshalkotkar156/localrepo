// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void insertion(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp = a[i];
        int j = i-1;
        while(j>=0 and temp < a[j])//if we add = sign herethen it became unstable algo.
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp; 
    }
    cout<<"The Sorted array :\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main() {
    // Write C++ code here
    int arr[] = {20,5,40,60,10,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion(arr,n);
}
#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int r)
{
    int n1 = m-l+1;
    int n2 = r-m;
    int k=l;
    int a1[n1];
    int a2[n2];
    //copying elements to subarrays
    for(int i=0;i<n1;i++)
    {
        a1[i] = a[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        a2[i] = a[m+1+i];
    }

    int i=0;
    int j=0;

    while(i<n1 and j<n2)
    {
        if(a1[i] <= a2[j])
        {
            a[k] = a1[i];
            i++;

        }else{
            a[k] = a2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k] = a1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k] = a2[j];
        j++;
        k++;
    }


}
void mergesort(int a[],int l,int r)
{
    if(r>l)
    {
        int m = l+ (r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
    // cout<<"SORTED ARRAY : ";
    // for(int i=0;i<=r;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
}
int main()
{
    int arr[] = {0,0,0,0,1,4,5,9,8,9,89,56,61,2,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    int l=0;
    int r = n-1;
    mergesort(arr,l,r);
    cout<<"SORTED ARRAY : ";
    for(int i=0;i<=r;i++)
    {
        cout<<arr[i]<<" ";
    }
}
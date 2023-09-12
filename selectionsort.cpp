#include <bits/stdc++.h>
using namespace std;
//this is an unstable algorithm

int main() {
    // Write C++ code here
    int a[] = {50,100,3,8,6,70};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j] < a[index])
            {
                index=j;
            }
        }
        swap(a[index],a[i]);
        
    }
    cout<<"SORTED ARRAY\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
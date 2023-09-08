#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[] = {90,80,70,60,50,40,20,10,65,75,45,35};
    int n = sizeof(ar)/sizeof(ar[0]);
    int maxi=ar[0];
    for(int i=1;i<n;i++)
    {
        if(ar[i]>maxi)
        {
            maxi=ar[i];
        }
    }
    int k = (maxi%20 == 0) ? maxi/20 : (maxi/20)+1 ; 
    //cout<<"k = "<<k<<endl;
    maxi++;
    vector<int> vec[k];
    for(int i=0;i<n;i++)
    {
        int b = (k*ar[i])/maxi;
        vec[b].push_back(ar[i]); 
    }
    for(int i=0;i<k;i++)
    {
        sort(vec[i].begin(),vec[i].end());
    }
    int index=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<(vec[i].size());j++)
        {
            ar[index] = vec[i][j];
            index++;
        }
    }
    cout<<"done\nSORTED ARRAY : "<<endl;
    for(int item :ar)
    {
        cout<<item<<" ";
    }

    return 0;
}
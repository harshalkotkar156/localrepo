#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void cycleSort(int ar[],int n)
{
    for(int cs = 0;cs<(n-1);cs++)
    {
        int item =ar[cs];
        int pos = cs;
        for(int i=cs+1;i<n;i++)
        {
            if(item > ar[i]){
                pos++;
            }
        }
        if(pos == cs){
            continue;
        }
        while(item == ar[pos])
        {
            pos +=1;
        }
        if(pos != cs){
            swap(item,ar[pos]);
        }
        while(pos != cs)
        {
            pos =cs;
            for(int i =cs+1;i<n;i++)
            {
                if(ar[i] < item)
                {
                    pos+=1;
                }
                
            }
            
            while(ar[pos] ==item){
                pos+=1;
            }
            if(item != ar[pos]){
                swap(item,ar[pos]);
            }
            
        }
    }
}
using namespace std;
int main() {
    // Write C++ code here
    //int ar[] = {400,300,-1,-2,-5,-50,56,21,4,5,6,0,10};
    int ar[] = {3,1,1,4,4,2,5};
    int n = sizeof(ar)/sizeof(ar[0]);
    cycleSort(ar,n);
    cout<<"Sorted array : ";
    for(int item:ar){
        cout<<item<<" ";
    }

    return 0;
}
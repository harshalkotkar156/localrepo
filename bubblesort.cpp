//this is the bubble sort algo
//this algo uses comparioson simpley
// bog O(n square)
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    int a[] = {1,3,2,4}; 
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"N= "<<n<<endl;
    int iteration=0;
    int i=0;
    while(i<(n-1))
    {
        iteration+=1;
        bool swaped = false;
        
        for(int j=1;j<n-i;j++)
        {
            if(a[j] < a[j-1]){
                swap(a[j],a[j-1]);
                swaped = true;
            }
        }
        i++;
        if(swaped == false)
        {
            cout<<"SOrted ARRAY"<<endl;
            break;
        }
    }
    cout<<"CHECK IT\n";
    for(int i=0;i<n;i++)
    {
        
        cout<<a[i]<<" ";
    }
    cout<<"\nNO of iterations  = "<<iteration<<endl;
    return 0;
}
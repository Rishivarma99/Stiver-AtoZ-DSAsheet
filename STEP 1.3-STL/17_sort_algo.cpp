#include<bits/stdc++.h>
using namespace std;

int main(){
     int n=5;
     int a[]={4,3,5,2,1};

     sort(a,a+n);

     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }
     cout<<endl;
    // # IF WE WNAT SOERTING IN DECENDING ORDER 
    // WE USE   

// SORTING FOR PAIR 
// COMPLEOR -GRATER<INT>

sort (a,a+n, greater<int>() );
for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }
     cout<<endl;
}
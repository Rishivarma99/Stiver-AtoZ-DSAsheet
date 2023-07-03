// # LOWER AND UPPER BOUND
 #include<bits/stdc++.h>
using namespace std;

int main(){
     int n=5;
     int a[]={1,3,5,7,9};

    //  TO FIND ELMENT X BY USING LOWER AND UPPER BOUND 
    // # LOWER AND UPPER BOUND 
    int index=lower_bound(a,a+n,3)-a;
    cout<<index<<endl;

      int index1=lower_bound(a,a+n,8)-a;
    cout<<index1<<endl;
    
    // GIVE OUT INDEX IMMEDIATE GREATER OF ELMENT X
    int index2=upper_bound(a,a+n,5)-a;
    cout<<index2<<endl;



}
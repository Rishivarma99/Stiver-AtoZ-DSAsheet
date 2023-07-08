#include<bits/stdc++.h>
using namespace std;

int hashh[10000000];
int main(){

    int n;
    cin>>n;
    int arr[]={1,2,3,4,2};
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
// array ready 
// CREATE HASHARRAY

// int hash[100000]={0};
for (int i = 0; i < n; i++)
{
    hashh[arr[i]]+=1;
}
cout<<endl;
// HASH ARRAY READY
cout<<"no of inputs to find :"; 
int q;
cin>>q;
while(q--){
 int a;
 cout<<"enter the number to find frequency : ";
 cin>>a;
 cout<<endl;

cout<<"the freq id: "<<hashh[a]<<endl;

}
    

}
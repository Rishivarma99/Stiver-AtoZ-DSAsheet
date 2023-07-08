#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
// array ready 
// CREATE HASHARRAY

map<int,int> map1;
for (int i = 0; i < n; i++)
{
    map1[arr[i]]+=1;
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

cout<<"the freq id: "<<map1[a]<<endl;

}
    

}
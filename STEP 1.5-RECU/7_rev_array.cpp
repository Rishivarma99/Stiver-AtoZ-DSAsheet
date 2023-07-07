#include<bits/stdc++.h>
using namespace std;

void reverse(int i,int *arr,int n){

if(i>n/2){
    return;
}

swap(arr[i],arr[n-i-1]);
reverse(i+1,arr,n);

}


int main(){

int arr[]={1,3,4,2,1};
int n=sizeof(arr)/sizeof(int);
reverse(0,arr,n);

for (int i=0; i <5; i++)
{
    /* code */
    cout<<arr[i]<<" ";
}



}
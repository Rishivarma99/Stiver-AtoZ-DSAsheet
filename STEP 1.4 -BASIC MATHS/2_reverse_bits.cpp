#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  
  long long n=1;
  int count=0;
  long long ans=0;
   
while (count<32){

int bit=n&1;
cout<<bit<<" ";
count++;

ans=ans+bit*pow(2,32-count);

n=n>>1;

}
cout<<endl;

cout<<ans;

// ans=ans*pow(10,32-count);

// cout<<ans;


 


}
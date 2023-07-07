#include<iostream>
using namespace std;

int main(){
 
 int n1=12;
 int n2=9;
  int gcd=0;
  int n=min(n1,n2);
 for(int i=1;i<=n;i++){
    if(n1%i==0 && n2%i==0){
        gcd=i;
    }
 } 

 cout<<gcd;


}
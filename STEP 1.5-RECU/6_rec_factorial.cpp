#include<bits/stdc++.h>
using namespace std ;

long long  factorial(long long n){

    if(n==0 || n==1){
        return 1;
    }

    return n*factorial(n-1);
}



int main(){

cout<<"enter number to find factorial:";
long long n;
cin>>n;

long long  fact=factorial(n);
cout<<fact;


}
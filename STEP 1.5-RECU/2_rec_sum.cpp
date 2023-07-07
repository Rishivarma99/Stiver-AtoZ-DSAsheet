#include<bits/stdc++.h>

using namespace std;

int sum=0;

void sum1(int n){

if(n<=0){
    cout<<"sum is :"<<sum;
    return ;
}

sum+=pow(n,3);
sum1(n-1);

}

int main(){

sum1(5);
}
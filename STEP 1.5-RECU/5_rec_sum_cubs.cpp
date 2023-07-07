#include<bits/stdc++.h>
using namespace std;

void sum1(int i,int sum){
cout<<"func called at sum:"<<sum<<endl;

if(i<1){
    cout<<sum;
    return ;
}

sum+= pow(i,3);
sum1(i-1,sum);


}

// APPROACH -2
int sum2(int n){

    if(n==0){
        return 0;
    }

    return n*n*n+sum2(n-1);
}

int main(){

int n;
// cout<<"ENTER THE NUMBER CUBE SUM :";
// cin>>n;
int sum=sum2(5);
cout<<sum;

}

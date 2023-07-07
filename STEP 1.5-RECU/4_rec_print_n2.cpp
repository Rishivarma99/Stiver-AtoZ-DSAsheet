#include<bits/stdc++.h>

using namespace std;

int cnt=0;
// REC FUNTIONS 
void print(int i,int n){
    cout<<"funtion called at i:"<<i<<endl;
    if(i>n){
        cout<<"funtions returned at i: "<<i<<endl;
        return ;
    }

    print(i+1,n);
    cout<<i<<" ";
    
}

int main(){

int n;
cout<<"enter the number to print from n to 1 using backtraking: ";
cin>>n;

print(1,n);


}
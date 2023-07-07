#include<iostream>
using namespace std;

int main(){
  
  int n=22074;
  int count=0;
  int m=n;

  while(m!=0){
    int di = m%10;
     
     cout<<di<<endl;
     if( di!=0) {

        if(n%di==0){
        cout<<"yes"<<endl;
        count++;
        }
     }
        cout<<"no"<<endl;

     m=m/10;
     cout<<m<<endl;

  }

  cout<<count<<endl;


}
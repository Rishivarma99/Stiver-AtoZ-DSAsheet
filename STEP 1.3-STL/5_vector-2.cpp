#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> v;

    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
   cout<<endl;
    for(auto it=v.begin();it!=v.end();it++){
       cout<<*(it)<<" ";
    }
  
    //# INSERT ELEMNTS
    v.insert(v.begin(),0);
     cout<<endl;
    for(auto it=v.begin();it!=v.end();it++){
       cout<<*(it)<<" ";
    }

    // ->insert 2 same elemts 
    v.insert(v.begin()+1,2,22);

     cout<<endl;
    for(auto it=v.begin();it!=v.end();it++){
       cout<<*(it)<<" ";
    }
     cout<<endl;
     cout<<"SWAP FUN"<<endl;
    // # SWAP
    vector<int>v1;
    vector<int>v2;
    v1.push_back(10);
    v1.push_back(20);
    v2.push_back(30);
    v2.push_back(40);

for(auto i:v1){
    cout<<i<<" ";
}
cout<<endl;
for(auto i:v2){
    cout<<i<<" ";
}
cout<<endl;

v1.swap(v2);

for(auto i:v1){
    cout<<i<<" ";
}
cout<<endl;
for(auto i:v2){
    cout<<i<<" ";
}
cout<<endl;

     

  
  


}
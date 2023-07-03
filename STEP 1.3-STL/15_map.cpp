#include<bits/stdc++.h>
using namespace std;

// MAP HAVE KEY AND VALUE 

int main(){
     
map<int,string> mp;

map<int,pair<int,int>> mp1;


mp[1]="risi";
mp[2]="varma";

for(auto i:mp){
    cout<<i.first<<" "<<i.second<<endl;
}

mp1[1]={2,3};
mp1[2]={4,5};
mp1[3]={6,7};
for(auto i:mp1){
    cout<<i.first<<"-"<<i.second.first<<" "<<i.second.second<<endl;
}

// TO ACCESSES ELEMENT 

auto it=mp.find(5);
// points to end 







}
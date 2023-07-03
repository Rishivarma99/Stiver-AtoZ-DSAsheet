// SETS = SORTED & UNIQUE 

#include<bits/stdc++.h>
using namespace std;

int main(){

set <int> s;

s.insert(12);
s.insert(100);
s.insert(100);
s.insert(13);

// # TO PRINT =USING ITERATOR  
for(auto it=s.begin();it!=s.end();it++){
cout<<*(it)<<" ";

}
// it gives out a sorted and unique set 
cout<<endl;

//# FIND OPERATION
auto it=s.find(13);
// cout<<*(it);

auto it1=s.find(14);
cout<<*(it1)<<endl;

// # ERASE
s.erase(100);
// ->it can also be done using iterators 
// s.erase(it1,it2);
for(auto it=s.begin();it!=s.end();it++){
cout<<*(it)<<" "<<endl;

}
// COUNT = return if element present or not 
int cnt=s.count(100);
cout<<cnt<<endl;







}

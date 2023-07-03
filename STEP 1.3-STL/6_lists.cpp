#include<bits/stdc++.h>
using namespace std;

// # 3.lists 

int main(){
    list <int >ls;
//  WE CAN ADD ELEMENTS FROM FRONT ALSO 
ls.push_front(1);
ls.push_back(2);

for(auto it=ls.begin();it!=ls.end();it++){
    cout<<*(it)<<" ";
}

// all are similar to vector
     
}
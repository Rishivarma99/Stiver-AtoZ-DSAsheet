// STL IN CPP HAS 
// ALGORITHMS ,CONTAINERS ,FUNTIONS ,ITERATORS 

// ********** 1.PAIRS  *************

#include<bits/stdc++.h>
using namespace std;


int main(){
     
pair<int,int> p={1,3};

// TO ACCESs 
cout<<p.first<<" "<<p.second<<endl;

pair<int,pair<int,int>> p1={1,{3,4}};

cout<<p1.second.first;
cout<<endl;

// ARRAY PAIRS 
pair<int ,int > arr[]={{1,2},{3,4}};

cout<<arr[1].second<<endl;

for(int i=0;i<2;i++){
    cout<<arr[i].first<<" "<<arr[i].second;
    cout<<endl;
}


}
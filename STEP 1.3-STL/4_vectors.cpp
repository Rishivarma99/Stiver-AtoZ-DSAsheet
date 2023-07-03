// 2.******** VECTORS********
// ->DYNAMIC IN NATURE FOR ARRAY IT IS FIXED BUT NOT FOR VECTOR 

#include<bits/stdc++.h>
using namespace std;

int main(){
     
    // # DEFINITION 
    vector <int> v;
    vector <int> v1(5,10); //v1 is now vector of size 5 and 5 10's
   // WE CAN STILL INCREASE IF WE FIX A SIZE OF VECTOR   
    v.push_back(1);
    //   *****OR******
    // EMPLACE_BACK IS FASTER THAN PUSH_BACK
    v.emplace_back(2);
     
    // # VECTOR PAIRS 
    vector <pair<int,int>> vec;
    vec.emplace_back(1,2);
    vec.push_back({3,4});

    // # COPY OF VECTOR
    vector<int>v2(v1);
    
    // # accesses
    // v1={10,10,10,10,10}
    // cout<<v2[0]<<endl;

    //# *****BY ITERATORS *****
   
     
     v.emplace_back(1);
     v.emplace_back(2);
     v.emplace_back(3);
     v.emplace_back(4);
  

//    vector<int>::iterator it=v.begin();
//    vector<int>::iterator it=v.end(); it--;

// DONT USE THIS JUST KNOW 
//    vector<int>::iterator it=v.rbegin();
//    vector<int>::iterator it=v.rend();
   
//    cout<<*(it)<<endl;

// TO PRINT ENTIRE VECTOR
   for(auto it=v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";
   }

//  ANOTHER WAY 
//   for(auto it:v){
//     cout<<it<<" ";
//   }

// # DELETE VECTOR ELEMNTS 

//->BY ERASE 

// -> v.erase(v.begin()+1);
cout<<endl;
 for(auto it=v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";
   }

v.erase(v.begin()+1,v.begin()+3);

cout<<endl;
 for(auto it=v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";
   }


   

    




}
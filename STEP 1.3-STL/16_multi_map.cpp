#include<bits/stdc++.h>
using namespace std;


int main(){
     multimap <int,int> mp;
     
    //  mp[1]=2;
    //  mp[1]=3;
    //  mp[4]=4;

    mp.insert(pair<int,int>(1,40));
    mp.insert(pair<int,int>(1,45));
    mp.insert(pair<int,int>(3,40));
    mp.insert(pair<int,int>(2,47));


     for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
     }


}
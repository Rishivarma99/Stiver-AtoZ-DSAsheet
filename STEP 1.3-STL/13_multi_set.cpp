#include<bits/stdc++.h>
using namespace std;

int main(){
     
     multiset<int> ms;

     ms.insert(1);
     ms.insert(1);
     ms.insert(1);
     ms.insert(1);
     ms.insert(2);


     for (auto it = ms.begin(); it!=ms.end(); it++)
     {
        cout<<*(it)<<" ";
     }

    //  # ERASE
    cout<<endl<<"after erase :";
    ms.erase(1);
    for (auto it = ms.begin(); it!=ms.end(); it++)
     {
        cout<<*(it)<<" ";
     }

    // //  ->can also erase within adress using operator =not working in cpp




}
#include<bits/stdc++.h>
using namespace std;

int main(){

   unordered_set <int> st; 
//    SIMLAR TO SET 
   st.insert(2);
   st.insert(0);
   st.insert(1);
   st.insert(1);
   

   for (auto it = st.begin(); it!=st.end(); it++)
     {
        cout<<*(it)<<" ";
     }

    st.erase(1); 
    cout<<endl<<"after erase:";
     for (auto it = st.begin(); it!=st.end(); it++)
     {
        cout<<*(it)<<" ";
     }
      cout<<endl;
     cout<<st.count(2)<<endl;
     cout<<st.empty();

}
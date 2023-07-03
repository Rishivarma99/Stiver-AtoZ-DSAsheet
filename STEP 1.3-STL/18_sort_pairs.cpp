#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2){
     
     if(p1.second<p2.second){
        return true;
     }
      if(p1.second>p2.second){
        return false;
     }
    //   THEY ARE SAME 
          if(p1.first>p2.first) return true;
            return false;


}

int main(){


    //SORTING PAIRS AND CREATING OUR OWN COMPERATOR 
pair<int,int> a[]={{1,2},{2,1},{4,1}};
    int n=3;
    int n1=sizeof(a)/sizeof(a[0]);
    cout<<n1<<endl;

sort(a,a+n,comp);

for (auto i=0 ;i<n;i++)
{

cout<<a[i].first<<" "<<a[i].second<<endl;    

}

// BUILTIN POPCOUNT = GIVES NO OF SET BITS 
int n2=7;
int cnt=__builtin_popcount(n2);
cout<<cnt<<endl;



}
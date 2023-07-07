#include<bits/stdc++.h>
using namespace std;

void alldivisors(int n){
    vector <int> ls;
    int sum=0;
   cout<<sqrt(n)<<endl;

//    LOOP RUNNIG FOR sqrt(n) TIMEs ==O(sqrt(n)) 
    for(int i=1;i*i<=n;i++){

        if(n%i==0){
            // cout<<i<<" ";
            ls.push_back(i);

            // now check (n/i) also 
            if(n/i!=i){
                // cout<<n/i<<" ";
                ls.push_back(n/i);
            }
        }
    }

//  SORTING DONE FOR  NO OF FACTORS ==O(no of factors ) 
    sort(ls.begin(),ls.end());

    
// PRINTING DONE FOR ==O(no of factors )
    for (auto i : ls)
    {
        cout<<i<<" ";
    }
  cout<<endl;

    // just for calculating tc 
    cout<<ls.size()<<endl;

//  TC= O(sqrt(n))+2*O(no of factors of n ) 
    

}

int main(){

    int n=18;
     
    //  int sum =
      alldivisors(n);
//    cout<<"sum is :"<<sum<<endl;

}


#include<bits/stdc++.h>
using namespace std;

int main(){
    
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    for(int i:dq){
        cout<<i<<" ";
    }

    dq.pop_back();
    dq.pop_front();

     for(int i:dq){
        cout<<i<<" ";
    }
}

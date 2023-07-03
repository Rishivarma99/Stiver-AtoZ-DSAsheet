// QUEUE ->FISRT IN FIRST OUT 

#include<bits/stdc++.h>
using namespace std;

int main(){
     
queue<int>q;

q.push(10);
q.push(12);
q.push(14);
q.push(16);
q.emplace(18);

// PRINT QUEUE
cout<<q.front()<<endl;
cout<<q.back()<<endl;

q.pop();
cout<<q.front()<<endl;
cout<<q.back()<<endl;







}
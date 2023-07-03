// stack-LIFO 
#include<bits/stdc++.h>
using namespace std;

int main(){
stack <int> s;

// push ,pop ,top MAIN FUNTIONS 

s.push(1);
s.push(2);

s.push(1);

// POP DELETES TOP
s.pop();

cout<<s.size();
cout<<s.empty();
cout<<s.top();

// all operation are O(1)
// WE CANT ACESSE DOWN ELEMENT 



}
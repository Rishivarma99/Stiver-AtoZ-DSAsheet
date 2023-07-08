#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){

// GETTING STRING 
cout<<"enter string :"<<endl;
string str;

cin>>str;
int n=str.length();
// CREATE HASH 
int hash[26];
for (int  i = 0; i < n; i++)
{   
    char ch=str[i];
    // int e = ch-'a';
    hash[ch]+=1;
}

// search in hash
char f;
cout<<"enter char to get frequency:";
cin>>f;
 int e = f-'a';
cout<<endl;
cout<<"the freq is :"<<hash[f];







}
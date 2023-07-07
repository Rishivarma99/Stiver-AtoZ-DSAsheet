#include<bits/stdc++.h>

using namespace std;

int cnt=0;
// REC FUNTIONS 
void print(){
    cout<<"funtion called :";
    if(cnt==2){
        cout<<"funtion returned"<<endl;
        return;
    }

    cout<<"print: "<<cnt<<endl;
    cnt++;
    // REC FUNTION CALL 
    print();
    cout<<"funtion ended:"<<endl;
}

int main(){
print();

}
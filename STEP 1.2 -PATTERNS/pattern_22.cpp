
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printpattern(int n){

int digi;


for(int i=0;i<2*n-1;i++){


    for(int j=0;j<2*n-1;j++){
int top=i;
int down=2*n-2-i;
int left=j;
int right=2*n-2-j;

      digi=n-min(min(top,down),min(left,right));
      cout<<digi;

    }
   cout<<endl;

}


}

int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;

    printpattern(n);
}
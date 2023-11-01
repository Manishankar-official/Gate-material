#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;


int main(){

long long n;
cin>>n;
for(long long i=n-1;i>0;i--){
  n=n*i;
}
cout<<n<<endl;

cout<<"the no of digits in fact of n is ::::"<<(floor(log10(n))+1)<<endl;
  return 0;
}
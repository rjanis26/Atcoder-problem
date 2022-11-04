#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;cin>>n;
int a[12]={0};
for (int i = 0; i < n; i++)
{
    int x;cin>>x;
   int s; cin>>s;
   if (s>a[x])
   {
     a[x]=s;
   }
   
   
    //  cout<<a[x]<<"  "<<x<<endl; 
}int r=0;
for (int i = 1; i < 9; i++)
{
   r+=a[i]; 
}

cout <<r<<endl;
}
}
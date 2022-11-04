/* #include<bits/stdc++.h>
using namespace  std;
#define endl '\n'
#define ll long long int
#define llu unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;
    while(test--) {
        int n, k, x, y; cin>> n >> k >> x >>y;
        int cost = n*k;

        cost = min(x, y)*(n-k);
        cout<< cost << endl;
    }
 
    return 0;
} */
/* 
#include<stdio.h>
#include<string.h>
int check_palindrom(char *a){
    //printf("%s",a);
int k=0;
for(int i=0,j=strlen(a)-1;i<=j;i++,j--){
       // printf("i->%d %c,j->%d %c\n",i,a[i],j,a[j]);
    if(a[i]!=a[j]){
        k++;
    }
}
return k;
}
int main(){
char f[100];
scanf("%s",&f);
int x=check_palindrom(f);
printf("%d",x);
return 0;
} */
 
 
/* #include <bits/stdc++.h>
using namespace std;
long long a[3];
int main()
{
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	if(a[0]>=a[2]-a[1]) cout<<a[2]<<endl;
    else cout<<-1<<endl;
    return 0;
}
 */
 #include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c;
	cin>>a>>b>>c;
	if(a<b) swap(a,b);
	if(a<c) swap(a,c);
	if(b<c) swap(b,c);
	if(a>b+c) cout<<-1;
	else cout<<a;
	return 0;
} 
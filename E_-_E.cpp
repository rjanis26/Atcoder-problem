/* 
  #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    
  string s;
  
  int n;
  cin>>n;
  cin>>s;
  
  int x=0;
  int ans=0;
 
  for(int i=0;i<n;i++)
  {
   if(s[i]=='I')
   {
    x++;
   }
   else if(s[i]=='D')
   {
     x--;
   }
   ans=max(ans,x);
  }
 
  cout<<ans<<endl;
 
    return 0;
}  
 */


  #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'


void solveTestCase()
{
    int N;
    string S;
    cin >> N >> S;
 
    int value = 0;
    int answer = 0;
    for (int i = 0; i < N; ++i)
    {
        value += (S[i] == 'I' ? +1 : -1);
        answer = max(answer, value);
    }
    cout << answer << "\n";
    return;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    // setI("");
    // setO("");
 
    int number_of_test_cases = 1;
    // cin >> number_of_test_cases;
 
    for (int test_case_number = 1; test_case_number <= number_of_test_cases; ++test_case_number)
    {
        solveTestCase();
    }
    return 0;
}
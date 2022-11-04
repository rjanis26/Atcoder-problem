/* #include<bits/stdc++.h>
using  namespace std;
#define endl '\n'

int main()
{

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;
    while(test--) {
        int n; cin>>n;
        string str;
        for(int i=0; i<n; i++) {
            cin >> str;
        }

        for(int i=0; i<str.length(); i++) {
            if(str[i] =='R' && str[i+1] == 'B') {
                cout <<"PG";
                
            }
                
            else if(str[i] == 'R' && str[i+i] == 'G') 
                cout << "Y" << endl; 
        }
    }
    
  
    return 0;
} */


#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int


int main()
{   

    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int n;
    cin>>n;

    while(n--)
    {
        stack <char>m;
        queue<char>p;
        stack <char>q;
        queue <char>l;
        stack <char>u;
        int n;
        cin>>n;

        char ch;
        for(int i=0; i<n; i++)
        {
            cin>>ch;

            p.push(ch);

        }
        while(!p.empty())
        {
            char s=p.front();
            p.pop();
            char t;
            if(q.empty()) //R
            {
                q.push(s);
                t=q.top();
            }
 
            else
            {


                if(s=='R' && t=='G' || s=='G' && t=='R')
                {

                    q.pop();
                    l.push('Y');
                }

                else if(s=='R' && t=='B' || s=='B' && t=='R')
                {
                    q.pop();
                    l.push('P');

                }



                else if(s=='B' && t=='G' || s=='G' && t=='B')
                {
                    q.pop();
                    l.push('C');
                }

                else if(s==q.top())
                {
                    q.pop();
                }

            }
        }

        while(!l.empty())
        {
            char n=l.front();
            l.pop();
            char t;
            if(m.empty())
            {
                m.push(n);
                t=m.top();
            }
            else
            {
                if(n== t)
                {
                    m.pop();
                    if(!m.empty())
                    {
                        t=m.top();
                    }
                }
                else if(n!= t)
                {
                    m.push(n);
                    t=m.top();
                }
            }

        }

        while(!m.empty())
        {
            char p=m.top();
            m.pop();
            u.push(p);

        }
        while(!u.empty())
        {
            char p=u.top();
            u.pop();
            cout<<p;

        }

        while(!q.empty())
        {
            char m=q.top();
            q.pop();
            cout<<m;
        }
        cout<<endl;


    }

    EXIT_SUCCESS;

}
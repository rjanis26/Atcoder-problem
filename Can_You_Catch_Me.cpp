#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)

class Node
{
public:
    char value;
    Node *left, *right;
    Node (char val)
    {
        value = val;
        left = NULL;
        right = NULL;

    }
};


void searchPath(Node*root, string &output, int &total)
{
    if(root == NULL) return;
    output+= root->value;
    // cout<<root->value;
    searchPath(root->left, output, total);
    searchPath(root->right, output, total);

    if(root->left == NULL && root->right == NULL) {
        string str = output;
        reverse(str.begin(), str.end());
        if(str == output) {

            total++;
        }

        // cout<<str << "|"<<output<< endl;

    }
    output.pop_back();
}

void searchAllPath(Node*root) {


}


int
main ()
{   

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string strNode;
    cin >> strNode;

    int r;
    cin >> r;
    Node *rootNode = NULL;
    rootNode = new Node (strNode[r]);
    queue < Node * >q;
    q.push (rootNode);


    while (!q.empty ())
    {
        Node *currentNode = q.front();
        q.pop ();
        int l, r;
        cin >> l >> r;
        Node*n1 = NULL, *n2 = NULL;
        if (l != -1) {
            n1 = new Node(strNode[l]);
        }

        if(r != -1) {
            n2 = new Node(strNode[r]);
        }

        currentNode->left = n1;
        currentNode->right= n2;

        if(n1 != NULL) {
            q.push(n1);
        }
        if(n2 != NULL) {
            q.push(n2);
        }

    }
    string output = "";
    int total = 0;
    searchPath(rootNode, output, total );

    cout<<total<<endl;

    return 0;
}

/*
ANTNAR
0
1 -1
2 -1
3 -1
4 -1
5 -1
-1 -1


------
ABABDBACBBCDBAEBDBAA
0
1 3
4 8 2 7
14 -1 5 -1 -1 -1 11 9
-1 16 -1 6 10 -1 -1 19
17 15 -1 -1 -1 12 -1 -1
18 -1 -1 -1 13 -1
-1 -1 -1 -1

output: 5


*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define rep(i,n) for(int i=0; i<n; i++)


class Node
{
  public:
  int value;
  Node *left,
  *right;
  Node (int val) {
    value = val;
    left = NULL;
    right = NULL;
  }
};
void levelOrderInsert(Node*root, int value) {
  if(root == NULL) {
    root = new Node(value);
    return;
  }
  queue < Node*>q;
  q.push(root);

  while(!q.empty()) {
    Node*currentNode = q.front();
    q.pop();

    if(currentNode->left != NULL) {
      q.push(currentNode->left);
    } else {
      currentNode->left = new Node(value);
      return;
    }


    if(currentNode->right != NULL) {
      q.push(currentNode->right);
    } else {
      currentNode->right = new Node(value);
      return;
    }
  }

}

int findMax(Node* root) {

  // Base case

  if (root == NULL) {
    return INT_MIN;
  }


  int res = root->value;

  int lres = findMax(root->left);

  int rres = findMax(root->right);

  if (lres > res)

  res = lres;

  if (rres > res)

  res = rres;

  return res;
}

Node* deletion(Node* root, int key) {

  if(root == NULL)

  return NULL;

  if(root->left == NULL && root->right == NULL) {

    if(root->value == key)

    return NULL;

    else

    return root;

  }

  Node* key_node = NULL;

  Node* temp;

  Node* last;

  queue < Node*> q;

  q.push(root);

  // Do level order traversal to find deepest

  // node(temp), node to be deleted (key_node)

  // and parent of deepest node(last)

  while(!q.empty()) {

    temp = q.front();

    q.pop();

    if(temp->value == key)

    key_node = temp;

    if(temp->left) {

      last = temp; //storing the parent node

      q.push(temp->left);

    }

    if(temp->right) {

      last = temp; // storing the parent node

      q.push(temp->right);

    }
 

  }

  if(key_node != NULL) {

    key_node->value = temp->value;
    //replacing key_node's data to deepest node's data

    if(last->right == temp)

    last->right = NULL;

    else

    last->left = NULL;

    delete(temp);

  }

  return root;
}




int main () {

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


  int r;
  cin >> r;
  Node *rootNode = NULL;
  rootNode = new Node (r);
  queue < Node * > q;
  q.push (rootNode);


  while (!q.empty ()) {
    Node *currentNode = q.front();
    q.pop ();
    int l,
    r;
    cin >> l >> r;
    Node*n1 = NULL,
    *n2 = NULL;
    if (l != -1) {
      n1 = new Node(l);
    }

    if(r != -1) {
      n2 = new Node(r);
    }

    currentNode->left = n1;
    currentNode->right = n2;

    if(n1 != NULL) {
      q.push(n1);
    }
    if(n2 != NULL) {
      q.push(n2);
    }
  }
  string output = "";
  int n;
  cin>>n;
  for(int i = 0; i < n; i++) {
    int q;
    cin>>q;
    int max;
    if(q == 2) {
      max = findMax(rootNode);
      //cout<<max<<endl;
      output += to_string(max)+ "\n";
     Node*DeletedNode =  deletion(rootNode, max);
    } else {
      int val;
      cin>>val;
      levelOrderInsert(rootNode, val);
    }

  }
  cout<<output;
  return 0;
}

/*
0
1 2
3 -1 -1 4
-1 -1 -1 -1
4
2
1 10
1 8
2




0
1 2
3 -1 -1 4
-1 -1 -1 -1
10
2
1 8
1 7
2
2
1 10
2
1 20
2
2
*/
#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> mp;
class node {
    public:
    int val;
    node* left;
    node* right;
    node(int val) {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
node* solve(vector<int>& vec, int start, int end) {
    if(start > end) {
        return NULL;
    }
    int maxi=max_element(vec.begin()+start,vec.begin()+end+1)-vec.begin();
    node* root=new node(vec[maxi]);
    root->left=solve(vec,start,maxi-1);
    root->right=solve(vec,maxi+1,end);
    return root;
}
void bfs(node* root) {
    if(root == NULL) {
        return;
    }
    queue<node*> q;
    int depth=0;
    q.push(root);
    while(!q.empty()) {
        int len=q.size();
        for(int i=0; i<len; i++) {
            mp[q.front()->val] = depth;
            if(q.front()->left != NULL) {
                q.push(q.front()->left);
            }
            if(q.front()->right != NULL) {
                q.push(q.front()->right);
            }
            q.pop();
        }
        depth++;
    }
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int len=0;
        cin>>len;
        vector<int> vec;
        for(int i=0; i<len; i++) {
            int x=0;
            cin>>x;
            vec.push_back(x);
        }
        node* root = solve(vec,0,len-1);
        bfs(root);
        for(int& node: vec) {
            cout<<mp[node]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
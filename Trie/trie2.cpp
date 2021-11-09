class Trie {
public:
    class TrieTree{
        public:
        TrieTree *child[26];
        bool isEnd = false;
    };
    
    TrieTree* root;
    Trie() {
        root=new TrieTree();
    }
    
    void insert(string word) {
        TrieTree* cur = root;
        for(auto &ch:word){
            if(!cur->child[ch-'a']) cur->child[ch-'a'] = new TrieTree();
            cur=cur->child[ch-'a'];
        }
        cur->isEnd=true;
    }
    
    bool search(string word) {
        TrieTree* cur = root;
        for(auto &ch:word){
            if(!cur->child[ch-'a']) return false;
            cur=cur->child[ch-'a'];
        }
        return cur->isEnd ? true : false;
    }
    
    bool startsWith(string prefix) {
        TrieTree* cur = root;
        for(auto &ch:prefix){
            if(!cur->child[ch-'a']) return false;
            cur=cur->child[ch-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

#include <bits/stdc++.h>
 
using namespace std;
 
char ara[100000];
 
struct node
{
    bool endmark;
    node *data[26];
    node()
    {
        endmark=0;
        for(int i=0;i<26;i++)
            data[i]= NULL;
    }
}*root;
 
void insert(char *str,int len)
{
    node *curr = root;
    for(int i=0;i<len;i++)
    {
        int indx=str[i]-'a';
        if(curr->data[indx]==NULL)
            curr->data[indx]=new node;
        curr = curr->data[indx];
    }
    curr->endmark=1;
}
 
bool search(char *str,int len)
{
    node *curr=root;
    for(int i=0;i<len;i++)
    {
        int indx=str[i]-'a';
        if(curr->data[indx]==NULL)
            return false;
        curr=curr->data[indx];
    }
    return curr->endmark;
}
 
void del(node *cur)
{
    for(int i=0;i<26;i++)
        if(cur->data[i])
            del(cur->data[i]);
    delete cur;
}
 
int main()
{
    int n,m;
    cin>>n>>m;
    root = new node;
    getchar();
    while(n--)
    {
        scanf("%s",ara);
        getchar();
        insert(ara,strlen(ara));
    }
 
    while(m--)
    {
        scanf("%s",ara);
        getchar();
        if(search(ara,strlen(ara)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    del(root);
    return 0;
}
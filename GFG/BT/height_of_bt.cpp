#include<bits/stdc++.h>
using namespace std;

struct tnode
{
    int nodeval;
    struct tnode* left,*right;
};

struct tnode *createNode(int data)
{
    struct tnode* newNode = (struct tnode*)malloc(sizeof(struct tnode));
    newNode->nodeval = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int find_height(struct tnode* root)
{
    if(root->left == NULL && root->right == NULL) return 1;
    else return (1+max(find_height(root->left),find_height(root->right)));
}

int main()
{
    struct tnode *root;

    root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout<<find_height(root)<<endl;;

    return 0;
}


#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};

struct node* create(int val)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->left = NULL;
    newNOde->right = NULL;

    return newNode;
}

int main()
{
    return 0;
}

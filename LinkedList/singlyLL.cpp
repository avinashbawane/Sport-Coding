#include<iostream>
#include<malloc.h>
#include<stdio.h>
using namespace std;

struct llnode
{
    int val;
    struct llnode *next;
};

struct llnode* create_ll (int data)
{
    struct llnode *new_node =  (struct llnode*)malloc(sizeof(struct llnode));
    new_node->val = data;
    new_node->next = NULL;
}

void add_at_beg(struct llnode**head_ref, int data)
{
    struct llnode *new_node = (struct llnode*)malloc(sizeof(struct llnode));
    new_node->val = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

int main()
{
    int opt,pos,val;
    struct llnode *head_ref = NULL:

    while(1)
    {
        cout<<"1. Create a node at beginning"<<endl<<"2. Insert a node at position x"<<endl<<"3. Insert a node at the end"<<endl<<"4.Exit"<<endl;
        cin>>opt;
    case 1:
        cin>>val;
        add_at_beg(val);
        break;
    case 2:
        cout<<"Enter the position and value for insertion : ";
        cin>>pos;
        cin>>val;
        create_at_pos(pos,val);
        break;
    case 3:
        cin>>val;
        add_at_end(val);
        break;
    case 4:
        return 0;
        break;
    default:
        cout<<"Wrong input"<<endl;
    }
    return 0;
}

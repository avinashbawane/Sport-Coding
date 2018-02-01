#include<bits/stdc++.h>
using namespace std;

struct llnode
{
    int data;
    struct llnode *next;
};

struct llnode* addatbeg(struct llnode *head, int val)
{
    struct llnode *start = head;

}

int ListLength(struct llnode* head)
{
    int count = 0;
    struct llnode *start  = head;
    while(start != NULL)
    {
        count++;
        start = start->next;
    }
    return count;
}

int main()
{

    return 0;
}

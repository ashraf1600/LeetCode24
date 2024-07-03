#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
 int sz(ListNode*head)
 {
    ListNode*tmp=head;
    int l=0;
    while(tmp!=NULL)
    {
         l++;
         tmp=tmp->next;
    }
    return l;
 }
ListNode* middleNode(ListNode* head)
{
    ListNode*tmp=head;
    int mid=sz(head)/2;
    int c=0;
    while(c!=mid)
    {
        c++;
        tmp=tmp->next;
    }
    return tmp;

}
};

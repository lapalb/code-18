#include <iostream>

using namespace std;

class node{
public:
int data;
node * next;

node(int x)
{
    data=x;
    next=nullptr;
}
};
int main()
{
   node * head = new node(10);
   head->next  = new node(20);
   head->next->next  = new node(30);
   head->next->next->next  = new node(40);
   head->next->next->next->next  = new node(50);

   node *t=head;
   while(t->next!=nullptr)
   {
       cout<<t->data<<"\t";
       t=t->next;
   }
   cout<<t->data<<"\t";
}

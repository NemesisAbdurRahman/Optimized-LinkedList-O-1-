#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {

        this->val = val;
        next = NULL;
        prev = NULL;
    }
};
class ll
{
public:
    int value;
    Node *head = NULL;
    Node *trv = NULL;
    Node *front = head;
    void push_back(int val)
    {
        if (head == NULL)
        {
            value = val;
            Node *newnode = new Node(val);
            head = newnode;
            head->prev = NULL;
            trv = head;
            return;
        }
        else
        {
            Node *newnode = new Node(val);
            // trv=head;
            Node *add = trv;
            trv->next = newnode;
            trv = newnode;
            trv->prev = add;
        }
    }
    void push_front(int val)
    {

        Node *newnode = new Node(val);
        if (head != NULL)
        {
            head->prev = newnode;
            // front=newnode;
            newnode->next = head;
            head = newnode;
            // trv=head;
        }
        else
        {
            head = newnode;
            trv = head;
        }
    }
    void pop_front(void){
        if(head!=NULL){
Node* remove=head;
head=head->next;
head->prev=NULL;
delete remove;
        }

    }

    void pop_back(void){

        Node* remove2=trv;
        trv=trv->prev;
        trv->next=NULL;
        delete remove2;
    }

    void print(void)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val <<"<=>";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main()
{

    ll obj;
    // obj.push_back(1);

    obj.push_front(0);
    obj.push_front(-1);
    obj.push_back(2);
    obj.push_back(3);
    obj.push_front(-2);
    obj.push_back(4);
obj.pop_front();
obj.pop_back();
    obj.print();
}
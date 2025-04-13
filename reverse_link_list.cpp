#include<iostream>
using namespace std;
class glov{
public:
int count=0;

};
class node:public glov{

public :
int val;
node* ptr ;
node(int val){
    this->val=val;
}

};
class ll:public glov{
    public:
    node* tail=NULL;
    node* head=tail;
    node* trv=head;
    node* head2=head;
    node* head3=head;
    void push_back(int valu){
if(head==NULL){
node* newnode=new node(valu);
head=newnode;
tail=newnode;
cout<<"jj"<<tail->val<<endl;

   return; 
}


node* newnode=new node(valu);
tail->ptr=newnode;
tail=newnode;
cout<<tail->val<<endl;



}
void push_front(int val){

node* newnode=new node(val);
newnode->ptr=head;
head=newnode;

}

void reverse(void){
    node* back=NULL;
    int i=1;
    node* temp=NULL;
while(head2->ptr!=NULL){
temp=head2->ptr;
head2->ptr=back;

back=head2;
cout<<"back : "<<back->val<<endl;
head2=temp;
i++;
}
head2->ptr=back;
head=head2;
}

void print(void){

    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"~";
        temp=temp->ptr;
    }
    // cout<<temp->val<<endl;
}

};
int main (){
    
ll c1;
c1.push_back(1);
c1.push_back(2);
c1.push_back(3);
c1.push_back(4);
c1.push_front(0);
c1.reverse();
c1.print();
}

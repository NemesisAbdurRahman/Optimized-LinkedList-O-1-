#include<iostream>
using namespace std;
// static int i=0;
class globalV{

public:
int i=0;

};
// class node{

// public:
// int val;
// node* ptr;
// node(int val){
//     this->val=val;
//     ptr=NULL;

// }


// };
class list:public globalV{
    public:
//     node* head;
// node* temp;
// list(){
//     head=nullptr;
// }
void llist(int val){
// head->ptr=NULL;
// node* newnode=new node(val);// dynamic
// node newnode(val); static
if(i==0){
    // head=newnode;
    // head->ptr=NULL;
    cout<<"ok"<<endl;
    return;
}
i=i+1;
}
// newnode->ptr=head;
// head=newnode;
//     // cout<<newnode->val<<endl;
// }
// void print(void){
//     node* tem=head;
//     while(tem->ptr!=NULL){
// cout<<tem->val<<endl;
// tem=tem->ptr;

//     }
//     cout<<tem->val<<endl;
// }
};

int main(){
list obj1;
obj1.llist(5);
obj1.llist(6);
obj1.llist(7);
// obj1.print();
}
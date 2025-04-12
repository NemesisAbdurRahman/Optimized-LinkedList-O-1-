#include<iostream>
using namespace std;
// static int i=0;
class globalV{

public:
int size=0;
int i=0;
int pass=0,bpass=0;
};
class node{

public:
int val;
node* ptr;
node(int val){
    this->val=val;
    ptr=NULL;

}


};
class list:public globalV{
    public:
    node* onePrv=NULL;
    node* head=NULL;
    node* Btracking=NULL;
node* temp=NULL;
node* tail=NULL;
// list(){
//     head=nullptr;
// }
void push_front(int val){
// head->ptr=NULL;
node* newnode=new node(val);// dynamic
// node newnode(val); static
if(i==0){
    head=newnode;
    head->ptr=NULL;
    cout<<"ok"<<endl;
    i=i+1;
    tail=head;
    temp=tail;
    return;
}
newnode->ptr=head;
head=newnode;
if(bpass==0){
Btracking=newnode;
    // onePrv=newnode;
}
bpass++;
pass++;
size++;
}
//     // cout<<newnode->val<<endl;
// }

void push_back(int val){
    size++;

    node* newnode=new node(val);
    if(tail!=NULL){
    tail->ptr=newnode;
    }
tail=newnode;
if(pass==0){
Btracking=newnode;
// Btracking=Btracking->ptr;

return;
}
pass++;
if(pass>=2){
Btracking=Btracking->ptr;
cout<<"back tracking : "<<Btracking->val<<endl;
}
bpass++;
}

void pop_front(void){
    size--;

node* delete_address=head;
if(head!=NULL){
head=head->ptr;
delete delete_address;
}


}


void pop_back(){
    size--;

if(head==tail){
    head=tail=NULL;
    return;

}
if(head==NULL){
    return;
}

node* tempp=tail;
Btracking->ptr=NULL;

delete tempp;
tail=Btracking;

}

void insert(int val,int pl){

    if(pl==0){
node* newnode=new node(val);  
newnode->ptr=head;
head=newnode;
    }

    else if(pl<=size){
int i=0;
node* newnode=new node(val);  
node* trv=head;
while(i<pl-1){

trv=trv->ptr;
i++;
}
node* next=trv->ptr;
trv->ptr=newnode;
newnode->ptr=next;

}

}

void search(int valu){
int idx=0;
node* temp=head;
while(idx<=size){
    if(temp->val==valu){
        break;
    }
    temp=temp->ptr;
    idx++;
}
// cout<<" SIZE : "<<size<<endl;
if(idx<=size){
cout<<" IDX : "<<idx<<endl;
}
else{
    cout<<" NOT FOUND "<<endl;
}
}
void print(void){
    if(head==NULL){
        cout<<"this is emty "<<endl;
        return ;
    }
    node* tem=head;
    while(tem->ptr!=NULL){
        cout<<tem->val<<endl;
        tem=tem->ptr;
        
    }
    cout<<tem->val<<endl;
}


void printback(void){
    node* reverse=temp->ptr;
    while(reverse->ptr!=NULL){
        cout<<reverse->val<<endl;
        reverse=reverse->ptr;
    }    
    cout<<reverse->val<<endl;
}    


// void insert(int val,int pos){
// int i=0;
// node* newnode=new node(val);
// node* temp=head;
// while (i<=pos)
// {
    
// temp=temp->ptr;
// i++;
// }
// cout<<"insert"<<temp->val<<endl;

// }


};

int main(){
// list obj1;

// obj1.push_fornt(5);
// obj1.push_fornt(6);
// // obj1.pop_front();
// obj1.push_fornt(7);
// obj1.push_back(8);
// obj1.push_back(9);
// obj1.pop_front();
// obj1.pop_back();
// obj1.push_back(100);
// obj1.push_fornt(3);
// obj1.print();
// // obj1.printback();
list obj;

// After all operations, the list should be empty
cout << "After all pop operations, the list should be empty:" << endl;
obj.print();  // Should print nothing







    // Push 100,000 elements
    // for (int i = 0; i < 100000; i++) {
    //     obj.push_back(i);
    // }

    // // Perform 100,000 pop_back operations
    // for (int i = 0; i < 100000; i++) {
    //     obj.pop_back();
    // }

    // // After all pop_backs, the list should be empty
    // obj.print(); // Should print nothing, as the list is now empty

    // return 0;

obj.push_front(5);
obj.push_front(6);
obj.push_front(7);
obj.push_back(8);
obj.push_back(9);
obj.insert(22,5);
obj.print();  // Output: 7 6 5 8 9
obj.search(0);
// obj.pop_f;ront();
// obj.pop_front();
// obj.pop_front();
// obj.pop_front();
// obj.pop_front();
// cout<<"PRINT"<<endl;
// obj.print();  // Should print nothing (list is empty)

// obj.pop_back();  // Should NOT crash
// // obj.pop_front();  // Should NOT crash

}
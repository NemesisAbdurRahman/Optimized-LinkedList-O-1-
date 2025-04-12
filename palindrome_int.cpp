
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){

int x=1215;
if(x<0){
    cout<<"false"<<endl;
}
int i=x;
int Num=0;
while(i!=0){
int dig=i%10;
Num=Num*10+dig;

i=i/10;
}

if(Num==x){
cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}





}
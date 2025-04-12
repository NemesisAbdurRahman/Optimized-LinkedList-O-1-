

#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;


int main (){

int x=-234;
int i=x;
int c=0;
while(i!=0){

i=i/10;
c++;


}
int Nnum=0;
while(c!=0){
int dig=x%10;
cout<<dig<<endl;
 Nnum=dig*pow(10,c-1)+Nnum;
x=x/10;

c--;
}
cout<<Nnum<<endl;
cout<<c<<endl;
}
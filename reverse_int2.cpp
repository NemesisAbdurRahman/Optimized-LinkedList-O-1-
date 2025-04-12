

#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){

int x=-234;
int i=0;
int dig=0;
int nNnum=0;
while(x!=0){
dig=x%10;
nNnum=nNnum*10+dig;
x=x/10;


}
cout<<nNnum<<endl;


}
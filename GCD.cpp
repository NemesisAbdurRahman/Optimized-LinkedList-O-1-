#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int gcd1(int n1,int n2){
    while(n1!=0&&n2!=0){
        
        if(n1>n2){
            int x1=n1%n2;
n1=x1;
}
else{
   int x2=n2%n1;
   n2=x2;
}

    }
    if(n1==0){
        return n2;
    }
    else{
        return n1;
    }
}
int main(){

int p=60,q=48;
int x=gcd1(p,q);
cout<<x<<endl;

}
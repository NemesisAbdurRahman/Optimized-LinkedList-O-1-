#include<iostream>
#include<algorithm>
#include <cmath>
using namespace std;

int main(){

    string s1={"abcdxabcde"};
    string s2={"abcdeabcdx"};
int i=pow(2,s2.size());
int c=0;
    while(i>=0){

        cout<<s1<<endl;
        if(s2.find(s1)<s2.size()){
            c++;
            break;
            // return true;
        }
        next_permutation(s1.begin(),s1.end());
i--;

    }
if(c==0){
    cout<<"false"<<endl;
}
else{
    cout<<"true"<<endl;
}
return false;

}
#include<iostream>
using namespace std;

int main(){

string s={"daabcbaabcbc"};
string part={"abc"};

while(s.size()>0&&s.find(part)<s.length()){
    s.erase(s.find(part),part.size());
}
cout<<s<<endl;





}
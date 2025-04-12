#include<iostream>
using namespace std;

int main (){

string word={"wish"};

int st=0;
int ed=word.length()-1;
while(st<=ed){

    swap(word[st],word[ed]);
st++;
ed--;
}
for(int i=0;i<=word.length();i++){
    cout<<word[i];
}
cout<<endl;


}
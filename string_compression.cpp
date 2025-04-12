#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){
    // vector<char>chars={'a','b','b','b','b','b','b','b','b','b','b','b','b','b'};
    vector<char>chars={ 'a','a','a','a','a','a',
        'b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b','b',
        'c','c','c','c','c','c','c','c','c','c','c','c','c','c'};
int c=1;
string s={""};
char word={};
word=word+chars[0];
for(int i=1;i<chars.size();i++){

    if(chars[i]==word){
c++;
    }
    else{
        int idx=0;
      if(c!=1){

string tem=to_string(c);
s=s+word+tem;
word=chars[i];
c=1;
      }
      else{
        s=s+word;
        word=chars[i];
c=1;
      }
    //  }
//      else{
//         if(c!=1){
// idx=c+48;
//         }
//         s=s+word+char(idx);
//         word=chars[i];
//         c=1;
//         cout<<s.size()<<endl;
//     }
}
}
if(c==1){
    s=s+word+char(0);
}
 else {
string tem=to_string(c);
s+=word+tem;

 }
//  else{
// s=s+word+char(c+48);
// }
cout<<s[11]<<endl;
// if(s[i]){
//     cout<<"no no"<<endl;
// }
chars.clear();
int j=0;
for(int i=0;i<s.size();i++){
    if ((int(s[i]) >= 65 && int(s[i]) <= 90) || (int(s[i]) >= 97 && int(s[i]) <= 122) || (s[i] >= '0' && s[i] <= '9')) {
        // Your logic here
    
    
    chars.push_back(s[i]);
    cout<<"size"<<endl;
    // j++;
}
}
for(auto i:chars){
    cout<<i;
}
cout<<endl;
// cout<<s.size()<<endl;
// cout<<chars.size()<<endl;
// cout<<s<<endl;
}
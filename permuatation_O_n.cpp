
#include<iostream>
#include<vector>
using namespace std;

int main(){
string s1={"adc"};
string s2={"dcda"};
if(s1.size()>s2.size()){
    cout<<"false"<<endl;
}
else{
    vector<int>alpha(26,0);
    vector<int>alpha2(26,0);
int winsize=s1.size();
for(int i=0;i<winsize;i++){
    int idx=int(s1[i])-'a';
    alpha[idx]++;
}
for(int i=0;i<winsize;i++){
    int idx=int(s2[i])-'a';
    alpha2[idx]++;
}
if(alpha==alpha2){
    cout<<"true"<<endl;
    
}
else{
int st=0;
while(winsize<=s2.size()){
// cout<<"hi"<<endl;
// else{
if(st>0){
    int idx=int(s2[st])-'a';
        alpha2[idx]--;
        cout<<"st"<<endl;
}
if(winsize<s2.size()){
        int idx2=int(s2[winsize+1])-'a';
        alpha2[idx2]++;
        cout<<"winsize"<<endl;

}
st++;
winsize++;

if(alpha==alpha2){
    cout<<"true"<<endl;
    break;
}
    
    
}
}
}

}
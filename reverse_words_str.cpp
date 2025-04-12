
#include<iostream>
#include<vector>
using namespace std;
int main (){

string s={"the sky is blue"};
vector<int>space;
int i=0,it=0,b=0,idx2=0;int j=s.size()-1,idx=0,str=0;
while(idx2<s.size()){
if(s[idx2]==' '){
space.push_back(idx2);
cout<<space[it]<<endl;
it++;
}
idx2++;
}
int vec=0;
int ed=0,st=0,idxx=0,temp=0;
// cout<<st<<endl;
while(i<j){
    if(i>=space[vec]){
int ed=space.size()-1;
int st=j-space[ed]-1;
int idxx=space[vec];
vec++;
    }

int last=idxx-(1+i);
if(last>=0){
 temp=s[last];
}
if(st>=0){
s[st--]=s[j];
}
s[j]=temp;
i++;
j--;
}



cout<<s<<endl;














}
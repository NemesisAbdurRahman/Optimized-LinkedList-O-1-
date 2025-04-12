
#include<iostream>
using namespace std;
int main (){
    
    string s1={"abcdxabcde"};
    string s2={"abcdeabcdx"};
    // }
    int alpha[26]={0};
    cout<<alpha[12]<<endl;
    int winsize=s1.size();
// int p=0;
// for(int i=0;i<26;i++){

// if(i==int(s1[p])-'a'){
// alpha[i]++;
// p++;
// }
    
// }
int idx2=0,subtrac=0,count=winsize,temp=0,val=0;
for(int i=0;i<winsize;i++){
    subtrac=0;
    idx2=int(s1[i])-'a';
    subtrac=alpha[idx2];
    if(subtrac>0){
        subtrac=1;
    }
    cout<<"subtract :  "<<subtrac<<endl;
alpha[idx2]++;
count=count-subtrac;
// count++;
// count=count-subtrac;
// if(subtrac>temp){
// val=subtrac;
// temp=subtrac;
// }
}
// count=s1.size()-val;
cout<<count<<endl;

for(int i=0;i<26;i++){
    cout<<alpha[i]<<" ";

}
int alpha2[26]={0};
int j=0,idx=0,c=0;
cout<<endl;
for(int i=0;i<s2.size()-winsize+1;i++){
    int alpha2[26]={0};
    j=i;
    c=0;
for(int p=0;p<winsize;p++){

//     if(p==int(s2[j])-'a'&&j<s1.size()+i){
// alpha2[p]++;
// j++;
//     }
idx=int(s2[j])-'a';
cout<<"idx : "<<idx<<endl;
alpha2[idx]++;
cout<<"alpha2 : "<<alpha2[idx]<<" "<<endl;
j++;
if(alpha[idx]==alpha2[idx]){
    c++;
}
}
for(int h=0;h<26;h++){
    cout<<alpha2[h]<<" ";
}
cout<<endl;
cout<<"c "<<c<<endl;
if(c==count){
    cout<<"true "<<endl;
    break;
}
}

}
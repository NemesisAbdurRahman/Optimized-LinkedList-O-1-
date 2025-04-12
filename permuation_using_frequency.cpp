
#include<iostream>
using namespace std;

int main(){

string s1={"eidboaoo"};

string s2={"eidboaoo"};

// string s1={"ababb"};

// string s2={"abcbabaa"};
int sum=0;
// int freq[26]={0};
for(int i=0;i<s1.size();i++){
    sum=int(s1[i])+sum;
}
// cout<<int(s1[0])<<endl;
cout<<sum<<endl;
int check=0;
int c=0;int idx=0;

for(int i=0;i<s2.size();i++){
idx=i;
check=0;
    while(idx<s1.size()+i&&i<=s2.size()-s1.size()){
        check=check+int(s2[idx]); 
        cout<<"idx : "<<idx<<endl;
        idx++;
cout<<check<<endl;

    }
    if(sum==check){
        c++;
        cout<<"true"<<endl;
        break;

    }
    else{
        cout<<"check is : "<<check<<endl;
    }
}
if(c==0){
    cout<<"false"<<endl;
}


}
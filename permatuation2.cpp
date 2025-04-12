
#include<iostream>
using namespace std;


#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
int main(){
string s1={"adc"};
string s2={"dcda"};
int i=1,j=1,c=0,l=0;
int idx=s2.find(s1[0]);
cout<<idx<<endl;

while(idx+i<s2.length()&&s1.find(s2[idx+i])<s1.size()){

    i++;
l++;
    cout<<"bye"<<endl;
}
while(idx-j>=0&&s1.find(s2[idx-j])<s1.size()){
    c++;
    j++;
    cout<<"hi"<<endl;
}
cout<<l<<endl;
cout<<j<<endl;
cout<<c<<endl;
if(idx<s2.size()){
cout<<"sum  : "<<l+c+1<<endl;
if((l+c+1)==s1.length()){
    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}
}
}
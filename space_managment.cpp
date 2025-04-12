
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){

string s={"the  sky  is   blue"};
int c=0,count=0;
for(int i=0;i<s.size();i++){
if(s[i]==' '&&c>0){
    s[i-count]=s[i];

count++;
}
else if(s[i]==' '){
    s[i-count]=s[i];

    c++;
}
else{
    s[i-count]=s[i];
    c=0;
}

}

for(int i=0;i<count;i++){
    s.pop_back();
}
cout<<s<<endl;
}
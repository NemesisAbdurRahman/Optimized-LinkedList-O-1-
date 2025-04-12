
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int c=1;
int matrix[3][3];
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
    matrix[i][j]=c;
    c++;
}


}
int v=2;
   int sum=0,sum2=0; 
for(int i=0;i<3;i++){
   sum+=matrix[i][i];
sum2+=matrix[i][v--];
    }

cout<<sum<<" "<<sum2;



}
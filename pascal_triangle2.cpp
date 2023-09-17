#include<iostream>
using namespace std;

int facNcR(int n,int c){
         long long res = 1;
         for(int i=0; i<c; i++){
            res = res*(n-i);
            res = res/(i+1);

         }
         return res;
    
}

int main(){

// printing the nth row of the pascal's triangle
int n,i;
cin>>n;
for(i=1; i<=n; i++){
        cout<<facNcR(n-1,i-1)<<" ";
}


    return 0;
}
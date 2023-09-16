#include<bits/stdc++.h>
using namespace std;



int main(){

int n;
cin>>n;
int prices[n];
int diff = 0;
int ans;
for(int i=0; i<n; i++){
    cin>>prices[i];
}

for(int i=0; i<n; i++){
    for(int j = i + 1; j<n; j++){
          
        int profit = prices[j] - prices[i];
        if(profit >= diff){
            diff = profit;
        }
    }
         ans = diff;

}
cout<<ans;




    return 0;
}
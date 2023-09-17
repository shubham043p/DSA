#include<bits/stdc++.h>
using namespace std;

string addstring(string num1,string num2){


                string ans = "";
    int carry = 0;
    int n1 = num1.length()-1;
    int n2 = num2.length()-1;


    while(n1>-1 and n2>-1){
        ans+=((num1[n1]-'0' + num2[n2]-'0' + carry)%10 + '0');
        carry = (num1[n1]-'0' + num2[n2]-'0' + carry)/10;
        n1--;
        n2--;
    }
   while(n1>-1){
    ans+=((num1[n1]-'0' + carry)%10 + '0');
    carry = (num1[n1]-'0' + carry)/10;
    n1--;
   }
      while(n2>-1){
    ans+=((num2[n2]-'0' + carry)%10 + '0');
    carry = (num2[n2]-'0' + carry)/10;
    n2--;
   }  
    if(carry>0){
    ans+='1';
   }
   reverse(ans.begin(),ans.end());
   return ans;

}


int main(){

     string num1,num2;
     cin>>num1>>num2;
     cout<<addstring(num1,num2);

    return 0;
}
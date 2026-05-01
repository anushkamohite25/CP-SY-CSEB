#include<iostream>
#include<string>
#inlcude<algoithm>
using namespace std;
int main(){
  string str="madam";
  string r=str;
  reverse(r.begin(),r.end());
  if(str==r){
    cout<<"Palindrome";
  }
  else{
    cout<<"Not Palindrome";
  }
  return 0;
}

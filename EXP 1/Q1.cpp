#include <iostream>
#include <sstream>
using namespace std;
int main(){
  string s;
  cout<<"Enter the sentence: ";
  cin>>s;
  stringstream ss(s);
  string word;
  int count=0;
  while(ss>>word){
    count++;
      }
  cout<<"The total words are: "<<count<<endl;
  return 0;
}

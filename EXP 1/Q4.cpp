#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter two numbers: ";
    cin>>m>>n;
    int pow=1;
    for(int i=1;i<=n;i++){
        pow=pow*m;
    }
    cout<<m<<"^"<<n<<"="<<pow<<endl;
    return 0;
}

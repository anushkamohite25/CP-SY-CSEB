#include <iostream>
using namespace std;
int main(){
    int N,n;
    cin >>N>>n;
    if(N & (1<<n))
        cout<<"Set";
    else
        cout<<"Not Set";
    return 0;
}

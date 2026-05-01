#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int P;
    cin>>P;
    if (P==0||P==1){
        cout<<1;
        return 0;
    }
    double sum=0;
    for (int i=2;i<=P;i++)
        sum+=log10(i);
    cout<<(int)sum+1;
    return 0;
}

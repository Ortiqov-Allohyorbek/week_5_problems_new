#include <iostream>
using namespace std;
int main() {
    int n,r;
    int i=0;
    cin>>n;
    int orn=n;
    if (n<0 || n%10==0) {
        cout<<"false"<<endl;
        return 0;
    }
    while (n>0) {
        i=i*10+n%10;
        n=n/10;
    }if (i==orn) {
        cout<<"true"<<endl;
    }else {
        cout<<"false"<<endl;
    }
    return 0;
}

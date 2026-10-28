#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=0;
    while (n>=5) {
        i=n/5+i;
        n=n/5;
    }
    cout<<i<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int l=n;
    while (l>=m) {
        n=l/m+n;
        l=l/m+l%m;
    }
    cout<<n<<endl;
    return 0;
}
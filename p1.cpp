#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i =1;
    while(i<=n) {
        if (n%2==0 && i==n) {
            cout<<'b'<<endl;
        } else {
            cout<<'a';
        }
    i++;
    }
    return 0;
}
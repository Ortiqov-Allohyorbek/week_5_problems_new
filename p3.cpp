#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int num;
    int current=0;
    int max=0;
    int i=0;
    while (n>i) {
        cin>>num;
        if (num==1) {
            current++;
            if (current>max) {
                max=current;
            }
        }
        else{
            current=0;
        }
    i++;
    }
    cout<<max<<endl;
    return 0;
}
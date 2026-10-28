#include <iostream>
using namespace std;
int main() {
    int x;
    char letters;
    cin>>x;
    int b=0,a=0,l=0,o=0,n=0;
    int i=0;
    while (x>i) {
        cin>>letters;
        switch (letters) {
            case 'b':
                b++;
                break;
            case 'a':
                a++;
                break;
            case 'l':
                l++;
                break;
            case 'o':
                o++;
                break;
            case 'n':
                n++;
                break;
            default:
                break;
        }
        i++;
    }int result=b;
    if (result>a) {
        result=a;
    }if (result>l/2) {
        result=l/2;
    }if (result>o/2) {
        result=o/2;
    }if (result>n) {
        result=n;
    }
    cout<<result<<endl;
    return 0;
}
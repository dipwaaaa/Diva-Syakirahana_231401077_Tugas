#include <iostream>
using namespace std;

main() {
    system("CLS");
    int i, *p=&i;

    for (i=0; i<20; i++) {
        if (i%2==1) {cout<<i<<": "<<p<<endl;}}
}
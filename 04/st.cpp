#include <iostream>
#include <bitset>

using namespace std;

int main(){
    unsigned x = 0x10FFFF;
    
    cout << bitset<21>(x) << "\n"<< endl;
    cout << bitset<21>(x>>18) << endl;

    return 0;
}
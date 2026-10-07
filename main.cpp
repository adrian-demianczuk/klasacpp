#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 26; i++) {
        char litera = 'a' + (i - 1);
        cout << i << " litera to " << litera << endl;
    }
    return 0;
}

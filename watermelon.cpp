#include <iostream>
using namespace std;

int main() {

    // INPUT
    int w;
    cin >> w;

    // LOGIC
    if (w > 2 && w % 2 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
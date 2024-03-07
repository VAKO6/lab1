#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << j;
        }
        for (int d = 0; d < i; d++) {
            cout << d;
        }
              
        cout << endl;     
    }

    return 0;
}
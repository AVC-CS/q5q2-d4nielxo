#include <iostream>
using namespace std;

int main() 
{
    int n, m;
    int result = 1;

    cout << "Enter your base number: ";
    cin >> n;

    cout << "Enter your exponent: ";
    cin >> m;

    cout << n << " to power number: ";

    for (int i = 1; i <= m; i++) {
        result = result * n;
        cout << result;
        if (i < m) {
            cout << ", ";
        }
    }

    return 0;
}
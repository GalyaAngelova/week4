#include <iostream>
using namespace std;

int main() {
 cout << "Enter n: ";
    cin >> n;
    int i;
    int x = 0;
    while (i < n){
            cout << "Enter number: ";
        cin >> i;
        if (i < 0){
           x += i;
           cout << x;
        }

    }
    cout << n;
    system("pause");
    return 0;
}

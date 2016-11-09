#include <iostream>
using namespace std;

int main() {
 int n,a;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        a = i * i + 3 * i;
        cout << a << endl;
    }
    system("pause");
    return 0;
}

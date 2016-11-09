#include <iostream>
using namespace std;

int main() {
int n;
    cout << "Enter n: " ;
    cin >> n;
    int first = 0;
    int second = 1;
    int next;
    for (int i = 0; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
        cout << first << endl;
    }
    system("pause");
    return 0;
}

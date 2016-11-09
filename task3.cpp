#include <iostream>
using namespace std;

int main () {
int num;
    cout << "Enter n: " ;
    cin >> n;
    int n100,n10,n1;
    n100 = n / 100;
    n10 = n / 10%10;
    n1 = n % 10;
    if (n100*n10*n1 >= 100){
        cout << "YES," << n100*n10*n1 - n100 - n10 - n1 << "." << endl;
    }
    else cout << "NO," << n100*n10*n << "." << endl;
    system("pause");
    return 0;
}

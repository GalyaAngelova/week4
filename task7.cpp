#include <iostream>
using namespace std;

int main() {
int n;
    cout << "Enter n: ";
    cin >> n;
    char a,b;
    cout << "Enter symbols: " ;
    cin >> a >> b ;

    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            cout << a;
    }
        for( int j = n ; j > i; j--){
            cout << b;
        }
        cout << endl;
    }
    system("pause");
    return 0;
}

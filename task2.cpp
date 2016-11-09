#include <iostream>
using namespace std;

int main(){
int a,b,c;
    cout << "Enter a: " ;
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    if (a+b > c && b + c > a && a + c > b){
        if (a == b && b == c) {
        cout << "Exist, equilateral." << endl;
        }
        else if (a == b || b == c || a == c) {
            cout << "Exist, isosceles." << endl;
        }
        else cout << "Exist, scalene." << endl;
    }
    else cout << "Does not exist." << endl;
    system("pause");
    return 0;
}

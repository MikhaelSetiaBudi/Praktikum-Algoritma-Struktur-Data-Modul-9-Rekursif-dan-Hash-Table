#include <iostream>
using namespace std;

long long faktorial(int bilangan_2311110033) {
    if (bilangan_2311110033 == 0 || bilangan_2311110033 == 1) {
        return 1;
    } else {
        return bilangan_2311110033 * faktorial(bilangan_2311110033 - 1);
    }
}

int main() {
    int input;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> input;
    if (input < 0) {
        cout << "Input harus bilangan bulat positif!" << endl;
        return 1;
    }
    cout << "Faktorial dari " << input << " adalah: " << faktorial(input) << endl;
    return 0;
}


// Mikhael Setia Budi
// 2311110033
// copyright@MikhaelS.B
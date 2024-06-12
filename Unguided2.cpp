#include <iostream>
using namespace std;

long long faktorial_helper(int bilangan_2311110033, int temp) {
    if (bilangan_2311110033 == 0 || bilangan_2311110033 == 1) {
        return 1;
    } else {
        return temp * faktorial_helper(bilangan_2311110033 - 1, temp - 1);
    }
}

long long faktorial(int bilangan_2311110033) {
    return faktorial_helper(bilangan_2311110033, bilangan_2311110033);
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
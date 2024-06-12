# <h1 align="center">Laporan Praktikum Modul Rekursif dan Hash Table</h1>
<p align="center">Mikhael Setia Budi</p>

## Dasar Teori

### Konsep Rekursif
Rekursif merupakan salah satu proses pengulangan fungsi atau prosedur yang memanggil dirinya sendiri. Dalam sebuah fungsi rekursif pemanggilan dapat terjadi berulang kali. Karena ada proses yang berulang-ulang maka harus ada suatu kondisi
yang mengakhiri prosesnya. Jika tidak, maka proses tidak akan pernah berhenti sampai memori yang digunakan tidak dapat menampung lagi. Kode rekursif cenderung lebih singkat dan lebih mudah dibuat dibandingkan dengan
kode iteratif. Biasanya, perulangan dapat diubah menjadi fungsi rekursif saat proses kompilasi atau interpretasi. Rekursi sangat efektif untuk menangani tugas yang dapat
diuraikan menjadi sub tugas yang serupa. Sebagai contoh, masalah pengurutan, pencarian, dan penjelajahan sering kali dapat diselesaikan dengan solusi rekursif yang sederhana.

### Jenis-Jenis Rekursif
Terdapat dua jenis fungsi rekursi yaitu:
a. Rekursi langsung

Dalam rekursi langsung, fungsi memanggil dirinya sendiri secara langsung.

b. Rekursi tidak langsung

Jika sebuah fungsi memanggil dirinya sendiri secara tidak langsung dari fungsi lain.

### Kelebihan
1. Kode rekursif menyajikan solusi yang
mudah dimengerti dan bersih,
meningkatkan kejelasan.
2. Rekursi terbukti efektif untuk
menangani masalah yang dapat
diuraikan menjadi sub tugas-serupa,
seperti penjelajahan struktur data
pohon.
3. Dalam beberapa kasus, solusi rekursif
dapat memberikan kode yang lebih
elegan dan lebih kompak dibandingkan
dengan pendekatan iteratif.

### Kekurangan
1. Efisiensi ruang menjadi masalah utama
dalam rekursi karena setiap panggilan
rekursif menambah overhead pada call
stack.
2. Beberapa implementasi rekursif
mungkin kurang efisien secara waktu,
terutama ketika terdapat overhead
pemanggilan fungsi.
3. Kesulitan dalam pemahaman konsep
rekursi oleh beberapa programmer
dapat memunculkan potensi bug dan
kompleksitas pemecahan masalah.

### Pengertian Hash Table
Hash Table adalah struktur data yang mengorganisir data ke dalam pasangan
kunci-nilai. Hash table biasanya terdiri dari dua komponen utama: array (atau
vektor) dan fungsi hash. Hashing adalah teknik untuk mengubah rentang nilai
kunci menjadi rentang indeks array.

### Fungsi Hash Table
Fungsi hash membuat pemetaan antara kunci dan nilai, hal ini dilakukan
melalui penggunaan rumus matematika yang dikenal sebagai fungsi hash. Hasil
dari fungsi hash disebut sebagai nilai hash atau hash. Nilai hash adalah
representasi dari string karakter asli tetapi biasanya lebih kecil dari aslinya.

### Operasi Hash Table
1. Insertion
2. Deletion
3. Searching
4. Update
5. Traversal

### Collision Resolution
1. Open Hashing (Chaining)
2. Closed Hashing

## Guided 

## 1. Rekursif Langsung (Direct Recursion)

```C++
#include <iostream>
using namespace std;

//Code ini berfungsi untuk melakukan hitung mundur
//dari angka yang diinputkan

void countdown(int n) {
    if (n == 0) {
        return; 
    }

    cout << n << " ";
    countdown(n - 1);
}

int main() {
    cout << "Rekursif Langsung: ";
    countdown(5); //5 merupakan input nya
    cout << endl;
    return 0;
}
```

**Code 1**
```C++
#include <iostream>
using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. 
Menggunakan namespace std agar kita bisa menggunakan objek dan fungsi dari std

**Code 2**
```C++
void countdown(int n) {
    if (n == 0) {
        return; 
    }

    cout << n << " ";
    countdown(n - 1);
}
```
void countdown(int n) digunakan untuk mendeklarasi fungsi countdown yang menerima satu argumen integer n.
perulangan if digunakan sebagai basis rekursi. jika n sama dengan 0 maka fungsi akan berhenti
menampilkan nilai n diikuti dengan spasi. countdown(n - 1) digunakan untuk memanggil dirinya sendiri dengan nilai n dikurangi 1 dan melakukan rekursi hingga n mencapai o

**Code 3**
```C++
int main() {
    cout << "Rekursif Langsung: ";
    countdown(5); //5 merupakan input nya
    cout << endl;
    return 0;
}
```
Fungsi main merupakan fungsi utama yang dijalankan oleh program. dalam fungsi main terdaoat kode untuk mencetak string "Rekursif Langsung:).
memanggil fungsi countdown dengan argumen 5. ini digunakan untuk memulai proses hitung mundur dari 5. mencetak karakter newline untuk memindahlan kursor ke baris berikutnya setelah hitung mundur selesai.

#### Output
```C++
Rekursif Langsung: 5 4 3 2 1 
```
menampilkan rekursif langsung dengan hitungan mundur dari 5.

#### Full Code Screenshoot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-9-Rekursif-dan-Hash-Table/blob/master/Modul%209%20Alstrukdat/Code%20Guided%201%20Rekursif%20dan%20Hash%20Table.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-9-Rekursif-dan-Hash-Table/blob/master/Output%20Modul%209%20Alstrukdat/Output%20Guided%201%20Rekursif%20dan%20Hash%20Table.png?raw=true)

## 2. Rekursif Tidak Langsung (Indirect Recursion)

```C++
#include <iostream>
using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}

int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
}
```

**Code 1**
```C++
#include <iostream>
using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. 
Menggunakan namespace std agar kita bisa menggunakan objek dan fungsi dari std

**Code 2**
```C++
void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}
```
deklarasi fungsi functionB agar function A dapat memnggil functionB meskipun functionB didefinisikan setelah functionA.
mendefinisikan fungsi functionA yang menerima satu argumen integer n, dimana dalam fungsi functionA terdapat kondisi dasar untuk menghentikan rekursi,
mencetak nilai n diikuti dengan spasi, dan memanggil fungsi functionB dengan nilai n dikurangi 1. ini merupakan rekursi tidak langsung karena functionA memanggil functionB.
mendefinisikan functionB yang menerima satu argumen integer n, dalam functionB terdapat kondisi dasar untuk menghentikan rekursi, mencetak nilai n diikuti dengan spasi, dan memanggil functionA dengan nilai n dibagi 2.

**Code 3**
```C++
int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
}
```
int main() merupakan fungsi utama yang akan dieksekusi pertama saat program dijalankan. dalam int main() terdapat kode mendeklarasikan dan meninisialisasi variabel num dengan nilai 5,
mencetak string "Rekursif Tidak Langsung:", memanggil fungsi functionA dengan argumen num yang bernilai 5.

#### Output
```C++
Rekursif Tidak Langsung: 5 4 2 1 
```
menampilkan rekursif tidak langsung dengan hitungan mundur dari 5.

#### Full Code Screenshoot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-9-Rekursif-dan-Hash-Table/blob/master/Modul%209%20Alstrukdat/Code%20Guided%202%20Rekursif%20dan%20Hash%20Table.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-9-Rekursif-dan-Hash-Table/blob/master/Output%20Modul%209%20Alstrukdat/Output%20Guided%202%20Rekursif%20dan%20Hash%20Table.png?raw=true)

## 3. Hash Table

```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;
class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
    return hash_val % TABLE_SIZE; // 4 bisa aja 204,12004, 6 bisa aja 266, 300
    }
    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);
    
        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }
    string searchByName(string name) {
    int hash_val = hashFunc(name);
    for (auto node : table[hash_val]) {
        if (node->name == name) {
            return node->phone_number;
        }
    }
    return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
                for (auto pair : table[i]) {
                if(pair != nullptr){
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
HashMap employee_map;

employee_map.insert("Mistah", "1234");
employee_map.insert("Pastah", "5678");
employee_map.insert("Ghana", "91011");

cout << "Nomer Hp Mistah : " <<employee_map.searchByName("Mistah") <<
endl;
cout << "Phone Hp Pastah : " <<employee_map.searchByName("Pastah") <<
endl;
cout << "Phone Hp Ghana : " <<employee_map.searchByName("Ghana") <<
endl;

employee_map.remove("Mistah");

cout << "Nomer Hp Mistah setelah dihapus : "
<<employee_map.searchByName("Mistah") << endl << endl;

cout << "Hash Table : " << endl;

employee_map.print();

return 0;
}
```

**Code 1**
```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. 
Menggunakan namespace std agar kita bisa menggunakan objek dan fungsi dari std
include <string> menyertakan header untuk menggunakan kelas string. include <vector> meyertakan header untuk menggunakan kelas vector
mendeklarasikan TABLE_SIZE dengan nilai 11 untuk ukuran tabel hash.

**Code 2**
```C++
string name;
string phone_number;
```
mendeklarasikan variabel global name dan phone_number dengan tipe data string

**Code 3**
```C++
class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};
```
mendeklarasikan kelas HashNode untuk menyimpan pasangan nama dan nomor telepon. variabel string name digunakan untuk menyimpan nama.
variabel string phone_number digunakan untuk menyimpan nomor telepon. menginisialisasi HashNode dengan nama dan nomor trlrpon yang diberikan.

**Code 4**
```C++
class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
```
kode diatas adalah kelas HashMap, dimana dalam kelas HashMap terdapat kode array dari vektor untuk menyimpan objek HashNode dengan ukuran TABLE_SIZE.

**Code 5**
```C++
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
    return hash_val % TABLE_SIZE; // 4 bisa aja 204,12004, 6 bisa aja 266, 300
    }
```
fungsi hash yang menerima kunci berupa string dan mengembalikan nilai hash. dalam fungsi hash terdapat kode untuk menginisialisasi variabel hash_val dengan nilai 0.
menambahkan nilai ASCII dari setiap karakter dalam kunci ke hash_val. mengembalikan nilai hash dengan mengambil sisa bagi hash_val dengan TABLE_SIZE.

**Code 5**
```C++
    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }
```
kode diatas merupakan fungsi insert yang digunakan untuk menyisipkan pasangan nama dan nomor telepon ke dalam hash table.
dalam fungsi insert terdapat kode untuk mendapatkan nilai hash dari name, perulangan untuk mememriksa apakah nama sudah ada di hash table, jika nama sudah ada maka perbarui nomor telepon dan keluar dari fungsi, 
tetapi jika nama tidak ada maka buat node baru dan tambahkan ke hash table.

**Code 6**
```C++
    void remove(string name) {
        int hash_val = hashFunc(name);
    
        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }
```
fungsi remove digunakan untuk menghapus node dengan nama yang diberikan dari hash table. dalam fungsi remove terdapat kode untuk mendapatkan nilai hash dari name.
melakukan perulangan untuk mencari dan menghapus node dengan nama yang sesuai.

**Code 7**
```C++
    string searchByName(string name) {
    int hash_val = hashFunc(name);
    for (auto node : table[hash_val]) {
        if (node->name == name) {
            return node->phone_number;
        }
    }
    return "";
    }
```
fungsi searchByName digunakan untuk mencari nomor telepon berdasarkan nama. dalam fungsi searchByName terdapat kode untuk mendapatkan nilai hash dari name,
dan melakukan perulangan untuk mencari dan mengembalikan nomor telepon jika nama ditemukan. jika nama tidak ditemukan maka kembalikan string kosong

**Code 8**
```C++
    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
                for (auto pair : table[i]) {
                if(pair != nullptr){
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};
```
fungsi print digunakan untuk mencetak seluruh isi hash table

**Code 9**
```C++
int main() {
HashMap employee_map;

employee_map.insert("Mistah", "1234");
employee_map.insert("Pastah", "5678");
employee_map.insert("Ghana", "91011");

cout << "Nomer Hp Mistah : " <<employee_map.searchByName("Mistah") <<
endl;
cout << "Phone Hp Pastah : " <<employee_map.searchByName("Pastah") <<
endl;
cout << "Phone Hp Ghana : " <<employee_map.searchByName("Ghana") <<
endl;

employee_map.remove("Mistah");

cout << "Nomer Hp Mistah setelah dihapus : "
<<employee_map.searchByName("Mistah") << endl << endl;

cout << "Hash Table : " << endl;

employee_map.print();

return 0;
}
```
fungsi main merupakan fungsi utama dalam program. dalam fungsi main kode diatas terdapat kode untuk membuat objek HashMap bernama employee_Map,
Menyisipkan pasangan nama "Mistah" dan nomor telepon "1234" ke dalam employee_map,
Menyisipkan pasangan nama "Pastah" dan nomor telepon "5678" ke dalam employee_map,
Menyisipkan pasangan nama "Ghana" dan nomor telepon "91011" ke dalam employee_map,
Mencari dan mencetak nomor telepon "Mistah", Mencari dan mencetak nomor telepon "Pastah",
Mencari dan mencetak nomor telepon "Ghana", Menghapus pasangan nama dan nomor telepon "Mistah" dari employee_map,
Mencari dan mencetak nomor telepon "Mistah" setelah dihapus, Mencetak string "Hash Table : ",
Mencetak seluruh isi hash table, dan Mengakhiri eksekusi fungsi main dan mengembalikan nilai 0 ke sistem operasi.

#### Output
```C++
Nomer Hp Mistah : 1234
Phone Hp Pastah : 5678
Phone Hp Ghana : 91011
Nomer Hp Mistah setelah dihapus :

Hash Table :
0:
1:
2:
3:
4: [Pastah, 5678]
5:
6: [Ghana, 91011]
7:
8:
9:
10:
```
menampilkan nomor telepon dengan hash table.

#### Full Code Screenshoot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-9-Rekursif-dan-Hash-Table/blob/master/Modul%209%20Alstrukdat/Code%20Guided%203%20Rekursif%20dan%20Hash%20Table.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-9-Rekursif-dan-Hash-Table/blob/master/Output%20Modul%209%20Alstrukdat/Output%20Guided%203%20Rekursif%20dan%20Hash%20Table.png?raw=true)


## Unguided 

### 1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!
Contoh Output:
Masukkan bilangan bulat positif: 5
Faktorial dari 5 adalah: 120

```C++
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
```

**Code 1**
```C++
#include <iostream>
using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. 
Menggunakan namespace std agar kita bisa menggunakan objek dan fungsi dari std

**Code 2**
```C++
long long faktorial(int bilangan_2311110033) {
    if (bilangan_2311110033 == 0 || bilangan_2311110033 == 1) {
        return 1;
    } else {
        return bilangan_2311110033 * faktorial(bilangan_2311110033 - 1);
    }
}
```
mendeklarasikan fungsi faktorial yang mengembalikan nilai bertipe long long dan menerima satu parameter bertipe int.
perulangan if merupakan Basis kasus untuk rekursi, jika bilangan adalah 0 atau 1, kembalikan 1.
else Kasus rekursi, kembalikan bilangan dikali dengan hasil pemanggilan fungsi faktorial dengan bilangan dikurangi 1.

**Code 3**
```C++
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
```
Fungsi main merupakan program awal yang akan dijalankan. dalam fungsi main terdapat beberapa kode yaitu Deklarasi variabel input bertipe int untuk menyimpan nilai yang akan dimasukkan oleh pengguna,
mencetak pesan untuk meminta pengguna memasukkan bilangan bulat positif, membaca input dari pengguna dan menyimpannya dalam variabel input,
memeriksa apakah input kurang dari 0, jika kurang dari 0 maka akan mencetak pesan error dan mengakhiri program dengan mengembalikan nilai 1,
memanggil fungsi faktorial dengan input sebagai argumen dan mencetak hasilnya, dan mengakhiri eksekusi fungsi main dan mengembalikan nilai 0 ke sistem operasi

#### Output:
```C++
Masukkan bilangan bulat positif: 5
Faktorial dari 5 adalah: 120
```
menampilakan hasil faktorial dari bilangan bulat positif 5 dengan rekursif langsung

#### Full code Screenshot:
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-9-Rekursif-dan-Hash-Table/blob/master/Modul%209%20Alstrukdat/Code%20Unguided%201%20Rekursif%20dan%20Hash%20Table.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-9-Rekursif-dan-Hash-Table/blob/master/Output%20Modul%209%20Alstrukdat/Output%20Unguided%201%20Rekursif%20dan%20Hash%20Table.png?raw=true)

### 2. Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 di atas!

```C++
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
```

**Code 1**
```C++
#include <iostream>
using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. 
Menggunakan namespace std agar kita bisa menggunakan objek dan fungsi dari std

**Code 2**
```C++
long long faktorial_helper(int bilangan_2311110033, int temp) {
    if (bilangan_2311110033 == 0 || bilangan_2311110033 == 1) {
        return 1;
    } else {
        return temp * faktorial_helper(bilangan_2311110033 - 1, temp - 1);
    }
}
```
Mendeklarasikan fungsi faktorial_helper  yang mengembalikan nilai bertipe long long dan menerima dua parameter bertipe int.
Basis kasus untuk rekursi jika bilangan adalah 0 atau 1, kembalikan 1. Kasus rekursi kembalikan temp dikali dengan hasil pemanggilan fungsi faktorial_helper dengan parameter bilangan_2311110033 - 1 dan temp - 1.


**Code 3**
```C++
long long faktorial(int bilangan_2311110033) {
    return faktorial_helper(bilangan_2311110033, bilangan_2311110033);
}
```
Mendeklarasikan fungsi faktorial yang mengembalikan nilai bertipe long long dan menerima satu parameter bertipe int.
Memanggil fungsi faktorial_helper dengan dua parameter yang sama bilangan_2311110033 dan mengembalikan hasilnya.

**Code 4**
```C++
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
```
fungsi main merupakan program utama yang akan dijalankan. mendeklarasikan variabel input bertipe int untuk menyimpan nilai yang akan dimasukkan oleh pengguna.
Mencetak pesan untuk meminta pengguna memasukkan bilangan bulat positif.
Membaca input dari pengguna dan menyimpannya dalam variabel input.
Memeriksa apakah input kurang dari 0, jika ya, mencetak pesan error dan keluar dengan nilai return 1.
Memanggil fungsi faktorial dengan input sebagai argumen dan mencetak hasilnya.
Mengakhiri eksekusi fungsi main dan mengembalikan nilai 0 ke sistem operasi, menandakan bahwa program telah berakhir dengan sukses.

#### Output:
```C++
Masukkan bilangan bulat positif: 6
Faktorial dari 6 adalah: 720
```
menampilakan hasil faktorial dari bilangan bulat positif 6 dengan rekursif tidak langsung

#### Full code Screenshot:
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-9-Rekursif-dan-Hash-Table/blob/master/Modul%209%20Alstrukdat/Code%20Unguided%202%20Rekursif%20dan%20Hash%20Table.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-9-Rekursif-dan-Hash-Table/blob/master/Output%20Modul%209%20Alstrukdat/Output%20Unguided%202%20Rekursif%20dan%20Hash%20Table.png?raw=true)

## Kesimpulan
Priority queue adalah jenis queue yang mengatur elemen berdasarkan nilai prioritasnya.  jika menambahkan elemen dengan nilai prioritas tinggi ke priority queue, elemen tersebut mungkin dimasukkan di dekat
bagian depan antrian, sementara elemen dengan nilai prioritas rendah mungkin dimasukkan di dekat bagian belakang. Ada beberapa cara untuk mengimplementasikan priority queue, termasuk
menggunakan array, linked list, heap, atau binary search tree. Heap dalam struktur data adalah struktur berbasis pohon biner (binary tree) dengan aturan tertentu.

## Referensi
[1]	M. I. Nurhadi, R. E. S. S. T, C. S. S. T, F. T. Elektro, U. Telkom, and P. Q. Algorithm, “Manajemen Dan Kendali Beban Perangkat Elektronik Berbasis Web Dengan Algoritma Priority Queue Web Based Management and Controlling for Electronic Device Loads With Priority Queue,” vol. 8, no. 2, pp. 1943–1948, 2021.

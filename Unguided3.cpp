#include <iostream>
#include <unordered_map>
#include <string>

struct Mahasiswa {
    std::string nim_2311110033;
    int nilai;
};

std::unordered_map<std::string, Mahasiswa> mahasiswa;

void tambahData() {
    Mahasiswa mhs;
    std::cout << "Masukkan NIM: ";
    std::cin >> mhs.nim_2311110033;
    std::cout << "Masukkan Nilai: ";
    std::cin >> mhs.nilai;
    mahasiswa[mhs.nim_2311110033] = mhs;
}

void hapusData() {
    std::string nim_2311110033;
    std::cout << "Masukkan NIM yang akan dihapus: ";
    std::cin >> nim_2311110033;
    mahasiswa.erase(nim_2311110033);
}

void cariDataNIM() {
    std::string nim_2311110033;
    std::cout << "Masukkan NIM yang akan dicari: ";
    std::cin >> nim_2311110033;
    if (mahasiswa.find(nim_2311110033) != mahasiswa.end()) {
        std::cout << "NIM: " << mahasiswa[nim_2311110033].nim_2311110033 << ", Nilai: " << mahasiswa[nim_2311110033].nilai << std::endl;
    } else {
        std::cout << "Data tidak ditemukan" << std::endl;
    }
}

void cariDataNilai() {
    int nilai;
    std::cout << "Masukkan Nilai yang akan dicari (80-90): ";
    std::cin >> nilai;
    for (auto const& pair : mahasiswa) {
        if (pair.second.nilai >= 80 && pair.second.nilai <= 90) {
            std::cout << "NIM: " << pair.second.nim_2311110033 << ", Nilai: " << pair.second.nilai << std::endl;
        }
    }
}

int main() {
    int pilihan;
    do {
        std::cout << "Pilihan Menu:" << std::endl;
        std::cout << "1. Tambah Data" << std::endl;
        std::cout << "2. Hapus Data" << std::endl;
        std::cout << "3. Cari Data berdasarkan NIM" << std::endl;
        std::cout << "4. Cari Data berdasarkan Nilai" << std::endl;
        std::cout << "5. Keluar" << std::endl;
        std::cout << "Masukkan pilihan: ";
        std::cin >> pilihan;
        switch (pilihan) {
            case 1:
                tambahData();
                break;
            case 2:
                hapusData();
                break;
            case 3:
                cariDataNIM();
                break;
            case 4:
                cariDataNilai();
                break;
        }
    } while (pilihan != 5);
    return 0;
}


// Mikhael Setia Budi
// 2311110033
// copyright@MikhaelS.B
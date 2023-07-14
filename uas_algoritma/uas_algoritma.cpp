
#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string nama;
    int jumlah;
    string tipe;
    Node* next;

    Node(string nama, int jumlah, string tipe) {
        this->nama = nama;
        this->jumlah = jumlah;
        this->tipe = tipe;
        next = NULL;
    }
};

class ManajemenProduk {
private:
    Node* head;

public:
    ManajemenProduk() {
        head = NULL;
    }

    void tambahProduk() {
        string nama;
        int jumlah;
        string tipe;
        cout << "========== TAMBAH PRODUK ==========" << endl;
        cout << "Nama Produk : ";
        getline(cin, nama);
        cout << "Jumlah Produk : ";
        cin >> jumlah;
        cin.ignore(); // Membersihkan buffer input
        cout << "Tipe Produk : ";
        getline(cin, tipe);

        Node* newNode = new Node(nama, jumlah, tipe);

        if (head == NULL) {
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }

        cout << "Produk berhasil ditambahkan!" << endl;
    }

    void tampilkanSemuaProduk() {
        cout << "========== SEMUA DATA PRODUK ==========" << endl;
        if (head == NULL) {
            cout << "Belum ada data produk yang tersimpan." << endl;
        }
        else {
            Node* current = head;
            while (current != NULL) {
                cout << "Nama Produk: " << current->nama << endl;
                cout << "Jumlah Produk: " << current->jumlah << endl;
                cout << "Tipe Produk: " << current->tipe << endl;
                cout << endl;
                current = current->next;
            }
        }
    }

    void cariProdukByNama() {
        cout << "========== CARI PRODUK BERDASARKAN NAMA ==========" << endl;
        if (head == NULL) {
            cout << "Belum ada data produk yang tersimpan." << endl;
        }
        else {
            string targetNama;
            cout << "Nama Produk yang dicari: ";
            getline(cin, targetNama);
            Node* current = head;
            int posisi = 1;
            bool found = false;
            while (current != NULL) {
                if (current->nama == targetNama) {
                    cout << "Data produk ditemukan pada posisi: " << posisi << endl;
                    cout << "Nama Produk: " << current->nama << endl;
                    cout << "Jumlah Produk: " << current->jumlah << endl;
                    cout << "Tipe Produk: " << current->tipe << endl;
                    found = true;
                    break;
                }
                current = current->next;
                posisi++;
            }
            if (!found) {
                cout << "Nama produk " << targetNama << " TIDAK DITEMUKAN" << endl;
            }
        }
    }

    void algoritmaSortByJumlahProduk() {
        if (head == NULL || head->next == NULL) {
            return; // Tidak perlu sorting jika hanya terdapat 0 atau 1 node
        }

        bool swapped;
        Node* current;
        Node* last = NULL;

        do {
            swapped = false;
            current = head;

            while (current->next != last) {
                if (current->jumlah < current->next->jumlah) {
                    swapNodes(current, current->next);
                    swapped = true;
                }
                current = current->next;
            }
            last = current;
        } while (swapped);
    }

    void swapNodes(Node* a, Node* b) {
        string tempNama = a->nama;
        int tempJumlah = a->jumlah;
        string tempTipe = a->tipe;

        a->nama = b->nama;
        a->jumlah = b->jumlah;
        a->tipe = b->tipe;

        b->nama = tempNama;
        b->jumlah = tempJumlah;
        b->tipe = tempTipe;
    }
};

int main() {
    ManajemenProduk manajemenProduk;
    int pilihan;
    do {
        cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl;
        cout << "1. Tambah Produk" << endl;
        cout << "2. Tampilkan Semua Produk" << endl;
        cout << "3. Cari Produk berdasarkan Nama" << endl;
        cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
        case 1:
            manajemenProduk.tambahProduk();
            break;
        case 2:
            manajemenProduk.tampilkanSemuaProduk();
            break;
        case 3:
            manajemenProduk.cariProdukByNama();
            break;
        case 4:
            manajemenProduk.algoritmaSortByJumlahProduk();
            cout << "Produk berhasil diurutkan berdasarkan jumlah produk." << endl;
            break;
        case 5:
            cout << "Terima kasih! Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }

        cout << endl;
    } while (pilihan != 5);

    return 0;
}
/////baruuuuuuuu
#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string nama;
    int jumlah;
    string tipe;
    Node* next;

    Node(string nama, int jumlah, string tipe) {
        this->nama = nama;
        this->jumlah = jumlah;
        this->tipe = tipe;
        next = NULL;
    }
};

class ManajemenProduk {
private:
    Node* head;

public:
    ManajemenProduk() {
        head = NULL;
    }

    void tambahProduk() {
        string nama;
        int jumlah;
        string tipe;
        cout << "========== TAMBAH PRODUK ==========" << endl;
        cout << "Nama Produk : ";
        getline(cin, nama);
        cout << "Jumlah Produk : ";
        cin >> jumlah;
        cin.ignore(); // Membersihkan buffer input
        cout << "Tipe Produk : ";
        getline(cin, tipe);

        Node* newNode = new Node(nama, jumlah, tipe);

        if (head == NULL) {
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }

        cout << "Produk berhasil ditambahkan!" << endl;
    }

    void tampilkanSemuaProduk() {
        cout << "========== SEMUA DATA PRODUK ==========" << endl;
        if (head == NULL) {
            cout << "Belum ada data produk yang tersimpan." << endl;
        }
        else {
            Node* current = head;
            while (current != NULL) {
                cout << "Nama Produk: " << current->nama << endl;
                cout << "Jumlah Produk: " << current->jumlah << endl;
                cout << "Tipe Produk: " << current->tipe << endl;
                cout << endl;
                current = current->next;
            }
        }
    }

    void cariProdukByNama() {
        cout << "========== CARI PRODUK BERDASARKAN NAMA ==========" << endl;
        if (head == NULL) {
            cout << "Belum ada data produk yang tersimpan." << endl;
        }
        else {
            string targetNama;
            cout << "Nama Produk yang dicari: ";
            getline(cin, targetNama);
            Node* current = head;
            int posisi = 1;
            bool found = false;
            while (current != NULL) {
                if (current->nama == targetNama) {
                    cout << "Data produk ditemukan pada posisi: " << posisi << endl;
                    cout << "Nama Produk: " << current->nama << endl;
                    cout << "Jumlah Produk: " << current->jumlah << endl;
                    cout << "Tipe Produk: " << current->tipe << endl;
                    found = true;
                    break;
                }
                current = current->next;
                posisi++;
            }
            if (!found) {
                cout << "Nama produk " << targetNama << " TIDAK DITEMUKAN" << endl;
            }
        }
    }

    void algoritmaSortByJumlahProduk() {
        if (head == NULL || head->next == NULL) {
            return; // Tidak perlu sorting jika hanya terdapat 0 atau 1 node
        }

        bool swapped;
        Node* current;
        Node* last = NULL;

        do {
            swapped = false;
            current = head;

            while (current->next != last) {
                if (current->jumlah < current->next->jumlah) {
                    swapNodes(current, current->next);
                    swapped = true;
                }
                current = current->next;
            }
            last = current;
        } while (swapped);
    }

    void swapNodes(Node* a, Node* b) {
        string tempNama = a->nama;
        int tempJumlah = a->jumlah;
        string tempTipe = a->tipe;

        a->nama = b->nama;
        a->jumlah = b->jumlah;
        a->tipe = b->tipe;

        b->nama = tempNama;
        b->jumlah = tempJumlah;
        b->tipe = tempTipe;
    }
};

int main() {
    ManajemenProduk manajemenProduk;
    int pilihan;
    do {
        cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl;
        cout << "1. Tambah Produk" << endl;
        cout << "2. Tampilkan Semua Produk" << endl;
        cout << "3. Cari Produk berdasarkan Nama" << endl;
        cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
        case 1:
            manajemenProduk.tambahProduk();
            break;
        case 2:
            manajemenProduk.tampilkanSemuaProduk();
            break;
        case 3:
            manajemenProduk.cariProdukByNama();
            break;
        case 4:
            manajemenProduk.algoritmaSortByJumlahProduk();
            cout << "Produk berhasil diurutkan berdasarkan jumlah produk." << endl;
            break;
        case 5:
            cout << "Terima kasih! Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }

        cout << endl;
    } while (pilihan != 5);

    return 0;
}





























//Algoritma Front = Dalam poin 10 digunakan untuk mendapatkan antian terdepan atau elemen terdapan. .Digunakan untuk mendapatkan elemen terdepan dalam antrian.Dalam studi kasus Anda, elemen 3 adalah elemen terdepan. dan Algoritma Rear = Mendapatkan elemen paling belakang dalam antrian elemen 4 elemen paling belakang.


//3. queue menggunakan array = lemen pertama yang dimasukkan ke dalam antrian akan menjadi elemen pertama yang dikeluarkan dari antrian.
//4. stack pada point 15 = elemen terakhir yang dimasukkan ke dalam stack akan menjadi elemen pertama yang dikeluarkan.

// 5.perhatikan pada point 20 
// 50 ke 48 ke 30 ke 20 ke 15, 20 ke 25, 30 ke 32 ke 31 dan 35, 70 ke 65 ke 67 ke 66 dan 69, 70 ke 90 ke 98 ke 94 dan 99.
// a. Seberapa banyak kedalaman yang dimiliki struktur tersebut ? jawaban = memiliki kedalam 5
//b. Bagaimana cara membaca struktur pohon di atas ? (Pilih salah satu metode yaitu Inorder, Preorder atau Postorder Traversal)?
// jawaban = Berdasarkan urutan angka yang diberikan, struktur tersebut memiliki kedalaman 5. Kedalaman dihitung dengan mengamati seberapa banyak tingkat atau level yang ada dalam struktur tersebut, yaitu berapa kali kita harus melakukan pergerakan dari akar ke cabang-cabangnya untuk mencapai daun terjauh.


//yaitu elemen akar, Preorder Traversal pada subpohon kiri dan kanan.

//20 -> 50 -> 48 -> 30 -> 20 -> 15 -> 20 -> 25 -> 30 -> 32 -> 31 -> 35 -> 70 -> 65 -> 67 -> 66 -> 69 -> 70 -> 90 -> 98 -> 94 -> 99

//menggunakan metode Preorder Traversal, membaca elemen akar terlebih dahulu, terus melakukan traversal pada anak kiri, dan terakhir melakukan traversal pada anak kanan.










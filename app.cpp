// Example program
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void displayMenu() //this function only show menu
{
    cout<< "==|| MENU ||=="<<"\n";
    cout<<"1. Cek Saldo"<<"\n";
    cout<<"2. Transfer"<<"\n";
    cout<<"3. Pembelian"<<"\n";
    cout<<"4. Pembayaran"<<"\n";
    cout<<"5. Keluar"<<"\n";
    cout<<"Pilih Menu : ";
}

void cekSaldo()//this function for do cek saldo
{
    cout<<"Saldo anda tinggal : Rp. 0"<<"\n";
    cout<<"================"<<"\n";
    //code here ..
}

void transfer()//this function for do transfer
{
    //code here ..
}

void pembelian()//this function for do pembelian
{
    //code here ..
}

void pembayaran()//this function for do pembayaran
{
    //code here ..
}

int main() //this is main program
{
    int menu;
    displayMenu();
    cin>>menu;
    while(menu!=5){
        switch(menu)
        {
            case 1: cekSaldo();displayMenu();cin>>menu;break;
            case 2: transfer();displayMenu();cin>>menu;break;
            case 3: pembelian();displayMenu();cin>>menu;break;
            case 4: pembayaran();displayMenu();cin>>menu;break;
            default: system("clear");;cout<<"\nLog: Tidak ada pilihan"<<"\n";displayMenu();cin>>menu;
        }
    }
    cout<<"\nTerima kasih, Program telah berhenti"<<"\n";
}

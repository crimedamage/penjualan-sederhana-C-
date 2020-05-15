#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
using namespace std;

void admin();
void input();
void kasir();
void menu();
void ccolor(int clr);
void pwellcome();
void loadingbar();
void cls();



 struct kadai{
    string namabr,jenis;
    int harga,jumlah,total,id;

 };
kadai sepatu[15],idkedai[1];
int main()
{
    loadingbar();cls();
    pwellcome();
    Sleep(1000);
    menu();
    return 0;
}
void menu(){

    int pil;
    char loop='y';
    while (loop == 'y'){
            system("cls");
    cout << "\n\t\t\t\tMENU"<<endl;
    cout << "\t\t\t[1] Admin "<<endl;
    cout << "\t\t\t[2] Kasir"<< endl;
    cout << "\t\t\t[3] Exit "<< endl;
    cout << "\t\t\tMasukan Pilihan : ";
    cin >> pil;
    switch(pil){
    case 1:
        admin();
        break;
    case 2:
        kasir();
        break;
    case 3:
        system(0);
    default:
        cout<<"Pilihan Yang Anda Masukan Tidak Terdaftar"<<endl;


    }

    }
}
void admin(){


    int pil;
    char loop ='y';
    while(loop =='y'){
            system("cls");
    cout << "\n\t\t\t\tMENU ADMIN "<<endl;
    cout << "\t\t\t[1] Tambah data "<<endl;
    cout << "\t\t\t[2] Kasir"<< endl;
    cout << "\t\t\t[3] Exit "<< endl;
    cout << "\t\t\tMasukan Pilihan : ";
    cin >> pil;
    switch(pil){
    case 1:
        input();
        break;
    case 2:
        kasir();
        break;
    case 3:
        system(0);
    default:
        cout<<"Pilihan Yang Anda Masukan Tidak Terdaftar"<<endl;


    }
    }
}

void input(){

    string namabr1,jenis1;
    char pilh = 'y';
    int harga1,jumlah1,total1,id;
    while ( pilh == 'y'||pilh=='Y'){
        system("cls");
        cout << "\t\t\tMasukan nama barang : ";
        cin >> namabr1;

        sepatu[id].namabr = namabr1;
        cout << "\t\t\tMasukan jenis       : ";
        cin >> jenis1;
        sepatu[id].jenis = jenis1;
        cout << "\t\t\tMasukan harga       : ";
        cin >> harga1;
        sepatu[id].harga = harga1;
        cout << "\t\t\tMasukan jumlah      : ";
        cin >> jumlah1;
        sepatu[id].jumlah = jumlah1;
        total1= jumlah1*harga1;
        sepatu[id].total = total1;
        cout << "\t\t\tAda Data Lagi [y/t] : ";
        cin >> pilh;
        if(pilh == 'y'||pilh=='Y'){
            cout<<"..."<<endl;
        }else{
            break;
            }

    id++;
    idkedai[1].id = id;
    }

menu();

}

void kasir(){
    char iyo,loop='y',ck;
    while(loop=='y'){
        system("cls");

        cout << "\t\t\t===================================================" << endl;
        cout << "\t\t\tNo | Nama Sepatu | Jenis | Harga | Jumlah | Total |" << endl;
        cout << "\t\t\t===================================================" << endl;
        int iid,bara,jumlah;
        int ii=1,idd;
        idd = idkedai[1].id;
    for(int i=1;i<=idd;i++){

        cout <<"\t\t\t"<< i<<" | "<<sepatu[i].namabr<<"   |   "<<sepatu[i].jenis<<"   |   "<<sepatu[i].harga<<"   |  "<<sepatu[i].jumlah<<"   |  "<<sepatu[i].total<< endl;
        //cout << "no | nama sepatu | jenis | harga | jumlah | total |" << endl;
         //printf("%d | %s          | %s     | %d    | %d     | %d   |",i,sepatu[i].namabr,sepatu[i].jenis,sepatu[i].harga,sepatu[i].jumlah,sepatu[i].total);
        Sleep(100);
        ii++;
    }
    cout << "\t\t\t===================================================" << endl;

    cout << "\t\t\tMasukan ID Yang Akan Anda Beli : ";
    cin >> iid;
    cout << "\t\t\tMasukan Banyak Yang Akan Anda Beli : ";
    cin >> bara;
    jumlah = sepatu[iid].jumlah;
    if(iid > ii){
        cout << "\t\t\tID Tidak Valid";
        Sleep(200);
    }else{
        if(bara > sepatu[iid].jumlah){
        cout<<"\t\t\tStock Tidak Mencukupi"<<endl;
        }else{
            sepatu[iid].jumlah = jumlah - bara;
             cout<<"\t\t\tHutang Anda : "<<sepatu[iid].harga*bara << endl;
            cout<<"\t\t\tAnda Mau Bayar [y/t] :";
            cin>> iyo;
             if(iyo=='y'||iyo=='Y'){
        system("cls");
        cout<<"\t\t\tTerima Kasih, Semoga Menjadi Pelanggan Tetap Kami"<<endl;
        cout<<"\t\t\tAnda Mau Beli Lagi [y/t] ";
        cin >> ck;
        if(ck!='y'||ck!='y'){
            break;
        }


    }else{
        system("cls");
        cout<<"\t\t\t\t\t\t\t\t\tEnyahlah Anda Dari Sini "<<endl;
        break;
    }
        }

    }



}
menu();
}

void pwellcome(){
	ccolor(3);

	char welcome[50]="Selamat Datang";
	char welcome2[50]=" Di";
	char welcome3[50]=" app Penjualan";
	char welcome4[50]=" SEDERHANA";
	printf("\n\n\n\n\n\t\t\t");
	for(int wlc=0; wlc<strlen(welcome);wlc++){

		printf(" %c",welcome[wlc]);
		Sleep(100);
	}
	ccolor(3);
	printf("\n\n\t\t\t\t ");
	for(int wlc2=0; wlc2<strlen(welcome2) ;wlc2++){

		printf(" %c",welcome2[wlc2]);
		Sleep(100);
	}
	ccolor(3);
	printf("\n\n\n\t\t\t ");
	for(int wlc3=0; wlc3<strlen(welcome3) ;wlc3++){
		if(welcome3[wlc3]!='D'){

			printf(" %c",welcome3[wlc3]);
		}
		else{

			printf(" %c",welcome3[wlc3]);
		}

		Sleep(100);
	}
	ccolor(3);
	printf("\n\n\n\t\t\t\t ");
	for(int wlc3=0; wlc3<strlen(welcome4) ;wlc3++){
		if(welcome4[wlc3]!='A' && welcome4[wlc3]!='E'){

			printf(" %c",welcome4[wlc3]);
		}
		else{

			printf(" %c",welcome4[wlc3]);
		}
		Sleep(100);
	}
	ccolor(26);

}
void loadingbar(void){

	for (int i=15;i<=100;i+=5){

		cls();

		printf("\n\n\n\n\n\n\n\t\t\t\t");
		printf("%d %% Loading...\n\n\t\t",i);

		printf("");

		for (int j=0; j<i;j+=2){

			ccolor(12);
			printf("*");
			ccolor(26);

		}
		Sleep(100);
		if(i==90 || i==50 || i==96 || i==83){
			Sleep(100);
		}

	}

}

void ccolor(int clr){

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, clr);

//the above code displays colorful background. if you want colorful then you can remove the above comment but not the code, only comment//
}
void cls(){

	system("cls");

}




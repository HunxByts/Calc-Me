/*<< CODE BY HUNXBYTS
<< MAU RECODE ??? IZIN DULU LAH,  MINIMAL TAG AKUN GITHUB MIMIN YANG MENGARAH KE AKUN INI, LEBIH GAMPANG SI PAKE FORK
<< KALAU DI ATAS TIDAK DI IKUTI MAKA AKAN MENDAPATKAN DOSA KARENA MIMIN GAK IKHLAS
“Wahai orang-orang yang beriman! Janganlah kamu saling memakan harta sesamamu dengan jalan yang batil,” (QS. An Nisaa': 29). Rasulullah SAW juga melarang umatnya untuk mengambil hak orang lain tanpa izin.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int num1, num2, hasil;
    string Author;
    char user;

    Author = "\033[1;37m.:\033[1;32mAUTHOR \033[1;37m- \033[1;32mHUNXBYTS \033[1;37m- \033[1;32mCALCULATOR \033[1;37m- \033[1;32mCLI:.";

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    cout<<endl;
    cout<<" \033[1;32m▒█▀▀█ ░█▀▀█ ▒█░░░ ▒█▀▀█ ░░ ▒█▀▄▀█ ▒█▀▀▀"<<endl;
    cout<<" \033[1;37m▒█░░░ ▒█▄▄█ ▒█░░░ ▒█░░░ ▀▀ ▒█▒█▒█ ▒█▀▀▀"<<endl;
    cout<<" \033[1;32m▒█▄▄█ ▒█░▒█ ▒█▄▄█ ▒█▄▄█ ░░ ▒█░░▒█ ▒█▄▄▄"<<endl;
    cout<<endl;
    cout<<Author<<endl;
    cout<<endl;
    cout<<"\033[1;37m[\033[1;32m1\033[1;37m] \033[1;32mSum \033[1;37m(\033[1;32m+\033[1;37m)"<<endl;
    cout<<"\033[1;37m[\033[1;32m2\033[1;37m] \033[1;32mSubtraction \033[1;37m(\033[1;32m-\033[1;37m)"<<endl;
    cout<<"\033[1;37m[\033[1;32m3\033[1;37m] \033[1;32mMultiplication \033[1;37m(\033[1;32mX\033[1;37m)"<<endl;
    cout<<"\033[1;37m[\033[1;32m4\033[1;37m] \033[1;32mDistribution \033[1;37m(\033[1;32m:\033[1;37m)"<<endl;
    cout<<"\033[1;37m[\033[1;32m0\033[1;37m] \033[1;32mExit"<<endl;
    cout<<endl;

    /*User input memilih opsi kalkulator*/

    cout<<"\033[1;37m[ \033[1;32mUser chose \033[1;37m1 \033[1;32m- \033[1;37m0 ] \033[1;32m: \033[1;37m";cin>>user;
    cout<<endl;

    if(user == '1'){
        cout<<"\033[1;32mEnter First Number  : \033[1;37m";cin>>num1;
        cout<<"\033[1;32mEnter Second Number : \033[1;37m";cin>>num2;
        hasil = num1 + num2;
        cout<<"\033[1;32mResult sum : \033[1;37m"<<hasil<<endl;
    }else if(user == '2'){
        cout<<"\033[1;32mEnter First Number  : \033[1;37m";cin>>num1;
        cout<<"\033[1;32mEnter Second Number : \033[1;37m";cin>>num2;
        hasil = num1 - num2;
        cout<<"\033[1;32mResult subtraction : \033[1;37m"<<hasil<<endl;
    }else if(user == '3'){
        cout<<"\033[1;32mEnter First Number  : \033[1;37m";cin>>num1;
        cout<<"\033[1;32mEnter Second Number : \033[1;37m";cin>>num2;
        hasil = num1 * num2;
        cout<<"\033[1;32mResult multiplication : \033[1;37m"<<hasil<<endl;
    }else if(user == '4'){
        cout<<"\033[1;32mEnter First Number  : \033[1;37m";cin>>num1;
        cout<<"\033[1;32mEnter Second Number : \033[1;37m";cin>>num2;
        hasil = num1 / num2;
        cout<<"\033[1;32mResult distribution : \033[1;37m"<<hasil<<endl;
    }else if(user == '0'){
        cout<<"\033[1;37m[\033[1;32m+\033[1;37m] \033[1;37mThanks for using tools!"<<endl;
    }else if(user >= '4'){
        cout<<"\033[1;37m[\033[1;32m-\033[1;37m] \033[1;32mInvalid input, please try again."<<endl;
    }
    
    return 0;
}
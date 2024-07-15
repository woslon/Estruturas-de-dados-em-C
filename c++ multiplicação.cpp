#include <iostream>
#include <tchar.h>

using namespace std;

int main(){

_tsetlocale(LC_ALL,_T("portuguese"));

int  en01;
int  en02;
cout << "(SKYNET)";
cout << "\n";
cout << "***** Programa de multipicacao de numeros *****";
cout <<"\n";
cout <<"***** Digite um numero: ";
std::cin >> en01;
cout << "***** Digite outro numero: ";
std::cin >>en02;
int mult = en01*en02;
cout <<"***** o resultado da multiplicacao : "; cout << mult;
cout <<"\n";
cout <<"***** fim do programa *****";
cout << "\n";
system("pause");
return 'sucess';

}

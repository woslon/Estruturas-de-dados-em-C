#include <iostream>
#include <string>
#include <tchar.h>
#include <windows.h>

using namespace std;

int main(){
SetConsoleOutputCP(CP_UTF8);
_tsetlocale(LC_ALL,"portuguese");
bool bfezsol,bcarropronto,bsalariodepositado;
bool bacesso;
string senhadeacesso = "cmaismais";
string senhadigitada ;

cout <<"digite a senha de acesso: ";
cin >> senhadigitada;

if(senhadigitada == senhadeacesso)
{
 cout << "***acesso permitido***"; cout << "\n";
 bacesso = true;
 system("pause");
}
else{
cout <<"***acesso negado***"; cout << "\n";
    exit(0);
    system("pause");
}
 bfezsol = true;
 bcarropronto = false;
 bsalariodepositado = false;

if(bacesso = true);
{
  if(bfezsol || bcarropronto || bsalariodepositado)
  {
    cout << " vai dar praia !!!" << "\n";
  }
  else if (bsalariodepositado = true)
    {
    cout << "não vai dar praia !!!"; cout << "\n";
  }
}

system("pause");
}

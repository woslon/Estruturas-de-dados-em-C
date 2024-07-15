#include <iostream>


using namespace std;


int main(){

double maiornumero,numero01,numero02;

cout << "Digite o primeiro numero:";
cin >> numero01;
cout << "Digite o segundo numero:";
cin >> numero02;

maiornumero = (numero01 > numero02)? numero01 : numero02;
cout <<"o maior numero digitado :" << maiornumero <<"\n" ;

system("pause");
}

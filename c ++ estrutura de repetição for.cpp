#include <iostream>


using namespace std;



int main()

{
int soma = 0; //variavel acumuladora

for(int num = 0; num <= 100; num++){

  soma =soma + num ;
cout<< num << "\n";
}

cout<<" a soma dos numeros 1 a 100:" << soma <<"\n";
system("pause");



}

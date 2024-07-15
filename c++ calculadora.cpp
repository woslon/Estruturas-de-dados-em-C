#include <iostream>
using namespace std;
int main ()
{
int num1,num2;
char operacao;
cout << "Calculadora feita em c++ .... " << "\n";
cout << "Digite um numero:";
cin >> num1;
cout << "Digite um numero:";
cin >> num2;
cout << " Qual operacao deseja efetuar ? \n+ adicao \n- subtracao \n* multiplicacao \n/divisao ? \n ";
cout << "Digite sua opcao:";
cin >> operacao;
switch(operacao)
{
case '+':
     cout << "soma do num1 + num2 = " << num1 + num2; cout << "\n";
   break;
case '-':
    cout << "subtracao do num1 - num2 = " << num1 - num2; cout << "\n";
    break;
case '*':
    cout << "multiplicacao do num1 * num2 = " << num1 * num2; cout << "\n";
    break;
case '/':
    cout << "Divisao do num1 / num2 = " << num1 / num2; cout << "\n";
default:
   break;
}
system("pause");
}

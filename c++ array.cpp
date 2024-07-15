#include <iostream>


using namespace std;

// em c++ para imprimir um array com varios valores atribuidos utilizamos um laço de repetição
// pra imprimir apenas um valor utilizamos o numero do indice para imprimir apenas o valor

int main()

{

int array[10];

array[0] = 15;
//array[1] = 20;
array[2] = 30;
//array[3] = 40;
array[4] = 50;
//array[5] = 60;
array[6] = 70;
//array[7] = 80;
array[8] = 90;
//array[9] = 100;

for(int w = 0; w <= 9 ; w++){
  cout << array[w] <<"\n";
}

return 0;

}

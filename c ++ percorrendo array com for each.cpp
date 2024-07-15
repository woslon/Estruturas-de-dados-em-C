#include <iostream>

// conceito de for each o auto percorre todos os indices do vetor ou seja cada valor contido no vetor

using namespace std;

int main (){

int anos[] = {2000,2001,2002,2003,2004,2005};

for(auto anos:anos ){

std:: cout << anos << endl;
}
}

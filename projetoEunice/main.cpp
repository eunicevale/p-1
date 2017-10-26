#include <stdio.h>
#include <iostream>
using std::cout;
using std:: cin;

int main(int argc, char **argv)
{
    int count;
    int var1;
    count =0;
    int valor,peso;
    
    //pos-incremento
    var1 = count++;
    cout << "o valor de var1 eh:" << var1 << '\n';
    cout << "o valor de count eh:" << var1 << '\n';
    cout << "\n\n";
    
    //pre-incremento
    var1 = ++count;
    cout << "o valor de var1 eh:" << var1 << '\n';
    cout << "o valor de count eh:" << var1 << '\n';
	
    cout  <<"entre com o valor de peso : \n ";
    cin >> peso;
    // operador ?:
    valor =(peso >= 100 ? - 1 : 10);
    
    cout << "foi atribuido " << valor << " a valor. \n";
    
    int peso_2, valor_2;
    cout << "\n\n Entre com o segundo peso: ";
    cin >> peso_2;
    
    // operador : ?
    valor_2 = (peso >= 100 && peso_2 <= 10 ? -10 : 1000);
    cout << "\n foi atribuido " << valor_2 << " a valor_2.\n";
    
    
   
    return 0;
}

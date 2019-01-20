#include <iostream>
#include<string>
using namespace std;

int main()
{
    cout << "Ingrese el numero" << endl;
    int numero;
    cin>>numero;

    int numero2=numero;

    string numeroBinario;
    string numeroOctal;
    string numeroHexa;

    while(numero2>0){
        numeroBinario= to_string(numero2%2)+numeroBinario;
        numero2= numero2/2;
    }
    cout<<"Binario: "+numeroBinario+"\n";

    numero2=numero;

    while(numero2>0){
       numeroOctal= to_string(numero2%8)+numeroOctal;
        numero2= numero2/8;
    }
    cout<<"Octal: "+numeroOctal+"\n";
    numero2=numero;
      while(numero2>0){
            switch(numero2%16){
        case 10 :
            numeroHexa= "A"+numeroHexa;
            break;

            case 11 :
            numeroHexa= "B"+numeroHexa;
            break;
            case 12 :
            numeroHexa= "C"+numeroHexa;
            break;
            case 13 :
            numeroHexa= "D"+numeroHexa;
            break;
            case 14 :
            numeroHexa= "E"+numeroHexa;
            break;
            case 15 :
            numeroHexa= "F"+numeroHexa;
            break;

            default:
                numeroHexa=to_string(numero2%16)+numeroHexa;
            }

        numero2= numero2/16;
    }
    cout<<"Hexadecimal: "+numeroHexa;

}

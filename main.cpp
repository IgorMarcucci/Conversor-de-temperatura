#include <iostream>
#include <iomanip>

using namespace std;

void escalaT(char tempEscolhida, double temperatura, double resp, char escala);

int main(){

    float temperatura, resp;
    char escala, tempEscolhida;

    cout << "CONVERSOR DE TEMPERATURA\n\n";

    cout << "-----------------MENU-----------------\n";
    cout << "Qual a escala de temperatura base?\n";
    cout << "C = Celsius\n";
    cout << "F = Fahrenheit\n";
    cout << "K = Kelvin\n";
    cin >> escala;

    cout << "--------------------------------------\n";
    cout << "Qual a temperatura?\n";
    cin >> temperatura;

    if(escala == 'C' | escala == 'c'){
        escalaT(tempEscolhida, temperatura, resp, escala);
    }else if (escala == 'F' | escala == 'f'){
        escalaT(tempEscolhida, temperatura, resp, escala);
    }else if (escala == 'K' | escala == 'k'){
        escalaT(tempEscolhida, temperatura, resp, escala);
    }

    cout << "Saindo...\n";
    return 0;
}

void escalaT(char tempEscolhida, double temperatura, double resp, char escala){
    cout << "--------------------------------------\n";
    cout << "Para qual escala deseja converter?\n";
    cout << "C = Celsius\n";
    cout << "F = Fahrenheit\n";
    cout << "K = Kelvin\n";
    cin >> tempEscolhida;

    cout << fixed << setprecision(2);
    if(escala == tempEscolhida){
        cout << "A temperatura inserida é igual a temperatura base...\n";
    } else if(escala == 'C' | escala == 'c' && tempEscolhida == 'K' | tempEscolhida == 'k'){
        resp = temperatura + 273;
        cout << "A temperatura é: " << resp << "K\n";
    } else if(escala == 'C' | escala == 'c' && tempEscolhida == 'F' | tempEscolhida == 'f') {
        resp = 1.8 * temperatura + 32;
        cout << "A temperatura é: " << resp << "°F\n";
    } else if(escala == 'F' | escala == 'f' && tempEscolhida == 'K' | tempEscolhida == 'k'){
        resp = (temperatura - 32) * 5/9 + 273;
        cout << "A temperatura é: " << resp << "K\n";
    } else if(escala == 'F' | escala == 'f' && tempEscolhida == 'C' | tempEscolhida == 'c') {
        resp = (temperatura - 32) / 1.8;
        cout << "A temperatura é: " << resp << "°C\n";
    } else if(escala == 'K' | escala == 'k' && tempEscolhida == 'F' | tempEscolhida == 'f'){
        resp = (temperatura - 273) * 1.8 + 32;
        cout << "A temperatura é: " << resp << "°F\n";
    } else if(escala == 'K' | escala == 'k' && tempEscolhida == 'C' | tempEscolhida == 'c') {
        resp = temperatura - 273;
        cout << "A temperatura é: " << resp << "°C\n";
    }

}
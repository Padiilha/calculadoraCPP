#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <locale.h>

using namespace std;
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int operacao;
	float n1, n2, soma, subtracao, multiplicacao, divisao;
	
	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite outro numero: ";
	cin >> n2;
	cout << "Agora, digite uma operacao (1 = adicao, 2 = subtracao, 3 = multiplicacao, 4 = divisao): ";
	cin >> operacao;
	switch (operacao){
		case 1:
			soma=n1+n2;
			cout << "A soma dos numeros informados e: " << soma;
		break;

		case 2:
    		subtracao=n1-n2;
			cout << "A diferenca dos numeros informados e: " << subtracao;
		break;
		
		case 3:
    		multiplicacao=n1*n2;
			cout << "O produto dos numeros informados e: " << multiplicacao;
		break;
		
		case 4:
    		divisao=n1/n2;
			cout << "O quociente dos numeros informados e: " << divisao;
		break;
	}
getch();
}

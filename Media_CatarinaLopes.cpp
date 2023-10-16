/* Catarina Lopes (2023.10.16)
Instruções: programa em c++ que peça ao utilizador 4 notas e que mostre as notas e a média das mesmas
*/

#include <iostream>
using namespace std;

int main(void){
	setlocale(LC_ALL, "Portuguese"); //acentos
	float nota1, nota2, nota3, nota4, media; //declara as variáveis nota 1 a nota 4 e média como variáveis float (decimais)
	cout << "Introduz a primeira nota: "; 
	cin >> nota1;
	cout << "Introduz a segunda nota: "; 
	cin >> nota2;
	cout << "Introduz a terceira nota: "; 
	cin >> nota3;
	cout << "Introduz a quarta nota: "; 
	cin >> nota4;
	
	media = (nota1+nota2+nota3+nota4)/4; //cálculo da média aritmética
	cout << endl;
	cout << "As tuas notas são: " << endl;
	cout << "Primeira nota = " << nota1 << endl;
	cout << "Segunda nota = " << nota2 << endl;
	cout << "Terceira nota = " << nota3 << endl;
	cout << "Quarta nota = " << nota4 << endl; 
	
	cout << endl;
	cout << "A tua média final é: " << media << "." << endl; 
	cout << endl;
	
	//média ponderda
	float peso1 = 0.5; //50%
	float peso2 = 0.1; //10%
	float peso3 = 0.1; //10%
	float peso4 = 0.3; //30%
	cout << "Média ponderada: 50% da primeira nota; 10% da segunda nota; 10% da terceira nota; 30% da quarta nota" << endl;
	float mediapond = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3 + nota4 * peso4) / (peso1 + peso2 + peso3 + peso4);
	cout << endl;
	cout << "A tua média final ponderada é: " << mediapond << "." << endl;
	
	system("Pause");
}

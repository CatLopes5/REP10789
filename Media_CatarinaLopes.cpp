/* Catarina Lopes (2023.10.16)
Instru��es: programa em c++ que pe�a ao utilizador 4 notas e que mostre as notas e a m�dia das mesmas
*/

#include <iostream>
using namespace std;

int main(void){
	setlocale(LC_ALL, "Portuguese"); //acentos
	float nota1, nota2, nota3, nota4, media; //declara as vari�veis nota 1 a nota 4 e m�dia como vari�veis float (decimais)
	cout << "Introduz a primeira nota: "; 
	cin >> nota1;
	cout << "Introduz a segunda nota: "; 
	cin >> nota2;
	cout << "Introduz a terceira nota: "; 
	cin >> nota3;
	cout << "Introduz a quarta nota: "; 
	cin >> nota4;
	
	media = (nota1+nota2+nota3+nota4)/4; //c�lculo da m�dia aritm�tica
	cout << endl;
	cout << "As tuas notas s�o: " << endl;
	cout << "Primeira nota = " << nota1 << endl;
	cout << "Segunda nota = " << nota2 << endl;
	cout << "Terceira nota = " << nota3 << endl;
	cout << "Quarta nota = " << nota4 << endl; 
	
	cout << endl;
	cout << "A tua m�dia final �: " << media << "." << endl; 
	
	system("Pause");
}

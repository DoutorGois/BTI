#include<iostream>

int main(){
	int numero;
	int contador_negativo=0;
	for (int i = 0; i < 5; i++) {
			//std::cout << "Digite um número inteiro: ";
			std::cin >> numero;
			if(numero <0)
				contador_negativo+=1;
	}
	//std::cout << "Tivemos ";
	std::cout << contador_negativo;
	//std::cout << " números negativos.";
	return 0;
}

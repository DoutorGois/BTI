#include<iostream>
#include<array>
int main(){
	const int N=20;

	std::array<float, N> numeros;
	float menor_numero;
	int menor_numero_id=0;

	std::cin >> numeros[0];
	menor_numero = numeros[0];

	for (int i = 0; i < N-1; i++) {
		std::cin>>numeros[i+1];
		if(numeros[i+1]<menor_numero){
			menor_numero=numeros[i+1];
			menor_numero_id=i+1;
		}
	}

	std::cout << menor_numero << std::endl << menor_numero_id;
//	std::cout << "-numero=" << menor_numero << "; id=" << menor_numero_id << std::endl;
//
//	for (int i = 0; i < N; i++) {
//		if(numeros[i]==menor_numero)
//			//std::cout<<"+numero=" << numeros[i] << "; id=" << i << std::endl;
//	}

}

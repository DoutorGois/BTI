#include <iostream>

unsigned long raise_to_power( int a, int b);

// int argc - Number of arguments
// char* argv[] - Array of arguments

int main( void ){
	int limite = -10;

	std::cout << "forneça um expoente limite na faixa [0;63]:";
	std::cin >> limite;


	if (limite <0 or limite > MAX_VAL){
		std::cerr << "Numero fora da faixa aceitável [0;63]. Abortando...\n";
		return -1;
	}

	for( auto i(0); i<limite; ++i)
		std::cout << ">>> 2 elevado a " << i << " = " << raise_to_power(2,i) << std::endl;
	
	return 0;
	
}

unsigned long raise_to_power( int a, int b){
	unsigned long acc(1);

	for( auto i(0); i<b;++i)
		acc *= a;
	
	return acc;
}


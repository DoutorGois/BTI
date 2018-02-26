#include<iostream>

int main(){
	int m,n;
	
	while( std::cin >> m >> n ){
		
		int acumulador=0;

		for (int i = 0; i < n; i++)
			acumulador+=m+i;
		
		std::cout << acumulador;
	}

	return 0;
}

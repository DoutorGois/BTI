#include <iostream>
#include <array>
#include <iterator>
#include <algorithm>

const int SIZE=20;

int main( void ){
	int vet[20];

	std:array<int, SIZE> a;
			
	a = 0;
	b = 1;

	for(auto i(0); i<SIZE; ++i){
		std::cin >> a[i];
	}

	for( auto & e : a )
		std::cin >> e;

	return 0;
}

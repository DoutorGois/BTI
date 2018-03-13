// Torres de hanoi
//
// Faça duas funções
// - Mover peça
// - Mover pilha
//
//

#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <array>

typedef int piece;
typedef std::array<piece> pile;
typedef std::array<pile> pileHolder;
typedef std::array<pileHolder> hanoi;

int main(){
	
	pile sortedPile = {1,2,3,4};

	for(auto &e : pile){
		std::cout << e << std::endl;
	}
	
	return 0;

}

#include <iostream>

int main(void){
	return 0;

}
int good_solve(int SIZE){
	// estrutura de dados
	std::count << ">>> forneca 5 elementos inteiros.\n";

	// contagem de negativos
	auto count_negative(0);

	// leitura dos dados
	for( auto i(0); i<SIZE; ++i){
		auto temp(0);

		std::cin >> temp;

		if(temp < 0) 
			count++;
	}

}
int bad_solve(){
	// estrutura de dados
	int v1,v2,v3,v4,v5;

	// leitura dos dados
	std::cout << ">>> Forneça 5 valores :";
	std::cin >> v1 >> v2 >> v3 >> v4 >> v5;

	// contagem de negativos
	auto count_negative_negative(0);

	if (v1<0)
		count_negative++;

	if (v2<0)
		count_negative++;

	if (v3<0)
		count_negative++;

	if (v4<0)
		count_negative++;

	if (v5<0)
		count_negative++;

	std::cout << ">>> # de negativos: " << count_negative << std::endl;


}

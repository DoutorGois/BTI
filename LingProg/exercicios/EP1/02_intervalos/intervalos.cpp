#include<iostream>

int main(){
	int valor;
//	std::cout << "Entre com valores inteiros (Ctrl+d p/ encerrar): " << std::endl;

	int intervalos[4][3] = {
		{0,25,0},
		{25,50,0},
		{50,75,0},
		{75,100,0},
	};
	
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 3; j++) {
//			std::cout << intervalos[i][j] << ",";
//		}
//		std::cout << std::endl;
//	}

	
	while(std::cin >> valor){
		for (int i = 0; i < 4 ; i++) 
			if(i<3 && valor>=intervalos[i][0] && valor<intervalos[i][1])
				intervalos[i][2] += 1;
			else
				if(i==3 && valor>=intervalos[i][0] && valor<=intervalos[i][1])
					intervalos[i][2] += 1;
	}


//	for (int i = 0; i < 4; i++) {
//		std::cout << intervalos[i][2] << " números dentro de [" << intervalos[i][0] << "," << intervalos[i][1]; 
//		if (i==3)				
//			std::cout << "]" << std::endl;
//		else
//			std::cout << ")" << std::endl;
//	}
	
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 3; j++) {
//			std::cout << intervalos[i][j] << ",";
//		}
//		std::cout << std::endl;
//	}
	
	for (int i = 0; i < 4; i++) {
		std::cout << intervalos[i][2]<<std::endl;
	}

	return 0;
}

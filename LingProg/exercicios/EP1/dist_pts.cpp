#include<iostream>
#include<math.h>
//const int N=2;
//const int r=2;
//
//
//int* vetor = (int*) calloc(N*r,sizeof(int));
//
//for (int i = 0; i < N; i++) {
//	std::cout << "P" << i << "(";
//	for (int j = 0; j < r; j++) {	
//		std::cin << P
//	}
//}
int main(){
	int xp1, xp2, yp1, yp2;

	std::cout << "\n\n-reading-\n";
	std::cout<<"P1=(\n";
	std::cin>>xp1;
	std::cin>>yp1;
	std::cout<<");\n\n";

	std::cout<<"P2=(\n";
	std::cin>>xp2;
	std::cin>>yp2;
	std::cout<<");\n\n";
	

	std::cout << "\n-display-\n";

	std::cout << "P1=(" << xp1 << "," << yp1 << ");\n";
	std::cout << "P2=(" << xp2 << "," << yp2 << ");\n";
	std::cout << "d(P1,P2)=(" << sqrt(pow(xp2-xp1,2)+pow(yp2-xp1,2.0)) << ");\n";

	
	std::cout << "\n-fim-\n";
	return 0;
}

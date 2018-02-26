#include<iostream>
#include<array>

const int N=20;


std::array<int,N> A;

int main(){

	for (int i = 0; i < N; i++) {
			std::cin>>A[i];
	}

	for (int i = 0; i < N; i++) {
		std::cout<<A[i]<<", ";
	}

	std::cout<<std::endl;
	int temp;
	for (int i = 0; i < N/2	; i++) {
			temp=A[i];
			A[i]=A[N-i-1];
			A[N-i-1]=temp;
	}

	std::cout<<std::endl;

	for (int i = 0; i < N; i++) {
			std::cout<<A[i]<<", ";
	}


	return 0;
}

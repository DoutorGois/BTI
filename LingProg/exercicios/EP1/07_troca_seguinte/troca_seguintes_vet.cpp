#include<iostream>
#include<array>

const int N=20;
std::array<int,N> B;

int main(){
	for (int i = 0; i < N; i++) {
		std::cin>>B[i];
	}

	for (int i = 0; i < N; i++) {
		std::cout<<B[i]<<",";
	}

	std::cout<<std::endl;
	int temp,id;
	bool flag=false;

	for (int i = 0; i < N-1; i++) {
		if(B[i]%2==1 && !flag){
			id=i;
			flag=true;
		}else
			if(B[i]%2==0 && flag){
				temp=B[id];
				B[id]=B[i];
				B[i]=temp;
				flag=false;
			}
	}

	for (int i = 0; i < N; i++) {
		std::cout<<B[i]<<",";
	}

	return 0;
}

#include<iostream>

int main(){
	
	int n,a=1,b=1,c=a+b;
	std::cin >> n;
	std::cout<<a<<" "<<b;
	while ((a+b)<n){
		std::cout<<" ";
		c = a+b;
		a = b;
		b = c;

		std::cout << c; 
	}

	return 0;
}

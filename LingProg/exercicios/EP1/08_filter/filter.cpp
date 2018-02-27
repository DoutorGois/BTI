#include<iostream>
int* filter(int* first, int* last){
	
	int nof_valid = 0;

	for(int* i=first; i<last; i++){
		if(*i > 0){
			*(first+nof_valid) = *i;
			nof_valid += 1;
		}
	}

	int* new_last=first+nof_valid;

	return new_last;
}

int display(int* first, int*last){
	std::cout << "-------\n\n";
	int valor=0;
	for(int* i=first; i!=last; i++)
		std::cout << valor++ <<"="<< *(i) <<"@" << i << std::endl;
	return 0;
}

int main(){
	const int N=5;

	int v[N];
	v[0] =-1;
	v[1] = 0;
	v[2] = 3;
	v[3] = 100;
	v[4] = 20;

	display(v,v+N);	

	int* new_end=filter(v,v+N);

	display(v,new_end);
	
	return 0;
}

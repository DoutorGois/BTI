#include<iostream>
#include<vector>

int filter(int vetor,int first,int last){
	
	return vetor+first+last;
}

int main(){
	std::vector<int> vetor = {16, 2, 77, 40, 12071};

	int* pinit = vetor.begin();
	int* pend  = vetor.end();

	pinit +=1;
	pend  -=1;

	for(int* i=pinit; i!=pend; ++i){
		std::cout<<(*i)<<std::endl;
	}
	/*
	int nof_valid=0;
	for(int value : vetor){
		if(value>0)
			nof_valid+=1;
	*/
	
	//	std::cout << n << '\n';

	return 0;
	
}

// reference: https://www.codeguru.com/cpp/cpp/cpp_mfc/stl/article.php/c4027/C-Tutorial-A-Beginners-Guide-to-stdvector-Part-1.htm

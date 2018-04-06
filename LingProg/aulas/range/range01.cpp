#include<iostream>
#include<iterator>
#include<string>

void vdisp(int*, int*);
void qbegin(int,std::string);
void qend();
void negate ( int *, int *);
const int * min ( const int *, const int *);
void reverse ( int *, int *);
void scalar_multiplication ( int *, int *, int);
int dot_product ( const int *, const int *, const int *);
int * copy ( const int *, const int *, int *);
int * unique ( int *, int *);
int * sort_marbles ( int *, int *);
void partition ( int *, int *, int *);
void rotate ( int *, int *, int *);


// Questions Toolbox
// Display the begin of the question
void qbegin(int q,std::string qstr){
	std::cout << "++++++++++++++++++++++++++++++"
			  << std::endl
			  << "Question " << q << " = " << qstr
			  << std::endl;
}

// Display the end of the question
void qend(){
	std::cout << "------------------------------"
			  << std::endl;
}

// Display all elements of a certain vector interval along with its position, memory address and value;
void vdisp(int*first, int*last){
	std::cout<<"Vector from "<< first << " to " << last<< std::endl;
	int cont = 1;
	while(first<last)
		std::cout << "i = " << cont++ << " Mem " << first << " contains " << *first++<<std::endl;
	std::cout<< "."<<std::endl;
}

// Call all questions
int main(){

	if(false){
		// ++++++++++++++++++++++++++++++++
		// Negate a vector
		// Question 1
		qbegin(1,"Negate a vector");
		// Declare the vector
		int Vet[]    = { 1, 2,-3,-4, 5,-6};
		// Display the vector
		vdisp( std::begin(Vet)   , std::end(Vet));
		// Negate the vector
		negate( std::begin(Vet) , std::end(Vet));
		// Display negated vector
		vdisp( std::begin(Vet) , std::end(Vet));
		// Fim da questão
		qend();
		// --------------------------------
	}

	if(false){
		// ++++++++++++++++++++++++++++++++
		// Negate a vector
		// Question 3
		qbegin(3,"Reversing a vector");
		// Declare the vector
		int vet3[]    = {1,2,3,4,5,6,7,8};
		// Display the vector
		vdisp( std::begin(vet3)   , std::end(vet3));
		// Negate the vector
		reverse( std::begin(vet3) , std::end(vet3));
		// Display negated vector
		vdisp( std::begin(vet3) , std::end(vet3));
		// Fim da questão
		qend();
		// --------------------------------
	}

	if(true){
		// ++++++++++++++++++++++++++++++++
		// Rotating a vector
		// Question 10
		qbegin(10,"Partition a vector");
		// Declare the vector
		int vet10[]    = {3,7,5,0,1,9,3,4,-2,6,7,8};
		// Display the vector
		vdisp(std::begin(vet10)  , std::end(vet10));
		// Negate the vector
		partition(std::begin(vet10) , std::begin(vet10), std::begin(vet10));
		// Display negated vector
		vdisp(std::begin(vet10)  , std::end(vet10));
		// Fim da questão
		qend();
		// --------------------------------
	}

	if(false){
		// ++++++++++++++++++++++++++++++++
		// Rotating a vector
		// Question 11
		qbegin(11,"Rotating a vector");
		// Declare the vector
		int vet11[]    = {0,1,2,3,4,5,6,7,8};
		// Display the vector
		vdisp(std::begin(vet11)  , std::end(vet11));
		// Negate the vector
		rotate(std::begin(vet11) , std::begin(vet11)+5, std::end(vet11));
		// Display negated vector
		vdisp(std::begin(vet11)  , std::end(vet11));
		// Fim da questão
		qend();
		// --------------------------------
	}

	return 0;

}
void negate (int* first ,int* last){
	std::cout << "Negating from " << first << " to " << last << std::endl;
	while(first<last)
		if (*(first++)<0)
			*(first-1)*=-1;
	std::cout << "." <<std::endl;
}

const int * min (const int* first, const int* last ){
	const int * minimum=first++; 
	while(first<last)
		if((*first++)<(*minimum))
			minimum=first; 
	return minimum;
}

void vswap(int* a, int* b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

void reverse(int* first ,int* last){
	for(int i=0;i<std::distance(first,last)/2;i++)
		vswap(first+i,last-1-i);
}

void scalar_multiplication ( int * first , int * last , int scalar ){
	while(first<last)
		*first++*=scalar;
}

int dot_product ( const int * a_first , const int * a_last , const int * b_first ){
	if(firstA<(lastA-1))
		return (*firstA)*(*firstB)+dot_product(firstA++,lastA,firstB++);
	else
		return (*firstA)*(*firstB);
}

int * compact(int * first, int * last){
	int*slow=first;

	for(int *fast=first; fast<last; fast++)
		if(*(fast)>0)
			*slow++=*fast;

	return slow;
}

int * copy ( const int * first , const int * last , int * d_first ){
	while(first<last)
		*d_first++=*first++;
}

int * unique ( int * first , int * last ){
	
/*	int *n_last = first, fast=first, faster=first;
	while(fast<last){
		for(int *faster=(first+1); faster<(n_last+1); faster++){
			if( true  ){

			}
		}
	}
*/}
}

// Question #9
int * sort_marbles ( int * first , int * last ){
	int * white = first;
	for(int*fast=first;fast<last;fast++)
		if(*fast==1){
			std::swap(first,fast);
			fast++;
		}

	return white;
}


// Question #10
void partition ( int * first , int * last , int * pivot ){
	
	const int n = std::distance(first,last);

	int tmp_[n];
	int lcont=0;
	int pval = *pivot;

	for(int i=0; i<n ; i++)
		if(*(first+i)<*pivot)
			tmp_[lcont++] = *(first+i);
	
	tmp_[++lcont]=pval;

	for(int i=0; i<n ; i++)
		if(*(first+i)>*pivot)
			tmp_[lcont++] = *(first+i);
	
	for(int i=0; i<n; i++)
		*(first+i) = *(tmp_+i);
}

// Question #11
void rotate (int* first, int* n_first, int* last){
	
	const int n = std::distance(first,last);

    const int nn = std::distance(first,n_first);

	int tmp_[n];

	for(int i=0; i<nn ; i++)
		*(tmp_+i) = *(n_first+i);

	for(int i=0; i<n; i++)
		*(tmp_+nn+i-1) = *(first+i);

	for(int i=0; i<n; i++)
		*(first+i) = *(tmp_+i);
}


int * create_array (size_t sz=0){
	int * pt = new int[ sz ];
	return pt;
}



/*  std::cout<<"Rotating from " << first << " to " << last << std::endl;
	int aux1;
	int aux2;
	int x    = std::distance(first,n_first);
	int p    = std::distance(n_first,last);
	int n    = std::distance(first,last);
	int i    = 0;
	int j    = n-x;
	while( (first+i) != n_first ){
		aux1       = *(first+i);
		*(first+i) = aux1;
		aux2       = *(first+j);
		*(first+j) = aux2;
	}*/
//	std::cout<<"Vec size = " << x << " pivot pos = " << p << std::endl;
//	std::cout << std::endl << std::distance(first,last) << std::endl;
//	while((first+i)!=n_first){}
/*	if (first != n_first){
		aux1       = *(first+b);
		*(first+b) = *n_first;
		aux2       = *(first+a)
		*(first+a) = aux1;
		for(int i=0; (first+i)<=last; i++){							
		}*/
//		for(int i=0;i<(last-first);i++){
//			std::cout << i << " - " << n_first << std::endl;
//			if((n_first+i)<last){}}		

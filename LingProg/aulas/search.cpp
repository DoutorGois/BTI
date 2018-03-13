const int * lsearch(const int* first, const int* last, int value){
	for (int* fast = first; fast < last; fast++) {
		if(*(fast) == value)
			return fast;
	}
	return last;
}

const int * middle( int* A,  int* B){
	return (A+B)/2;
}

const int * bsearch(const int* first, const int* last, int value){
	int *half = middle(first,last);

	if(*(half)==value)
		return half;
	if(*(half)<value)
		return bsearch(first,half-1)
	if(*(half)>value)
		return bsearch(half+1,last)
	
	return last;
}

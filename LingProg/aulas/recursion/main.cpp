#include<iostream>
#include<math.h>

int cannonballs(int);
int raiseToPower(int);

int main(){

	int c3 = cannonballs(3);

	std::cout << "CanBall(3) = " << c3 << std::endl;

	return 0;
}


int calcPower(int n, int k){
	if (k==0)
		return 1;
	else
		return n * calcPower(n,k-1)
}

int calcLog(int n, int k){
	if (k==0)
		return 1;
	else
		return n * calcPower(n,k-1)
}


int cannonballs(int h){
	if(h==1)
		return 1;
	else
		return raiseToPower(h,2)+cannonballs(h-1);
}


int g10pm(int n){
	return math::floor(n/math::pow(math::floor(math::log10(n)),10));
}

int digitSum(int n){
	if (math::log10(n)<0)
		return n-math::log10(n);
	else
		return -math::log10(n);
}

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *A,int B,int C);

void findRowSum(const double *A,double *B,int C,int D);

void showData(double *A,int B,int C);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[N] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findRowSum(dPtr,result,N,M);
	showData(result,N,1);
}

//Write definition of randData(), showData() and findRowSum()
void randData(double *A,int B,int C){
	
	for(int i=0;i<(B*C);i++){
		 *(A+i)=(rand()%101)/100.00 ;
		
	}
}

void findRowSum(const double *A,double *B,int C,int D){
	double  sum = 0 ;
	int Z = 0 ;
	for(int i=0;i<C;i++){
		for(int j=0;j<D;j++){
			sum += *(A+Z) ;
			Z++ ;
		}
		*(B+i) = sum ;
		sum = 0 ;

	}
}

void showData(double *A,int B,int C){
	int Z = 0 ;
	for(int i=0;i<B;i++){
		for(int j = 0;j<C;j++){
			cout << *(A+Z) << "\t";
			Z++ ;
		}
		cout << endl ;
	}
}

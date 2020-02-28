#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findColSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,result,N,M); 
	showData(result,1,M);
}

//Write definition of randData(), showData() and findColSum()
void randData(double *A,int B,int C){
	
	for(int i=0;i<(B*C);i++){
		 *(A+i)=(rand()%101)/100.00 ;
		
	}
}

void findColSum(const double *A,double *B,int C,int D){
	double  sum = 0  ;
	int Z = 0 ;
	for(int i=0 ;i<C;i++){
		sum = 0 ;
		for(int j=0 ;j<D;j++){
			sum += *(A+i+j*C) ;
		}
		*(B+i)=sum ;
		
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


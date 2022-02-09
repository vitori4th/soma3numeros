#include<stdio.h>
#include<stdlib.h>

void printSol(int x[], int n, int C){
	int i;
	for(i=0;i<n;i++)
		printf("%d+",x[i]);
		printf("%d = %d\n",x[n],C);
}
void solution(int n, int C,int x[], int nOri, int COri){
	if(n==0){
		x[0]=C;
		printSol(x,nOri,COri);
	}else{
		int i;
		for(i=0;i<=C;i++){
			x[n]=i;
			
			solution(n-1,C-x[n],x,nOri,COri);
		}
	}
}
int main(int argc, char *argv[]){
//	if(argc!=3){
//		printf("Execute informando n(numero de vari e C(constante int. positiva)\n)");
//		return 0;
//	}
//	int n=atoi(argv[1]);
//	int C=atoi(argv[2]);
	int C=2;
	int n=2;
	int *x=malloc((n+1)*sizeof(int));
	solution(n,C,x,n,C);
	free(x);
}

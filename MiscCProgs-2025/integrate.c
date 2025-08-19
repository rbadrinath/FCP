#include <math.h>
#include <stdio.h>
float gf(float x){
	return exp(-x*x);
}
int main(){
	float a,b;
	scanf("%f%f",&a,&b);
	int steps=1000;
	float h=(b-a)/steps;
	float sum=0;
	float x=a;
	for(int i=0;i<steps;i++){
		sum+=h*gf(x);
		x+=h;
	}
	printf("%f\n",sum);
	printf("sqrt(pi)=%f\n",sqrt(M_PI));
}

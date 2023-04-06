#include <stdio.h>
int main(){
	int op=0;
	float d1=0,d2=0,rd=0,s1=0,s2=0,r=0;
	printf("calculadora: 1.+ 2.- 3.* 4./ \n");
	printf("ingrese opción\n");
	scanf("%d",&op);
	switch (op){
		
	case 1:
		printf("ingrese el primer numero: ");
		scanf("%f",&s1);
		printf("ingrese el segundo numero: ");
		scanf("%f",&s2);
		r=s1+s2;
		printf("el resultado es: %f\n",r);
		break;
	case 2:
		printf("ingrese el primer numero: ");
		scanf("%f",&s1);
		printf("ingrese el segundo numero: ");
		scanf("%f",&s2);
		r=s1-s2;
		printf("el resultado es: %f\n",r);
		break;
	case 3:
		printf("ingrese el primer numero: ");
		scanf("%f",&s1);
		printf("ingrese el segundo numero: ");
		scanf("%f",&s2);
		r=s1*s2;
		printf("el resultado es: %f\n",r);
		break;
	case 4:
		printf("ingrese el primer numero: ");
		scanf("%f",&d1);
		printf("$vt_handoff ingrese el segundo numero: ");
		scanf("%f",&d2);
		rd=d1/d2;
		printf("el resultado es: %f\n",rd);
		break;
	}
		
	return 0;
}

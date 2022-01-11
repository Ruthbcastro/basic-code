	
	#include <stdio.h>
	
	void introducirDatos(float *precio1, float *precio2, float *precio3);
	float calcularMedia(float precio1, float precio2, float precio3);
	
	int main(){
		float p1, p2, p3;
		introducirDatos(&p1, &p2, &p3);
		float M = calcularMedia(p1, p2, p3);
		printf("El precio medio del producto es de: %f", M);
		return 0;
	}
	
	void introducirDatos(float *precio1, float *precio2, float *precio3){
		printf("Introduce el precio del producto en el establecimiento 1\n");
		scanf("%f", &*precio1);
		printf("Introduce el precio del producto en el establecimiento 2\n");
		scanf("%f", &*precio2);
		printf("Introduce el precio del producto en el establecimiento 3\n");
		scanf("%f", &*precio3);
	}
	
	float calcularMedia(float precio1, float precio2, float precio3){
		float media = media = (precio1 + precio2 + precio3)/3;
		return media;
	}

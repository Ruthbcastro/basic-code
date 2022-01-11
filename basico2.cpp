	
	#include <stdio.h>
	#include <math.h>
	#define pi 3.141593
	
	void introducirDatos(float *diametro, float *altura);
	float calcularVolumen(float diametro, float altura);
	
	int main(){
		float d,h;
		introducirDatos(&d, &h);
		float V = calcularVolumen(d,h);
		printf("El volumen del cilindro con los datos ingresados es de: %f", V, " metros cubicos");
		return 0;
	}
	
	void introducirDatos(float *diametro, float *altura){
		printf("Introduce el dimetro del cilindro en metros\n");
		scanf("%f", &*diametro);
		printf("Introduce la altura del cilindro en metros\n");
		scanf("%f", &*altura);
	}
	
	float calcularVolumen(float diametro, float altura){
		float volumen;
		float radio = diametro/2;
		volumen = (radio * radio) * (altura) * (pi);
		return volumen;
	}

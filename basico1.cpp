	
	#include <stdio.h>
	
	void def_vehiculos(int *vehiculo_turismo, int *vehiculo_terreno);
	void capacidad(float *capacidad_turismo, float *capacidad_terreno);
	float calculo_combustible(int vehiculo_turismo, float capacidad_turismo, int vehiculo_terreno, float capacidad_terreno);
	
	int main(){
		int v_turismo;
		int v_terreno;
		float c_turismo;
		float c_terreno;
		float calculoCombustible;
		
		def_vehiculos(&v_turismo, &v_terreno);
		
		capacidad(&c_turismo, &c_terreno);
	
		calculoCombustible = calculo_combustible(v_turismo, c_turismo, v_terreno, c_terreno);
		printf("El calculo total del combustible es de: %f", calculoCombustible);
		
		return 0;
	}
	
	void def_vehiculos(int *vehiculo_turismo, int *vehiculo_terreno){
		printf("Introduzca los vehiculos de turismo en existencia\n");
		scanf("%d", &*vehiculo_turismo);
		printf("Introduzca los vehiculos de todo terreno en existencia\n");
		scanf("%d", &*vehiculo_terreno);
	}
	
	void capacidad(float *capacidad_turismo, float *capacidad_terreno){
		printf("Introduzca los valores de capacidad de los depositos de los vehiculos de turismo\n");
		scanf("%f", &*capacidad_turismo);
		printf("Introduzca los valores de capacidad de los depositos de los vehiculos de todo terreno\n");
		scanf("%f", &*capacidad_terreno);
	}
	
	float calculo_combustible(int vehiculo_turismo, float capacidad_turismo, int vehiculo_terreno, float capacidad_terreno){
		float calculo = ((vehiculo_turismo * capacidad_turismo) + (vehiculo_terreno * capacidad_terreno));
		return calculo;
	}


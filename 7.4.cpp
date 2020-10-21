#include <stdio.h>
#include <math.h>
int main() {
	
	float V1, V2, S, T, S1, S2;
	scanf("%f", &V1); 
	scanf("%f", &V2);
	scanf("%f", &S);
	scanf("%f", &T); 
	
	S1 = V1 * T + V2 * T + S;
	S2 = sqrt(pow(V1 * T,2) + pow(V2 * T,2 )); 

	printf("The distance between moving cars is different = %f Km\nDistance between cars moving perpendicular = %f Km", S1, S2); 
	return 0;
}

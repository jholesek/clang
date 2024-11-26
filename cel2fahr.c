#include <stdio.h>

int main() {

	/* conv cels to fahr table
	   for cel=0,20,...300 */

	int lower, upper, step;
	float cel, fahr;

	lower=0;
	upper=300;
	step=20;

	cel=lower;

	printf("%3s %6s\n","CEL","FAHR");

	while(cel <= upper) {
		fahr=(cel/(5.0/9.0))+32;
		printf("%3.0f %6.1f\n",cel, fahr);
		cel=cel+step;
	}
}

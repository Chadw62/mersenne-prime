#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	int count;
	int primes [50];
	clock_t t;
	int temp;

	for(int i = 0; i < 20 ;i++){
		printf("1st loop");
		t = clock();
		temp = pow(2,count) - 1;
		for(int j =0; j < sizeof(primes); j++){
			if(temp % primes[j] == 0){
                break;
            }
			t = clock() - t;
			double time = ((double)t)/CLOCKS_PER_SEC;
            primes[count++] = temp;
            printf("%f is a mersenne prime! %f seconds to execute", temp, time);
		}
	}
	return 0;
}
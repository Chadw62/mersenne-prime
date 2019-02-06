#include <stdio.h>
#include <math.h>

int main()
{
	int count;
	int primes [50];

	for(int i = 0;i < 20 ;i++){

		int temp = pow(2,count) - 1;
		for(int j =0; j < sizeof(primes); j++){
			if(temp % primes[j] == 0){
                break;
            }
            primes[count++] = temp;
            printf(temp + " is a M prime ");
		}
	}
	return 0;
}
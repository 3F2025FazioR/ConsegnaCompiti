#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
const int n=20, maxVectorValue=1000;

int v[n];

int main() {
	
	for(int i=0; i<sizeof(v)/sizeof(v[0]); i++) {
	v[i]=rand() % maxVectorValue + 1;
    }
	printf("origin");
    for (int i = 0; i < sizeof(v)/sizeof(v[0]); i++) {
        printf(" %d," , v[i]);
    }
    
	bool control = true; 
    while (control) {
        control = false; 
        for (int i = 0; i < n-1 ; i++) {
            if (v[i] > v[i+1]) {
                int temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                control = true;
            }
        }
    }
    printf("\nordinato");
    for (int i = 0; i < sizeof(v)/sizeof(v[0]); i++) {
        printf(" %d,", v[i]);
    }
    return 0;
}
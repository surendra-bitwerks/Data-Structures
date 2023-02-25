#include <stdio.h>

void
swap(int * num1, int * num2) {
	int temp;
	temp = *num1;
	*num1= * num2;
	*num2 = temp;
}

void
find_min(void) {

}

int
main(void)
{
	int rand_arr[] = { 20, 40, 60, 10, 80, 70, 100, 50, 30, 90 };
	//int rand_arr[] = {10, 30, 20};

	int i = 0,j = 0, n= sizeof(rand_arr)/sizeof(int);
	int min_index = 0;
	int min_num = rand_arr[0];
	printf("rand_arr before sort:\n");
	for(i=0; i<n; ++i) {
		printf("%d ", rand_arr[i]);
	}
	putchar('\n');
	for(i=0; i<n-1; ++i) {
		min_num = rand_arr[i];
		min_index = i;
		for (j=i; j<n-1; ++j) {
			if(min_num > rand_arr[j+1]) {
				min_num = rand_arr[j+1];
				min_index = j+1;
			}
		}
		if(i != min_index)
			swap(&rand_arr[i], &rand_arr[min_index]);
	}
	printf("rand_arr after sort:\n");
	for(i=0; i<n; ++i) {
		printf("%d ", rand_arr[i]);
	}
	putchar('\n');

	return 0;
}

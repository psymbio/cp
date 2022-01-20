#include <stdio.h>
#include <stdlib.h>

int to_pow_of(int base, int exp) {
	int output = 1;
	for (int i = exp; i != 0; i--) {
		output *= base;
	}
	// printf("%d\n", output);
	return output;
}

int binary_to_int(int array[12]) {
	int output = 0;
	int j = 0;
	for (int i = 11; i >= 0; i--) {
		output += array[i] * to_pow_of(2, j);
		// printf("%d * 2^%d + ", array[i], j);
		j++;
	}
	// printf("\n");
	return output;
}

typedef struct zeros_ones {
	int zeros[12], ones[12];
} zeros_ones;

struct zeros_ones initialize() {
	struct zeros_ones zeros_ones_initialized;
	for(int i = 0; i < 12; i++) {
                zeros_ones_initialized.zeros[i] = 0;
                zeros_ones_initialized.ones[i] = 0;
        }
	return zeros_ones_initialized;
}

struct zeros_ones count_zeros_ones() {
	struct zeros_ones zeros_ones_store = initialize();
	FILE *fp;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	fp = fopen("input.txt", "r");
	while((read = getline(&line, &len, fp)) != -1) {
                for (int i = 0; i < 12; i++) {
                        if(line[i] == '0')
                                zeros_ones_store.zeros[i]++;
                        else
                                zeros_ones_store.ones[i]++;
                }               
       	}
	fclose(fp);
	if (line) {
		free(line);
	}
	return zeros_ones_store;
}

int main() {
	// do it for every bit
	char considered = '0';
	for (int i = 0; i < 12; i++) {
		zeros_ones zeros_ones_store = count_zeros_ones();
		if (zeros_ones_store.zeros[i] > zeros_ones_store.ones[i]) {
			considered = '1';
		} else {
			considered = '0';
		}

		// loop through the file and delete the strings which don't have the considered value at the i'th pos
		// instead of deleting write the good line to another file
		FILE *fp, *fp1, *fp2;
		char *line = NULL;
		size_t len = 0;
		ssize_t read;
		fp = fopen("input.txt", "r");

		// clear out file
		fp1 = fopen("input_store.txt", "w");
		fclose(fp1);
		fp2 = fopen("input_store.txt", "a");
		while((read = getline(&line, &len, fp)) != -1) {
			if(line[i] == considered) {
				fputs(line, fp2);
				printf("%s", line);
			}
		}
		fclose(fp);
		fclose(fp2);
		remove("input.txt");
		rename("input_store.txt", "input.txt");
		if (line) {
			free(line);
		}

		printf("\n");

	}
	return 0;
}

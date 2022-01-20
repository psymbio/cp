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

int main() {
	FILE *fp;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	int array[12] = {0};
	int gamma_binary[12] = {0};
	int epsilon_binary[12] = {0};
	fp = fopen("input.txt", "r");
	while((read = getline(&line, &len, fp)) != -1) {
		// or strlen(line)
		for (int i = 0; i < 12; i++) {
			// printf("%c", line[i]);
			if(line[i] == '0')
				array[i] -= 1;
			else
				array[i] += 1;
		}
		// printf("\n");
	}
	for (int i = 0; i < 12; i++) {
		if (array[i] < 0) {
			gamma_binary[i] = 0;
			epsilon_binary[i] = 1;
		} else {
			gamma_binary[i] = 1;
			epsilon_binary[i] = 0;
		}
		// printf("%d", gamma_binary[i]);
	}
	printf("\n");
	fclose(fp);
	if (line) {
		free(line);
	}
	int gamma_rate = binary_to_int(gamma_binary), epsilon_rate = binary_to_int(epsilon_binary);
	int power_consumption = epsilon_rate * gamma_rate;
	printf("%d", power_consumption);
	return 0;
}

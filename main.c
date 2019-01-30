#include <stdio.h>
#include <assert.h>

int sum(int num1, int num2);

int main() {
	int total = 0;
	total = sum(4, 5);
	assert(9 == total);
}


int sum(int num1, int num2) {
	return 0;
}

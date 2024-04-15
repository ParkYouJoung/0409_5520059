#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_STACK_SIZE 5

typedef int element;
element stack[MAX_STACK_SIZE];
int top = -1;

// ���� ���� ���� �Լ�

int is_empty() {

	return(top == -1);
}

//��ȭ ���� ���� �Լ�

int is_full() {

	return(top == MAX_STACK_SIZE - 1);
}

//���� �Լ�

void push(element item) {

	if (is_full()) {
		fprintf(stderr, "Overflow\n");
	}
	else {
		stack[++top] = item;
	}
}

//���� �Լ�

element pop() {
	if (is_empty()) {
		fprintf(stderr, "Underflow\n");
		return  -1;
	}
	else {
		return stack[top--];

	}
}

//���� ��� �Լ�

print_stack() {

	if (is_empty()) {
		printf("Stack is empty\n");
	}
	else if (is_full()) {
		printf("Stack element : ");

		for (int i = 0; i <= top; i++) {
			printf("%d ", stack[i]);
		}

	}
	else {
		printf("Stack element : ");

		for (int i = 0; i <= top; i++) {

			printf("%d ", stack[i]);
		}
	}


}




int main(void) {
	srand(time(NULL));
	int rand_num = 0;
	for (int i = 0; i < 30; i++) {     // 30�� �ݺ�
		rand_num = rand() % 100 + 1;
		printf("Current rand_num : %d | ", rand_num);

		if (rand_num % 2 == 0) {
			printf("Even\n");   //���� ¦���϶�
			push(rand_num);
			printf("Push : %d\n", rand_num);
		}
		else {

			printf("Odd\n");    // ���� Ȧ���϶� 
			rand_num = pop();
			printf("Pop : %d\n", rand_num);
		}
		print_stack();
		printf("\n\n");

	}

}


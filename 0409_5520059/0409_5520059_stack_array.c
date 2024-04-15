#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_STACK_SIZE 5

typedef int element;
element stack[MAX_STACK_SIZE];
int top = -1;

// 공백 상태 검출 함수

int is_empty() {

	return(top == -1);
}

//포화 상태 검출 함수

int is_full() {

	return(top == MAX_STACK_SIZE - 1);
}

//삽입 함수

void push(element item) {

	if (is_full()) {
		fprintf(stderr, "Overflow\n");
	}
	else {
		stack[++top] = item;
	}
}

//삭제 함수

element pop() {
	if (is_empty()) {
		fprintf(stderr, "Underflow\n");
		return  -1;
	}
	else {
		return stack[top--];

	}
}

//스택 출력 함수

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
	for (int i = 0; i < 30; i++) {     // 30번 반복
		rand_num = rand() % 100 + 1;
		printf("Current rand_num : %d | ", rand_num);

		if (rand_num % 2 == 0) {
			printf("Even\n");   //난수 짝수일때
			push(rand_num);
			printf("Push : %d\n", rand_num);
		}
		else {

			printf("Odd\n");    // 난수 홀수일때 
			rand_num = pop();
			printf("Pop : %d\n", rand_num);
		}
		print_stack();
		printf("\n\n");

	}

}


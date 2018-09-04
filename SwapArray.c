#include <stdio.h>

void swap(int *px, int *py) {
	int *temp;
	temp = *px; //px�� ����Ű�� ���� temp�� ���� �����.
	*px = *py;
	*py = temp;

	printf("%d %d %d ", *px, *py, temp); //�׳� px, py�� ���� �Ǹ� px�� py�� �ּҰ��� ��µȴ�.
	printf("\n");
}


//�����迭 �ȿ� ���� ������ �ֱ�
void init(int x[][5], int len) {
	int i, j, a = 0;
	for (i = 0; i<len; i++) {
		for (j = 0; j < 5; j++) {
			x[i][j] = a;
			a++;
		}
	}
}

// ������ ������ ��� �Լ�
void print(int x[][5], int len) {
	int i, j;
	for (i = 0; i<len; i++) {
		for (j = 0; j<5; j++) {
			printf("%d ", x[i][j]);
		}
	}
	printf("\n");
	printf("\n");
}

// �������� ������ �������� �ٲٱ�
void swapArray(int a[][5], int len) {

	int half = len * 5 / 2;
	int *start;
	int *end;
	int i;
	start = &a[0][0];
	end = &a[len - 1][4];
	for (i = 0; i <= half; i++) {
		swap(start, end);
		start++;
		end--;
	}
	printf("\n");
}

int main() {
	int arr[3][5];
	init(arr, 3);  //0 ~ 14
	print(arr, 3);
	swapArray(arr, 3); //ù��°�� ������ ��°�� ������ ��°�� ���� ,,,����
	print(arr, 3);
	return 0;
}

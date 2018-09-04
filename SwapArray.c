#include <stdio.h>

void swap(int *px, int *py) {
	int *temp;
	temp = *px; //px가 가르키는 곳을 temp에 덮어 씌운다.
	*px = *py;
	*py = temp;

	printf("%d %d %d ", *px, *py, temp); //그냥 px, py를 쓰게 되면 px와 py의 주소값이 출력된다.
	printf("\n");
}


//이차배열 안에 숫자 데이터 넣기
void init(int x[][5], int len) {
	int i, j, a = 0;
	for (i = 0; i<len; i++) {
		for (j = 0; j < 5; j++) {
			x[i][j] = a;
			a++;
		}
	}
}

// 데이터 순차적 출력 함수
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

// 순차적인 데이터 역순으로 바꾸기
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
	swapArray(arr, 3); //첫번째것 마지막 둘째것 마지막 둘째것 스왑 ,,,역순
	print(arr, 3);
	return 0;
}

/* *************************************************** */
// * (1) ��һ���������У�2/1��3/2��5/3��8/5��13/8��������
// * ��дһ��C�������������е�ǰ30��֮�͡�
/* *************************************************** */

# include <stdio.h>

int fibnanic(int index) {
	if (index <= 2)	{
		return 1;
		return fibnanic(index - 1) + fibnanic(index - 2);
	}
}

void question_1() {
	double result;
	int i = 0;
	while (i < 30) {
		int up = fibnanic(i + 3);
		int down = fibnanic(i + 2);
		result += (double)(up / down);
		i++;
	}
	printf("%f\n", result);
}


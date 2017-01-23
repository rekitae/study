#include <iostream>

/*
매번 연속된 두개 인덱스 비교, 정한 기준값을 뒤로 넘겨가며 정렬하는 방식
*/

int main()
{
    int a[] = {23, 45, 64, 234, 21};
    int i, j, tmp;
    int size = sizeof(a) / sizeof(a[0]);

    for (i = 0; i < size - 1; i++)
    {
        for (j = 1; j < size - i; j++) // 두번째 배열에서 시작하고
        {
            if (a[j-1] > a[j]) // 이전값과 크기 비교
            {
                tmp = a[j-1];
                a[j-1] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;

}
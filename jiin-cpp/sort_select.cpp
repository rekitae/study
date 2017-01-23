#include <iostream>

/*
첫번째값부터 배열 전체를 돌며 하나씩 비교하여 제일 작은 값을 현재 익덱스 값과 바꿔준다.
*/
int main()
{
    int a[] = {5,23,67,12,3};
    int i, j, tmp;
    int size = sizeof(a) / sizeof(a[0]);

    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
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
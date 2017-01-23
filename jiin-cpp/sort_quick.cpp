#include <iostream>

void quick_sort(int number[], int left, int right);

int main()
{
    int arr[] = {9,4,5,1,6,8,2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    
    quick_sort(arr, 0, arr_size - 1);

    for (int i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void quick_sort(int number[], int left, int right)
{
    int pivot, l_hold, r_hold;
    l_hold = left;
    r_hold = right;
    pivot = number[left];

    while(left < right)
    {
        while((number[right] >= pivot) && (left < right))
        {
            right--;
        }
            

        if (left != right)
        {
            number[left] = number[right];
        }

        while((number[left] <= pivot) && (left < right))
            left++;
        
        if (left != right)
        {
            number[right] = number[left];
            right--;
        }
    }
    
    number[left] = pivot;
    pivot = left;
    left = l_hold;
    right = r_hold;

    if (left < pivot)
        quick_sort(number, left, pivot - 1);
    
    if (right > pivot)
        quick_sort(number, pivot + 1, right);
}


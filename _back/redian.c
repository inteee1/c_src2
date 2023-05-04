#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)    // 오름차순 비교 함수 구현
{
    int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
    int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

    if (num1 > num2)    // a가 b보다 작을 때는
        return 1;      // -1 반환
    
    else if (num1 == num2)    // a가 b보다 클 때는
        return 0;       // 1 반환
    else
    return -1;    // a와 b가 같을 때는 0 반환
}

int median(const int *pArr, int size)
{
    int *p = malloc(sizeof(int) * size);
    for (int i = 0; i < size; ++i)
    {  
        p[i] = pArr[i];
     }

    qsort(p, size, sizeof(int),  compare);

    int result = (size % 2) ? p[size/2] : (p[size/2] + p[(size/2)-1])/2;
    free(p);
        
        return result;
}



int main(void)
{
    int nums[] = {30, 50, 90, 100, 10, 20, 40, 70, 80, 60};

    int result = median(nums, 10);
    printf("median : %d\n", result);
    return 0;
}
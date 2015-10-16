#include <stdio.h>

int max_subArray_sum(int[], int);

int main ()
{
    int A[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int num = sizeof(A)/sizeof(int);
    printf(" The maximum sum of subArray is %d\n",
           max_subArray_sum(A,num));

}

int max_subArray_sum(int A[], int n)
{
    int max_sum = 0x80000000;
    int sum = 0;
    int row, col, index;

    for (row=0; row < n ; row++) {
        for (col=n ; col > row; col--) {
            for (index=row ; index < col; index++)
                sum += A[index];
            if (sum > max_sum) max_sum = sum;
            sum = 0;
        }
    }
    return max_sum;
}

#include <stdio.h>
// int minmax(int a[], int len, int *max, int *min);
int minmax(int *a, int len, int *max, int *min);

int main(void){

    int a[] = {1, 2, 3};
    int b[] = {};
    int max, min;

    printf("a[0] = %d\n", a[0]);
    printf("a µØÖ·Îª£º%#x\n", a);

    minmax(a, sizeof(a)/sizeof(a[0]), &max, &min);
    printf("a[0] = %d\n", a[0]);
    printf("max= %d, min=%d\n", max, min);

}

// int minmax(int a[], int len, int *max, int *min){
int minmax(int *a, int len, int *max, int *min){

    *min = *max = a[0];
    len = len-1;
    while (len >= 0)
    {
        if (a[len] > *max)
        {
            *max = a[len];
        }
        
        if (a[len] < *min)
        {
            *min = a[len];
        }
        
        len--;
    }
    a[0] = 100;
    return 0;
}

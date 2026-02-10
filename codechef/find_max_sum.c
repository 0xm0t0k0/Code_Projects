#include <stdio.h>

#define FIRST 0

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        // Your code goes here
        //Find largest
        int largest = a[FIRST];
        for(int i = 0; i < n; i++) {
            if (a[i] > largest)
                largest = a[i];
        }
        //Find second largest
        int second_largest = a[FIRST];
        for(int i = 0; i < n; i++) {
            if (a[i] > second_largest && a[i] < largest)
                second_largest = a[i];
        }
        
        int max_sum = largest + second_largest;
        printf("%d\n", max_sum);
    }

    return 0;
}

/*You are given an array 
A
A of 
N
N integers.
Find the maximum sum of two distinct integers in the array.
Note: It is guaranteed that there exist at least two distinct integers in the array.*/

/* bubble sort in ascending order: 
        - ১ম জন থেকে শুরু 
        - ২ জন করে compare করব, যে লম্বা তাকে ডানে পাঠাবো
        - প্রতি pass শেষে একজন করে লম্বা ডানে পৌঁছাবে 
        - n-1 সংখ্যক pass শেষে সব লম্বা ডানে পৌঁছাবে 
        
        Optimized bubble sort algorithm = if(swapped == 0) break; */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int i, j;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n-1; i++){

        int swapped = 0; 

        for(j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;

            }
        }

        if (swapped == 0)
            break;
    }

    printf("Sorted in ascending order: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}



//! why i < n-1  &  j < n-1-i ? explain it.

/*//? এই তিনটা নিজে করো:

    - descending order bubble sort
    - swap count প্রিন্ট করো
    - যদি এক pass এ কোনো swap না হয় → loop break (optimized bubble sort) */

/* যদি 1at pass এ কোনো swap না হয় => already sorted 
   যদি 1st pass এ swap হয় এরপর 2nd pass কোনো swap না হয় => 1st pass এর পর sorted হয়ে গেল */

//? bubble sort e swap besi hoi, proti pass e jotota 'j' hobe highest totota swap hbe.



/* //! bubble sort in descending order. 
        - ....
        - .... যে বেঁটে তাকে ডানে পাঠাবো
        - ....
        - ..... */

/* #include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int i, j;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n-1; i++){

        int swapped = 0; 

        for(j = 0; j < n-1-i; j++){
            if(arr[j] < arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;

            }
        }

        if (swapped == 0)
            break;
    }

    printf("Sorted in descending order: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
} */
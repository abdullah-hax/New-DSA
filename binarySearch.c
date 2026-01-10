#include<stdio.h>

int binarySearch(int arr[], int key, int n){

    int low = 0, high = n - 1;
    int mid;

    while(low <= high){
        mid = (low + high)/2;
        if(key == arr[mid]){
            return mid;
        } else if(key < arr[mid]) {
            high = mid - 1;
        } else 
            low = mid + 1;
    }

    return -1;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int key = 6;

    int result = binarySearch(arr, key, n);

    if(result != -1){
        printf("key found at position %d\n", result + 1 );
    } else
        printf("not found\n");

}

// low = low index , high = high index, mid = mid index


/*//? Mini Modification Task (নিজে করবে)

    - descending sorted array এর জন্য code বদলাও
    - recursion দিয়ে Binary Search লেখো
    - duplicate থাকলে first occurrence বের করো */




/* // ! if input is in descending order

#include<stdio.h>

int binarySearch(int arr[], int key, int n){

    int low = 0, high = n - 1;
    int mid;

    while(low <= high){
        mid = (low + high)/2;
        if(key == arr[mid]){
            return mid;
        } else if(key < arr[mid]) {
            low = mid + 1;
        } else 
            high = mid - 1;
    }

    return -1;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int key = 6;

    int result = binarySearch(arr, key, n);

    if(result != -1){
        printf("key found at position %d\n", result + 1 );
    } else
        printf("not found\n");

}  */

// 20 17 15 12 9 6 3 

// ?“Ascending আর descending binary search এ structure একই থাকে, শুধু comparison direction বদলায়।”
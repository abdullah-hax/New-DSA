#include <stdio.h>

int linearSearch(int array[], int n, int key){
    for(int i = 0; i < n; i++){
        if (array[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    int key = 6;

    int result = linearSearch(array, n, key);

    if(result != -1){
        printf("key found at position %d\n", result + 1);
    } else {
        printf("not found.\n");
    }
} 



/*  // !if there are duplicate keys

#include <stdio.h>

void linearSearch(int array[], int n, int key){
    
    int i, count = 0;
    for( i = 0; i < n; i++){   
        if (array[i] == key){
            printf("%d ", i + 1);
            count++;
        }
    }
    if (count == 0){
        printf("not found\n");
    }

}

int main(){
    int n;
    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    int key = 6;

    linearSearch(array, n, key);
   
} */
 

/* Edge case -> ১। শুরুতেই key পেয়ে গিয়েছ, মাঝখানে শেষ 
             -> ২। শুরুতেই key পেয়ে গিয়েছ, সব শেষে শেষ 
             -> ৩। মাঝখানে পেয়েছ, মাঝখানে শেষ
             -> ৪। মাঝখানে পেয়েছ, সবশেষে শেষ
             -> ৫। একদম পাওনি 
*/




// একের অধিক match print করতে হলে loop পুরাটা ঘুরতে হবে। match পাওয়া মাত্র return দেয়া যাবেনা।

#include<stdio.h>

int arr[100000];
int main() {
    int length;
    scanf("%d", &length);


    for(int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    int index;
    scanf("%d", &index);

    // index validation checker
    if(index < 0 || index >= length) {
        printf("Wrong index");
    }

    for(int i = index; i < length; i++) {
        arr[i] = arr[i + 1];
    }

    length --;

    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
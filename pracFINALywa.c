#include <stdio.h>

void elemnts(int arr[], int n, int *sum);

int main () {
    int n;
    printf("Enter num of elements: ");
    scanf("%d",&n);

    int arr[n];
    int sum = 0;

    elemnts(arr,n,&sum);

    return 0;
}

void elemnts(int arr[], int n, int *sum) {
    int i;
    for(i=0; i<n; i++) {
        printf("Inputted number [%d]",i+1);
        scanf("%d",&arr[i]);
        *sum += arr[i];
    }
    printf("List {");
    for(i=0; i<n; i++) {
        if(i > 0) {
            printf(", ");
        }
        printf("%d",arr[i]);
    }
    printf("}\n");
    printf("The sum of inputted number is: %d\n",*sum);
}
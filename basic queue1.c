#include <stdio.h>
int main() 
{
    const int SIZE = 100;
    int queue[SIZE];
    int front = 0, rear = 0;
;
    while (1) {
        int x;
        scanf("%d", &x);
        if (x <0 ) break;
        // add x into the queue
        queue[rear++]=x;
    
    }
    // remove all elements from the queue
    while (front<rear) {
        int a = queue[front++];
        printf("%d\n", a);
     }
    // print the two pointers
    printf("front = %d, rear = %d\n", front, rear);
}
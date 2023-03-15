#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
    int status;
    int pid = fork();
    int MAX_NO_OF_ELEMENTS = 5;
    int *arr[MAX_NO_OF_ELEMENTS];
    *arr = [1,2,3,4,5]
    int total = 0;
    double start = clock();
    for(int i = 0;i < arr.length; i++){
        total += arr[i];
    }
    double end = clock();
    double cpu_time_taken = ((double)(end - start)) / CLOCK_PER_SEC;
    printf("Total sum: %d",total);
    printf("Time taken to sum all the numbers are %d seconds", cpu_time_taken);
    return 0;
}
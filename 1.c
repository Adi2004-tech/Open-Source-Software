#include <stdio.h>

int main() 
{
    int n; 
    printf("Enter the Size of the Array ");
    scanf("%d", &n);

    int arr[n]; 
    float average,sum=0;

    printf("Enter the Numbers\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }

    average = (float)sum / n; 

    printf("Average of the Numbers= %.2f\n", average);

    return 0;
}
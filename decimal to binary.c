#include <stdio.h>

int main()
{
    int num; 
    int bin_arr[100]; 
    int i=0; 
    
    printf("Enter decimal number:"); 
    scanf("%d", &num); 
    while(num)
    { 
      bin_arr[i] = num%2;  
      num = num/2; 
      i++;  
    }

    printf("Binary number: ");
    while(i--)
    {
      printf("%d", bin_arr[i]); 
    }
    return 0;
}
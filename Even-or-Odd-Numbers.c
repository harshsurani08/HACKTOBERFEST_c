#include <stdio.h>
 
// function to check even or odd numbers
int isEven(int a){
  if(a%2==0){
    printf("\n%d is an even number",a);
  }
  else{
    printf("\n%d is an odd number",a);
  }
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    isEven(a); //calling the function
    return 0;
}

//An ARMSTRONG NO. is one whose sum of all digits to the power of no.of digits each= the no. itself.
//for eg. for a 3 digit no. an armstrong no. is one, whose sum of cubes of each digit= the no. itself

#include<stdio.h>
#include<math.h>
int main(){
    int num, originalnum, remainder, n=0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalnum = num;
    
    for (originalnum = num; originalnum != 0; ++n){
        originalnum /= 10;
        
    }
    
    for (originalnum = num; originalnum != 0; originalnum /= 10) {
        remainder = originalnum%10;
        result += pow(remainder, n);
    }
    
    if((int)result == num)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);
    return 0;
}

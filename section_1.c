###############################################################################################

---------------------Solving By Mominur Rahman(28th Batch, C.S.E-21058)-------------------------

----------------------------------------Section - 1--------------------------------------------

----------------------------------Solving all problem------------------------------------------


##############################################################################################



----------- Find area and perimeter of a triangle ---------------


#include <stdio.h>
#include <math.h>

int main() {
    int area,perimeter,s,a,b,c;
    printf("Enter Three value of traingle: ");
    scanf("%d %d %d",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    perimeter=2*s;

    printf("\nArea of Triangle: %d\nPerimeter of Triangle: %d\n",area,perimeter);
    return 0;
}





##########################################################################################


--------Find area and Circumference of Circle-----------------

#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main() {
    float radius,area,circumference;
    printf("Enter circle radius: ");
    scanf("%f",&radius);

    area=PI*pow(radius,2);
    circumference=2*PI*radius;

    printf("\nArea of Circle: %.3f\nCircumference of Circle: %.3f\n",area,circumference);
    return 0;
}



###########################################################################################

---------------------Find Area and Perimeter of a Rectangle--------------------------------

#include <stdio.h>

int main() {
    float length,width,area,perimeter;
    printf("Enter length and width of rectangle: ");
    scanf("%f %f",&length,&width);

    area=length*width;
    perimeter=2*(length+width);

    printf("\nArea of Rectangle: %.3f\nPerimeter of Rectangle: %.3f\n",area,perimeter);


    return 0;
}



####################################################################################################

------------Convert the given temperature in Fahrenheit to Celsius and vice versa------------------

Relation:- C/5=(F-32)/9=(k-273.15)/5

#include<stdio.h>

int main() {
    float c,f,x;
    int option;
    printf("\nOption:\n1.Fahrenheit to Celsius\n2.Celsius to Fahrenheit\nEnter the option number: ");
    scanf("%d",&option);

    if(option==1) {
        printf("\nEnter Fahrenheit value: ");
        scanf("%f",&f);
        x=(float)5/9;
        c=((f-32)*x);
        printf("Celsius: %.2f",c);
    }
    else if(option==2) {
        printf("\nEnter Celsius value: ");
        scanf("%f",&c);
        x=(float)9/5;
        f=(c*x)+32;
        printf("Fahrenheit: %.2f",f);
    }
    else{
        printf("Invalid option!");
    }

    return 0;
}



################################################################################################

----------------------------------Number is Odd or Even------------------------------------


#include <stdio.h>

int main() {
    int number;
    printf("Enter a value: ");
    scanf("%d",&number);

    if(number%2==0) {
        printf("Number is Even!");
    }
    else{
        printf("Number is Odd!");
    }

    return 0;
}




#################################################################################################

------------------Dtermine the largest element among the three numbers---------------------------


#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter three values: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>=b) {
        if(a>=c){
            printf("%d is the largest element among the three numbers!",a);
        }
        else{
            printf("%d is the largest element among the three numbers!",c);
        }
    }
    else{
        if(b>=c) {
            printf("%d is the largest element among the three numbers!",b);
        }
        else{
            printf("%d is the largest element among the three numbers!",c);
        }
    }

    return 0;
}




##############################################################################################

------------------------Find all possible roots of quadratic equation-------------------------

ax2+bx+c=0,x=(-b+-sqrt(b2-4ac))/2a

#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,root1,root2,d,ans;
    printf("Enter a,b,c in quardatic equation: ");
    scanf("%f %f %f",&a,&b,&c);
    d=pow(b,2)-(4*a*c);
    if(d==0) {
        ans=-b/(2*a);
        printf("x1=x2=%.3f\n",ans);
    }
    else if(d>0) {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("x1=%.3f\nx2=%.3f",root1,root2);
    }
    else if(d<0) {
        root1=-b/(2*a);
        root2=sqrt(-d)/(2*a);
        printf("x1=%.3f+%.3fi\nx2=%.3f-%.3fi",root1,root2,root1,root2);
    }

    return 0;
}



##################################################################################################

--------------------------Find the factorial of an integer---------------------------------------

#include <stdio.h>

int main() {
    long long int number,fact_value=1;
    printf("Enter a value: ");
    scanf("%lld",&number);

    if(number>0) {
        for(long long int i=1; i<=number; i++) {
            fact_value=fact_value*i;
        }
        printf("Result: %lld",fact_value);
    }
    else{
        printf("Factorial of a negative number doesn't exit!");
    }

    return 0;
}



###################################################################################################

---------------------------Find the first N fibonacci number--------------------------------------

#include <stdio.h>

int main() {
    int first=0,second=1,next_term,n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    if(n==1) {
        printf("Fibonacci Series: %d",first);
    }
    else if(n==2) {
        printf("Fibonacci Series: %d, %d",first,second);
    }
    else if(n>=3) {
        printf("Fibonacci Series: %d, %d, ",first,second);

        for(int i=3; i<=n; i++) {
            next_term=first+second;
            first=second;
            second=next_term;
            printf("%d, ",next_term);
        }
    }

    return 0;
}



##################################################################################################

------------Sum of the flowing harmonic series S=1+1/2^2+1/3^3+...........+1/n^n.-----------------

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the terms of harmonic series: ");
    scanf("%d",&n);

    float sum=1,vlaue;
    long long int p_value;
    for(int i=2; i<=n; i++){
        p_value=pow(i,i);
        vlaue=(float)1/p_value;
        sum+=vlaue;
    }

    printf("Sum of the harmonic Series: %.3f",sum);

    return 0;
}




####################################################################################################

-----Takes an integer as input and display it in reverse order.Also compute the sum of digits.------


#include <stdio.h>

int main() {
    int number,ans,sum=0;
    printf("Enter an integer number: ");
    scanf("%d",&number);

    printf("\nReverse order: ");
    while (number!=0)
    {
        ans=number%10;
        printf("%d",ans);
        sum+=ans;
        number=number/10;
    }
    printf("\nSum of digits: %d",sum);
    


    return 0; 
}





################################################################################################

-----------------------Convert any integer to it's binary equivalent----------------------------


#include <stdio.h>

int main() {
    int number,ans,arr[100000];
    printf("\nEnter any integer number: ");
    scanf("%d",&number);

    int i=0;
    while (number!=0)
    {
        ans=number%2;
        number=number/2;
        arr[i]=ans;
        i++;
    }

    i--;
    printf("\nConvert Integer To Binary: ");
    for(int j=i; j>=0; j--) {
        printf("%d",arr[j]);
    }
    return 0;
}




#################################################################################################

------------------------------------Find GCD of Two numbers--------------------------------------

#include <stdio.h>

int main() {
    int a,b,gcd;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    for(int i=1; i<=a && i<=b; i++) {
        if(a%i==0 && b%i==0) {
            gcd=i;
        }
    }

    printf("G.C.D = %d",gcd);


}



#####################################################################################################

--------------------------------------- END ---------------------------------------------------------
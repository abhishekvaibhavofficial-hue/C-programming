Q    PRACTICE SET 1:-
1.  Write a C program to calculate area of a rectangle:
a. Using hard code inputs.
b. Using inputs supplied by the user.

2. Calculate the area of the circle and modify the same program to calculate the volume of the cylinder given its redius and height.
3. Write a program to convert celcious from fahrenheits.
4. Write a program to calculate simple intrest for a set of values representing principal, number of years and rate of intrest.

1.
a.

#include <stdio.h>
int main (){
    int l , b ;
    printf("enter length:-");
    scanf("%d",&l);
    printf ("enter breath:-");
    scanf("%d",&b);
    int area = l * b;
    printf ("%d",area);
    return 0;
}

b.

#include <stdio.h>
int main (){
    int l = 10;
    int b = 8;
    int area = l * b;
    printf("%d is area",area);
    return 0;
}


2. 

area of circle:-

#include <stdio.h>
int main() {
    float radius, area;
    const float PI = 3.14159; // Defining PI as a constant

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius); // Read the radius from the user

    // Calculate the area using the formula A = PI * r * r
    area = PI * radius * radius;

    // Print the calculated area, formatted to two decimal places
    printf("The area of the circle is: %.2f\n", area);

    return 0; // Indicate successful execution
}

 or 
 
#include <stdio.h>
#define PI 3.14
#define area(r) (PI*r*r)
int main(){
    float r;
    printf("Enter radius: ");
    scanf("%f",&r);
    printf("%.2f",area(r));
    return 0;
    
}

volume of cylender:-


#include <stdio.h>
int main(){
    float r , volume , h;
    float const PI = 3.14;
    printf("height of cylender:");
    scanf("%f",&h);
    printf("radius of cylender:");
    scanf("%f",&r);
    volume = PI * r * r * h;
    printf("volume of cylender is %.2f",volume);
    return 0;
}
 
3. Convert C to F:-

#include <stdio.h>
int main(){
    float C, F;
    printf("Celcious:");
    scanf("%f",&C);
    F = C * 32;
    printf("F is %f",F);
    return 0;
}


4. Simple Intrest 

#include <stdio.h>
int main(){
    float P, T, R;
    printf("Principal amount:");
    scanf("%f",&P);
    printf("Time in years:");
    scanf("%f",&T);
    printf("Rate of intrest:");
    scanf("%f",&R);
    float SI = (P * R * T) / 100 ;
    printf("Simple Intrest: %f",SI);
    return 0;
}


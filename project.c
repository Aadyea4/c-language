//project
#include<stdio.h>
#include<math.h>

void ftoc()
{
    //dec
    float f;
    float c;

    //ini
    printf("\nEnter the fahrenheit value :");
    scanf("%f" ,&f);

    //comp
    c = f - 32.0 * (5.0 / 9.0);

    //display
    printf("\nThe value of %f as celcius is %f" ,f,c);
}

void ctof()
{
    //dec
    float c;
    float f;

    //ini
    printf("\nEnter the celcius value :");
    scanf("%f" ,&c);

    //comp
    f = c * (9.0 / 5.0) + 32;

    //display 
    printf("\nThe value of %f as fahrenheit is %f" ,c,f);
}

void itou(float i)
{
    //dec
    float u;

    //ini
    u = i * 0.012;

    //display
    printf("\nThe given amount in US Dollars is %f" ,u);
}

void utoi(float u)
{
    //dec
    float i;

    //ini
    i = u * 85.86;

    //display
    printf("\nThe given amount in Indian rupees is %f" ,i);
}

void multiplicationtable(int n)
{
   for(int i = 1;i <= 10;i++)
   {
    printf("%d * %d = %d\n" ,n,i,n*i);
   }
}


int main()
{
    //dec
    float a;
    float b;
    float c;
    float d;
    float f;
    float i;
    float u;
    float sum;
    float dif;
    float pro;
    float quo;
    float area1;
    float area2;
    float area3;
    float area4;
    float vol;
    float sur;
    int n;
    int m;
    float vol2;
    float vol3;
    float simple;
    float compound;
    float amount;
    int choice;

    //prompt and accept from user
    printf("\n------------------------------------------------");
    printf("\n      S I M P L E   C A L C U L A T I O N       ");
    printf("\n------------------------------------------------");
    printf("\n      1. Addition                               ");
    printf("\n      2. Subtraction                            ");
    printf("\n      3. Multiplication                         ");
    printf("\n      4. Division                               ");
    printf("\n------------------------------------------------");
    printf("\n      5. Area of a square                       ");
    printf("\n      6. Area of rectangle                      ");
    printf("\n      7. Area of a triangle                     ");
    printf("\n      8. Area of a circle                       ");
    printf("\n      9. Volume of a sphere                     ");
    printf("\n     10. Surface area of a sphere               ");
    printf("\n------------------------------------------------");
    printf("\n     11. Check if number is even or odd         ");
    printf("\n     12. Check if number is positive or negative");
    printf("\n     13. Find the greatest of two numbers       ");
    printf("\n     14. Find the smallest of two numbers       ");
    printf("\n     15. Find the volume of the cone            ");
    printf("\n     16. Find the volume of the cuboid          ");
    printf("\n     17. Find the simple Interest               ");
    printf("\n     18. Find the compound interest             ");
    printf("\n     19. Convert from celcius to fahrenheit     ");
    printf("\n     20. Convert from fahrenheit to celcius     ");
    printf("\n     21. Convert from rupees to dollars         ");
    printf("\n     22. Convert from dollars to rupees         ");
    printf("\n     23. Multiplication table of a given number ");
    printf("\n     24. Find factor of a given number          ");
    printf("\n     25. Find sum of factors of a given  number ");
    printf("\n------------------------------------------------");
    printf("\n                 0.EXIT                         ");
    printf("\n------------------------------------------------");
    
    do
    {
        printf("\n Choose between 1 to 25 from the given menu :");
        scanf("%d" ,&choice);

        //output
        if(choice == 1)
        {
            printf("\nEnter the numbers you wish to add :");
            scanf("%f%f" ,&a,&b);

            sum = a+b;
       
            printf("\nThe sum of the numbers %f and %f is %f" ,a,b,sum);
        }

        else if(choice == 2)
        {
            printf("\nEnter the numbers you wish to subtract :");
            scanf("%f%f" ,&a,&b);

            dif = a-b;
       
            printf("\nThe difference of the numbers %f and %f is %f" ,a,b,dif);
        }
    
        else if(choice == 3)
        {
            printf("\nEnter the numbers you wish to multiply :");
            scanf("%f%f" ,&a,&b);

            pro = a*b;
       
            printf("\nThe product of the numbers %f and %f is %f" ,a,b,pro);
        }

        else if(choice == 4)
        {
            printf("\nEnter the numbers you wish to divide :");
            scanf("%f%f" ,&a,&b);

            quo = a / b;
       
            printf("\nThe quotient of the numbers %f and %f is %f" ,a,b,quo);
        }

        else if(choice == 5)
        {
            printf("\nEnter the side of the square :");
            scanf("%f" ,&a);

            area1 = a*a;

            printf("\nArea of the square of side %f is %f" ,a,area1);
        }

        else if(choice == 6)
        {
            printf("\nEnter the length and breadth of the rectangle :");
            scanf("%f%f" ,&a,&b);

            area2 = a*b;

            printf("\nArea of the rectangle of length %f and breadth %f is %f" ,a,b,area2);
        }

        else if(choice == 7)
        {
            printf("\nEnter the height and base of the triangle :");
            scanf("%f%f" ,&a,&b);

            area3 = 0.5 * a * b;

            printf("\nArea of the triangle of height %f and base %f is %f" ,a,b,area3);
        }

        else if(choice == 8)
        {
            printf("\nEnter the radius of the circle :");
            scanf("%f" ,&a);

            area4 = 3.14 * a * a;

            printf("\nArea of the circle of radius %f is %f" ,a,area4);
        }

        else if(choice == 9)
        {
            printf("\nEnter the radius of the sphere :");
            scanf("%f" ,&a);

            vol = 4.0/3.0 * 3.14 * a * a * a;

            printf("\nVolume of the sphere of radius %f is %f" ,a,vol);
        }

        else if(choice == 10)
        {
            printf("\nEnter the radius of the sphere :");
            scanf("%f" ,&a);

            sur = 4.0 * 3.14 * a * a;

            printf("\nSurface area of the sphere of radius %f is %f" ,a,sur);
        }
        
        else if(choice == 11)
        {
            printf("\nEnter the number :");
            scanf("%d" ,&n);

            if(n % 2 == 0)
            {
                printf("\n%d is an even number",n);
            }
            else if(n % 2 != 0)
            {
                printf("\n%d is an odd number",n);
            }
        }

        else if(choice == 12)
        {
            printf("\nEnter the number :");
            scanf("%d", &n);

            if(n > 0)
            {
                printf("\n%d is a positive number",n);
            }
            if(n < 0)
            {
                printf("\n%d is a negative number",n);
            }
            if(n == 0)
            {
                printf("\n%d is zero",n);
            }
        }

        else if(choice == 13)
        {
            printf("\nEnter the two numbers you want to compare :");
            scanf("%f%f" ,&a,&b);

            if(a > b)
            {
                printf("\n %f is greater than %f" ,a,b);
            }
            else if(a < b)
            {
                printf("\n %f is greater than %f" ,b,a);
            }
        }

        else if(choice == 14)
        {
            printf("\nEnter the two numbers you want to compare :");
            scanf("%f%f" ,&a,&b);

            if(a < b)
            {
                printf("\n %f is smaller than %f" ,a,b);
            }
            else if(a > b)
            {
                printf("\n %f is smaller than %f" ,b,a);
            }
        }

        else if(choice == 15)
        {
            printf("\nEnter the height and radius of the cone :");
            scanf("%f%f" ,&a,&b);
            
            vol2 = 3.14 * b * b * a / 3.0;

            printf("\nThe volume of the cone whose height is %f and radius is %f is %f" ,a,b,vol2);
        }

        else if(choice == 16)
        {
            printf("\nEnter the length, breadth and height of the cuboid :");
            scanf("%f%f%f" ,&a,&b,&c);

            vol3 = a*b*c;

            printf("\nThe volume of the cuboid of length %f, breadth %f and height %f is %f" ,a,b,c,vol3);
        }

        else if(choice == 17)
        {
            printf("\nEnter the principle amount, rate and time period Respectively :");
            scanf("%f%f%f" ,&a,&b,&c);

            simple = a * b * c / 100.0;

            printf("\nThe simple interest is %f",simple);
        }

        else if(choice == 18)
        {
            printf("\nEnter the principle amount, rate, number of times interest is compounded and number of years respectively :");
            scanf("%f%f%f%f" ,&a,&b,&c,&d);

            amount = a * pow((1 + (b / (c * 100))), c * d);
            compound = amount - a;

            printf("\nThe compound interest is %.2f\n",compound);
        }

        else if(choice == 19)
        {
            ctof();
        }
    
        else if(choice == 20)
        {
            ftoc();
        }

        else if(choice == 21)
        {
            printf("\nEnter the indian rupee amount you want to convert :");
            scanf("%f" ,&i);
            
            itou(i);
        }

        else if(choice == 22)
        {
            printf("\nEnter the dollar amount you want to convert :");
            scanf("%f" ,&u);

            utoi(u);
        }
        
        else if(choice == 23)
        {
            printf("\nEnter a number to print multiplication table for :");
            scanf("%d" ,&n);

            printf("\nMultiplication table for %d : \n" ,n);
            {
                multiplicationtable(n);
            }
        }

        else if(choice == 24)
        {
            printf("\nEnter the number you want to find factors for :");
            scanf("%d" ,&n);

            for(m = 1;m <= n;m = m + 1)
            {
                if(n % m == 0)
                {
                    printf("%d , " ,m);
                }
            }
        }

        else if(choice == 25)
        {
            sum = 0;

            printf("\nEnter the number you want to find the sum of factors for :");
            scanf("%d" ,&n);

            for(m = 1;m <= n;m = m + 1)
            {
                if(n % m == 0)
                {
                    sum = sum + m;
                }
            }
            printf("\nSum of the factors of %d is %f" ,n,sum);
        }
    }while(choice != 0); 
    
    return 0;
}       
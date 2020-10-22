#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, x1, x2, Discriminant;

    int equation_type, answer;


    printf("Program for solving linear and quadratic equations\n\n");

    do {

        printf("Do you want to solve a quadratic or linear equation?\n\nEnter 1 if you want to solve a linear equation.\nEnter 2 if you want to solve a quadratic equation\n");

        scanf("%d", &equation_type);



        if (equation_type == 1) {


            printf("Linear equation solution\n\n");

            printf("Enter coefficient with argument\n");

            scanf("%f", &b);

            printf("Enter free term\n");

            scanf("%f", &c);


            if ((b == 0) && (c == 0)) {

                printf ("Endless number of solutions\n");

            }


            if  ((b == 0) && (c != 0)) {

                printf("No solutions\n");

            }

            if (b != 0) {

                x1 = - c / b ;

                printf("One solution:\n%f", x1);

            }

        }



        if (equation_type == 2) {


            printf("Solution of a quadratic equation\n\n");

            printf("Enter the coefficient at the second power of the argument:\n");

            scanf("%f",&a);

            printf("Enter the coefficient at the first power of the argument:\n");

            scanf("%f", &b);

            printf("Enter free term:\n");

            scanf("%f", &c);

            Discriminant = ( b * b - 4 * a * c );


            if (Discriminant == 0) {

                x1 = - b / 2 * a;

                printf("One solution:\n%f", x1);

            }


            if (Discriminant < 0) {

                printf("No valid solutions\n");

            }


            if (Discriminant > 0) {

                x1=( - b + sqrtf(Discriminant)) / ( 2 * a );

                x2=(- b - sqrtf(Discriminant)) / ( 2 * a );

                printf("Two solutions:\n%f\n%f", x1, x2);

            }
        }



        if (equation_type != 2 && equation_type != 1) {

            printf("Sorry, you entered an invalid number.\nSelect menu item 1 or 2.\n");

        }

        printf("Do you want to solve another equation?\n\nEnter 1, if the answer is \"Yes\"/n Otherwise press any other figure:\n");

        scanf("%d",&answer);

    } while (answer == 1);

    return 0;

}

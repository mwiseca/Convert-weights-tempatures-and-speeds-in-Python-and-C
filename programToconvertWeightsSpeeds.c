
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50 
#define MAX 49

void ind() {
    printf("    i    index\n");
    printf("    x    exit\n");
    printf("    c    celcius to faharenheit\n");
    printf("    f      faharenheit to celcius\n");
    printf("    oz     ounces to pounds\n");
    printf("    lboz   pounds to ounces\n");
    printf("    g      grams to lbs\n");
    printf("    pg     pounds to grams\n");
    printf("    lbs    pounds to kilograms\n");
    printf("    kg     kilograms to pounds\n");
    printf("    kl     kilometers to miles\n");
    printf("    mk     miles to kilometers\n");
    printf("    mi     miles per hour to kilometers per hour\n");
    printf("    kph    kilometers per hour to miles per hour\n");
}

void flush() {
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}

int main() {
    char sw[SIZE];
    ind();
    while (1) {
        printf("Enter x to exit main m for main i for index.\n\n");
        fgets(sw, SIZE, stdin);
        sw[strcspn(sw, "\n")] = 0;
        if (strlen(sw) >= MAX) {
            flush();
        }
        printf("Enter i for index x to exit.\n");
        printf("Enter m for main.\n\n");
        if (strcmp(sw, "c") == 0) {
            char celsius[SIZE];
            char *ptr;
            double x;
            while (1) {
                printf("Enter a tempature in celsius.\n");
                fgets(celsius, SIZE, stdin);
                celsius[strcspn(celsius, "\n")] = 0;
                if (strlen(celsius) >= MAX) {
                  flush();
                }
                if (strcmp(celsius, "m") == 0) {
                    break;
                }
                x = strtod(celsius, &ptr);
                if (x > 999999999999999 || x < -99999999999999) {
                    printf("\nEnter no more than 999999999999999 or less than -99999999999999.\n\n");
                } else if (ptr == celsius) {
                    printf("\nEnter a number only.\n\n");
                } else if (*ptr != '\0') {
                    printf("\nTry not to enter a text after a number.\n\n");
                } else {
                double result = x / 5 * 9 + 32;
                printf("%f\n", result);
                printf("fahrenheit\n");
                }
            }
        } else if (strcmp(sw, "f") == 0) {
            char fahrenheit[SIZE];
            char *ptr;
            double x;
            while (1) {
                printf("Enter a tempature in fahrenheit.\n");
                fgets(fahrenheit, SIZE, stdin);
                fahrenheit[strcspn(fahrenheit, "\n")] = 0;
                if (strlen(fahrenheit) >= MAX) {
                    flush();
                }
                if (strcmp(fahrenheit, "m") == 0) {
                    break;
                }
                x = strtod(fahrenheit, &ptr);
                if (x > 999999999999999 || x < -99999999999999) {
                    printf("\nEnter no more than 999999999999999 or less than -99999999999999.\n\n"); 
                } else if (ptr == fahrenheit) {
                    printf("\nEnter a number only.\n\n");
                } else if (*ptr != '\0') {
                printf("\nTry not to enter a text after a number.\n\n");
                } else {
                    double result = (((x)) - 32) * 5 / 9;
                    printf("%f\n", result);
                    printf("celsius\n");
               }
          }
        } else if (strcmp(sw, "g") == 0) {
            char weight_grams[SIZE];
            char *ptr;
            double x;
            while (1) {
                printf("Enter a weight in grams.\n");
                fgets(weight_grams, SIZE, stdin);
                weight_grams[strcspn(weight_grams, "\n")] = 0;
                if (strlen(weight_grams) >= MAX) {
                    flush();
                }
                if (strcmp(weight_grams, "m") == 0) {
                    break;
                }
                x = strtod(weight_grams, &ptr);
                if (x > 999999999999999 || x < -99999999999999) {
                    printf("\nEnter no more than 999999999999999 or less than -99999999999999.\n\n");     
                } else if (ptr == weight_grams) {
                    printf("\nEnter a number only.\n\n");
                } else if (*ptr != '\0') {
                    printf("\nTry not to enter a text after a number.\n\n");
                } else {
                    double result = x * .00220462;
                    printf("%f\n", result);
                    printf("pounds\n");
                }
          }
        } else if (strcmp(sw, "pg") == 0) {
            char weight_pounds[SIZE];
            char *ptr;
            double x;
            while (1) {
                printf("Enter a weight in pounds.\n");
                fgets(weight_pounds, MAX, stdin);
                weight_pounds[strcspn(weight_pounds, "\n")] = 0;
                if (strlen(weight_pounds) >= MAX) {
                    flush();
                }
                if (strcmp(weight_pounds, "m") == 0) {
                    break;
                }
                x = strtod(weight_pounds, &ptr);
                if (x > 999999999999999 || x < -99999999999999) {
                    printf("\nEnter no more than 999999999999999 or less than -99999999999999.\n\n");       
                } else if (ptr == weight_pounds) {
                    printf("\nEnter a number only.\n\n");
                } else if (*ptr != '\0') {
                    printf("\nTry not to enter a text after a number.\n\n");
                } else {
                    double result = x * 453.59237;
                    printf("%f", result);
                    printf("grams\n");
               }
          }
        } else if (strcmp(sw, "x") == 0) {
            break;
        } else if (strcmp(sw, "i") == 0) {

            ind();
        } else {
            printf("//Enter a letter in index.\n\n");
        }
    }
  return 0;
}


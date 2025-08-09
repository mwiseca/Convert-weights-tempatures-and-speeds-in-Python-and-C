/*MIT License

 Copyright (c) 2021-2025 Mitchell E Wise

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
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
	printf("    hx     Decimal to hexadecimal one byte limit.\n");
	printf("    hxl    Larger decimal to hexadecimal numbers.\n");
    printf("    lm     light years to miles precise.\n");
    printf("    lmb    Light years to miles basic. Works with all compilers.\n");
    printf("    lc     license\n");
}

void flush() {
    int clear;
    while ((clear = getc(stdin)) != '\n' && clear != EOF) {
    }
}

int main() {
    char sw[SIZE];
    ind();
    printf("Enter i for index x to exit.\n");
    printf("Enter m for main.\n\n");
    while (1) {
        printf("Enter x to exit main m for main i for index.\n\n");
        while(fgets(sw, SIZE, stdin) == NULL) {
		    printf("\nInvalid input Try again.\n\n");
	        clearerr(stdin);
	    }
        sw[strcspn(sw, "\n")] = 0;
        if (strlen(sw) >= MAX) {
            flush();
        }
        if (strcmp(sw, "c") == 0) {
            char celsius[SIZE];
            char *ptr;
            double x;
            while (1) {
                printf("Enter a tempature in celsius m for main.\n");
                while(fgets(celsius, SIZE, stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
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
                } else if (*ptr == 0x20) {
                    printf("\nTry not to enter spaces between numbers.\n\n");
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
                printf("Enter a tempature in fahrenheit m for main.\n");
                while(fgets(fahrenheit, SIZE, stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
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
                } else if (*ptr == 0x20) {
                    printf("\nTry not to enter spaces between numbers.\n\n");
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
                printf("Enter a weight in grams m for main.\n");
                while(fgets(weight_grams, SIZE, stdin) == NULL) {
				    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
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
                } else if (*ptr == 0x20) {
                    printf("\nTry not to enter spaces between numbers.\n\n");    
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
                printf("Enter a weight in pounds m for main.\n");
                while(fgets(weight_pounds, SIZE, stdin) == NULL) {
				    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
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
                } else if (*ptr == 0x20) {
                    printf("\nTry not to enter spaces between numbers.\n\n"); 
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
        } else if (strcmp(sw,"lbs")==0) {
            char weight_lbs [SIZE];
            char *ptr;
            double x;
            while(1) {
                printf("Enter a weight in lbs m for main.\n");
                while(fgets(weight_lbs, SIZE,stdin) == NULL) {
				    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
                weight_lbs[strcspn(weight_lbs,"\n")]=0;
                if (strlen(weight_lbs) >= MAX) {
                    flush();
                }
                if (strcmp(weight_lbs,"m")==0) {
                    break;
                }
                x = strtod(weight_lbs, &ptr);
                if (x > 999999999999999 || x < -99999999999999) {
                    printf("\nEnter no more than 999999999999999 or less than -99999999999999.\n\n"); 
                } else if (*ptr == 0x20) {
                    printf("\nTry not to enter spaces between numbers.\n\n");      
                } else if (ptr == weight_lbs) {
                    printf("\nEnter a number only.\n\n");
                } else if (*ptr != '\0') {
                    printf("\nTry not to enter a text after a number.\n\n");
                } else {
                    double result = x * 0.45359237;
                    printf("%f\n",result); 
                    printf("kilograms\n");
               }
	        }
	    } else if (strcmp(sw,  "kg")==0) {
	        char weight_kg [SIZE];
	        char *ptr;
	        double x;
            while(1) {
                printf("Enter a weight in kg m for main.\n");
                while(fgets(weight_kg, SIZE,stdin) == NULL) {
				    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
		        weight_kg[strcspn(weight_kg, "\n")]=0;
		        if (strlen(weight_kg) >= MAX) {
		        flush();
		        }
                if (strcmp(weight_kg,  "m")==0) {
                     break;
		        }
                x = strtod(weight_kg, &ptr);
                if (x > 999999999999999 || x < -99999999999999) {
                    printf("\nEnter no more than 999999999999999 or less than -99999999999999.\n\n");
                } else if (*ptr == 0x20) {
                    printf("\nTry not to enter spaces between numbers.\n\n");       
                } else if (ptr == weight_kg) {
                    printf("\nEnter a number only.\n\n");
                } else if (*ptr != '\0') {
                    printf("\nTry not to enter a text after a number.\n\n");
                } else {
                    double result = x * 2.2046226218;
                    printf("%f\n",result);
                    printf("pounds\n");
                }
	        }
	    } else if (strcmp(sw, "oz")==0) {
	        char weight_oz [SIZE];
	        char *ptr;
	        double x;
            while(1) {
                printf("Enter a weight in ounces.\n");
                while(fgets(weight_oz, SIZE,stdin) == NULL) {
				    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
                weight_oz[strcspn(weight_oz,"\n")]=0;
		        if(strlen(weight_oz) >= MAX) {
		        flush();
		        }
                if (strcmp(weight_oz, "m")==0) {
                    break;
                }
                x = strtod(weight_oz, &ptr);
                if (x > 999999999999999 || x < -99999999999999) {
                    printf("\nEnter no more than 999999999999999 or less than -99999999999999.\n\n");  
                } else if (*ptr == 0x20) {
                    printf("\nTry not to enter spaces between numbers.\n\n");
                } else if (ptr == weight_oz) {
                    printf("\nEnter a number only.\n\n");
                } else if (*ptr != '\0') {
                    printf("\nTry not to enter a text after a number.\n\n");
                } else {
                    double result = x * 0.062500;
                    printf("%f\n",result);
                    printf("pounds\n");  

                }
            }
        } else if (strcmp(sw,  "lboz")==0) {
            char weight_lbs [SIZE];
            char *ptr;
            double x;
            while(1) {
                printf("Enter a weight in pounds m for main.\n");
                while(fgets(weight_lbs, SIZE,stdin) == NULL) {
				    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
                weight_lbs[strcspn(weight_lbs, "\n")]=0;
                if(strlen(weight_lbs) >= MAX) {
                    flush();
                }
                if (strcmp(weight_lbs, "m")==0) {
                    break;
                }
                x = strtod(weight_lbs, &ptr);
                if (x > 999999999999999 || x < -99999999999999) {
                    printf("\nEnter no more than 999999999999999 or less than -99999999999999.\n\n");  
                } else if (*ptr == 0x20) {
                    printf("\nTry not to enter spaces between numbers.\n\n"); 
                } else if (ptr == weight_lbs) {
                    printf("\nEnter a number only.\n\n");
                } else if (*ptr != '\0') {
                    printf("\nTry not to enter a text after a number.\n\n");
                } else {
                    double result = x *16;
                    printf("%f\n",result);
                    printf("ounces\n"); 
                }
	        }
	    } else if (strcmp(sw, "kl")==0) {
	        char distance_klm [SIZE];
	        char *ptr;
	        double x; 
            while(1) {
                printf("Enter a distance in kilometers m for main.\n");
                while(fgets(distance_klm, SIZE,stdin) == NULL) {
				    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
		        distance_klm[strcspn(distance_klm,"\n")]=0;
		        if (strlen(distance_klm) >= MAX) {
		            flush();
		        }
                if (strcmp(distance_klm,  "m")==0) {
                    break;
		        }
                x = strtod(distance_klm, &ptr);
                if (x > 999999999999999 || x < -99999999999999) {
                    printf("\nEnter no more than 999999999999999 or less than -99999999999999.\n\n");
                } else if (*ptr == 0x20) {
                    printf("\nTry not to enter spaces between numbers.\n\n");
                } else if (ptr == distance_klm) {
                    printf("\nEnter a number only.\n\n");
                } else if (*ptr != '\0') {
                    printf("\nTry not to enter a text after a number.\n\n");
                 } else {
                     double result = x * 0.62137119223733;
                     printf("%f\n",result);
                     printf("miles\n");
                 }
           } 
	    } else if (strcmp(sw, "mk")==0) {
	        char distance_miles [SIZE];
	        char *ptr;
	        double x;
            while(1) {
                printf("Enter a distance in miles m for main\n");
                while(fgets(distance_miles, SIZE,stdin) == NULL) {
				    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
		        distance_miles[strcspn(distance_miles,"\n")]=0;
		        if(strlen(distance_miles) >= MAX) {
		            flush();
		        }
                if (strcmp(distance_miles, "m")==0) {
                    break;
		        }
                x = strtod(distance_miles, &ptr);
                if (x > 999999999999999 || x < -99999999999999) {
                    printf("\nEnter no more than 999999999999999 or less than -99999999999999.\n\n");
                } else if (*ptr == 0x20) {
                    printf("\nTry not to enter spaces between numbers.\n\n");
                } else if (ptr == distance_miles) {
                    printf("\nEnter a number only.\n\n");
                } else if (*ptr != '\0') {
                    printf("\nTry not to enter a text after a number.\n\n");
                } else {
                    double result = x *1.609344;
                    printf("%f\n",result);
                    printf("kilometers\n"); 
                }
            }
        } else if (strcmp(sw, "mi")==0) { 
            char speed_mph [SIZE];
            char *ptr;
            double x;
            while(1) {
                printf("Enter speed miles per hour m for main.\n"); 
                while(fgets(speed_mph, SIZE,stdin) == NULL) {
				    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
                speed_mph[strcspn(speed_mph, "\n")]=0;
                if(strlen(speed_mph) >= MAX) {
                    flush();
                }
                if (strcmp(speed_mph, "m")==0) {
                    break;
                }
                x = strtod(speed_mph, &ptr);
                if (x > 999999999999999 || x < -99999999999999) {
                    printf("\nEnter no more than 999999999999999 or less than -99999999999999.\n\n"); 
                } else if (*ptr == 0x20) {
                    printf("\nTry not to enter spaces between numbers.\n\n");
                } else if (ptr == speed_mph) {
                    printf("\nEnter a number only.\n\n");
                } else if (*ptr != '\0') {
                    printf("\nTry not to enter a text after a number.\n\n");
                } else {
                    double result = x * 1.609344;
                    printf("%f\n",result);
                    printf("kilometers per hour\n");
                }
            }
        } else if (strcmp(sw, "kph")==0) {
            char speed_kpm [SIZE];
            char *ptr;
            double x;
            while(1) {
                printf("Enter a speed in kilometers per hour m for main.\n");
                while(fgets(speed_kpm,SIZE,stdin) == NULL) {
				    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
                speed_kpm[strcspn(speed_kpm,"\n")]=0;
                if (strlen(speed_kpm) >= MAX) {
                    flush();
                }
                if (strcmp(speed_kpm,  "m")==0) {
                    break;
                }
                x = strtod(speed_kpm, &ptr);
                if (x > 999999999999999 || x < -99999999999999) {
                    printf("\nEnter no more than 999999999999999 or less than -99999999999999.\n\n");
                } else if (*ptr == 0x20) {
                    printf("\nTry not to enter spaces between numbers.\n\n");
                } else if (ptr == speed_kpm) {
                    printf("\nEnter a number only.\n\n");
                } else if (*ptr != '\0') {
                    printf("\nTry not to enter a text after a number.\n\n");
                } else {
                    double result = x / 1.609344;
                    printf("%f\n",result);
                    printf("Miles per hour\n");
                }
            }
		} else if (strcmp(sw, "hx") == 0) {
			char num [20];
            long int h;
            char *ptr;
            while(1) {
                printf("Enter a number m for main.\n");
                while(fgets(num,sizeof(num),stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
                num[strcspn(num,"\n")]=0;
                if(strlen(num) >= 19){
                flush();
                }
                if(strcmp(num, "m")==0){
                    break;
                }
                h = strtol(num,&ptr,10);
                if(h < 0  || h > 255){
                    printf("Enter a min of 0 max of 255.\n");
                } else if (*ptr == 0x20) {
                   printf("\nTry not to enter spaces between numbers.\n\n");
                }else if(ptr == num){
                    printf("\nEnter a number only.\n\n");
                }else if(*ptr != '\0'){
                    printf("\nDont enter a text after a number.\n\n");
                }else{
                    printf("\nThe hexadecimal number is: 0x%02lx or %02lx\n\n",h,h); 
                }
	        }	
		else if (strcmp(sw, "hxl") == 0) {
            char num [100];
            long int h;
            char *ptr;
            while(1) {
                printf("Enter a number x to exit.\n");
                while(fgets(num,sizeof(num),stdin) == NULL) {
                    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
                num[strcspn(num,"\n")]=0;
                if(strlen(num) >= 99){
                    flush();
                }
                if(strcmp(num, "x")==0){
                    break;
                }
                errno = 0;
                h = strtol(num,&ptr,10);
                if(errno == ERANGE){
                    printf("You entered to many characters.\n");
                } else if (*ptr == 0x20) {
                    printf("\nTry not to enter spaces between numbers.\n\n");
                }else if(ptr == num){
                    printf("\nEnter a number only.\n\n");
                }else if(*ptr != '\0'){
                    printf("\nDont enter a text after a number.\n\n");
                }else{
                    printf("\nThe hexadecimal number is: 0x%lx or %lx\n\n",h,h); 
                }
            }
        } else if (strcmp(sw, "lm") == 0) {
            char light_years [SIZE];
            char *ptr;
            long double x;  
            while(1) {
                printf("Enter a distance in light years.\n");
                while(fgets(light_years,SIZE,stdin) == NULL) {
				    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
                light_years[strcspn(light_years,"\n")]=0;
                if (strlen(light_years) >= MAX) {
                    flush();
                } 
                if (strcmp(light_years, "m")==0) {
                    break;
                }
                x = strtold(light_years, &ptr);
                if (x >= 99999999999999999 || x <= -9999999999999999) {
                    printf("\nEnter no more than 9999999999999999 or less than -9999999999999999.\n\n");
                } else if (*ptr == 0x20) {
                    printf("\nTry not to enter spaces betweeen numbers.\n\n");
                } else if (ptr == light_years) {
                    printf("\nEnter a number only.\n\n");
                } else if (*ptr != '\0') {
                    printf("\nTry not to enter a text after a number.\n\n");
                } else {
                long double result = x * 5878628192999.1;
                printf("%Lf\n",result);
                printf("miles\n");
                }
            }
	    } else if (strcmp(sw, "lmb") == 0) {
            char light_years [SIZE];
            char *ptr;
            double x;  
            while(1) {
                printf("Enter a distance in light years.\n");
                while(fgets(light_years,SIZE,stdin) == NULL) {
				    printf("\nInvalid input Try again.\n\n");
	                clearerr(stdin);
	            }
                light_years[strcspn(light_years,"\n")]=0;
                if (strlen(light_years) >= MAX) {
                    flush();
                } 
                if (strcmp(light_years, "m")==0) {
                    break;
                }
                x = strtold(light_years, &ptr);
                if (x >= 999999999999 || x <= -99999999999) {
                    printf("\nEnter no more than 99999999999 or less than -99999999999.\n\n");
                } else if (*ptr == 0x20) {
                    printf("\nTry not to enter spaces betweeen numbers.\n\n");
                } else if (ptr == light_years) {
                    printf("\nEnter a number only.\n\n");
                } else if (*ptr != '\0') {
                    printf("\nTry not to enter a text after a number.\n\n");
                } else {
                double result = x * 5878628192999.1;
                printf("%f\n",result);
                printf("miles\n");
                } 
	    }
        } else if (strcmp(sw, "lc") == 0 ) {
            printf("\n MIT License\n\n");

            printf(" Copyright (c) 2021-2025 Mitchell E Wise\n\n");

            printf(" Permission is hereby granted, free of charge, to any person obtaining a copy\n");
            printf(" of this software and associated documentation files (the \"Software\"), to deal\n");
            printf(" in the Software without restriction, including without limitation the rights\n");
            printf(" to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\n");
            printf(" copies of the Software, and to permit persons to whom the Software is\n");
            printf(" furnished to do so, subject to the following conditions:\n\n");

            printf(" The above copyright notice and this permission notice shall be included in all\n");
            printf(" copies or substantial portions of the Software.\n\n");

            printf(" THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n");
            printf(" IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n");
            printf(" FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\n");
            printf(" AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n");
            printf(" LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n");
            printf(" OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE\n");
            printf(" SOFTWARE.\n\n");
        } else if (strcmp(sw, "x") == 0) {
            break;
        } else if (strcmp(sw, "i") == 0) {
            ind();
        } else {
            printf("Enter a letter in index.\n\n");
        }
    }
  return 0;
}


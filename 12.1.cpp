#include<stdio.h>

int main()
{
int day, month;
const char *num1[] { "Firstty" , "Secondty" , "Thirdty" , "Fourthty" , "Fifthty" , "Sixthty" , "seventhty" , "eighthty" ,
                      "Ninethty" , "Tenth" , "Eleventh" , "twelfth" , "Thirteenth" , "Forteenth" , "Fifteenth" , "Sixteenth" ,
                      "Seventeenth" , "Eightteenth" , "Nineteenth" , "Twentieth" , "Twenty first" , "Twenty second", "Twenty third " ,
                      "Twenty fourth" , "Twenty fifth" , "Twenty sixth" , "Twenty seventh" , "Twenty eighth" , "Twenty nineth" ,
                      "Thirty" , "Thirty fifth" };

const char *num2[] { " january" , "february" , " march" , "april" , "may" , "june" , "july" , " august" ,
                       "september" , "october" , "november" , "december" };
   
   printf("Enter day:");
scanf("%d",&day);
printf("Enter month:");
scanf("%d",&month);
printf("%s %s", num1[day-1] , num2[month-1] );   
	return 0;

}


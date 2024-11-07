#include <stdio.h>
int main()
{
	//initializing variables
	float hours;
	float hourly_wages;
	float overtime;
	float total_overtime;
	float total_hours;
	
	//prompt the user to enter variables
	//entering hours worked per week
	printf("enter hours worked for the week :");
	scanf("%f",&hours);
	
	//using statement for hours over 40
	if(hours > 40){
		overtime = hours - 40;
	
	
	//calculating total_overtime and total_hours
	total_overtime = overtime * 0.5;
	total_hours = total_overtime + 40;
	}
	
	//prompt the user to enter hourly_wages
	printf("enter hourly_wages :");
	scanf("%f",&hourly_wages);
	
	//calculating gross_pay using hourly_wages and total hours
	//declaring variable
	float gross_pay;
	gross_pay = total_hours * hourly_wages;
	printf("%.2f\n",gross_pay);
	
	//calculating net_tax
	//declarinmg variable
	float tax1;
	float tax2;
	float net_pay;
	
	//using statement
	if(gross_pay == 600){
		tax1 = 600 * 0.15;
		net_pay = gross_pay - tax1;
		printf("%.2f\n",net_pay);
	}
		
	
	if(gross_pay > 600){
		tax2 = (gross_pay - 600) * 0.2;
		net_pay =gross_pay - (tax2 + tax1);
		printf("%.2f",net_pay);
	}
		
	
	
	return 0;
}
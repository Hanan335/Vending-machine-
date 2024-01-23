
  
#include <stdio.h>

int main () {
	int	item_price;
	int	cents_paid;
	int u;
	int y;
	int d;
	int t;
	
	printf("Enter the item price:\n");
	scanf("%d",&item_price);
	if(item_price>=5&&item_price<=9995&&item_price%5==0){
	printf("Item price  : $%2d.%02d\n",item_price/100,item_price%100);
	}
	else{
   if(item_price<5){
		printf("ERROR: Price must be greater than or equal to 5\n");
		
		
	}
    if (item_price>9995)
	{
printf("ERROR: Price must be less than or equal to 9995\n");

	}
	 if(item_price%5!=0)
	{
printf("ERROR: Price must be a multiple of 5\n");
}
if(item_price<5||item_price>9995||item_price%5!=0)
{
printf("Enter the item price:\n");
scanf("%d",&item_price);
printf("Item price  : $%2d.%02d\n",item_price/100,item_price%100);
}
};
printf("What coin is deposited?  Must be one of 200, 100, 25, 10, 5\n");
scanf("%d",&cents_paid);

while(cents_paid!=200&&cents_paid!=100&&cents_paid!=25&&cents_paid!=10&&cents_paid!=5){
printf("ERROR: Input must be one of 200, 100, 25, 10, 5\n");
printf("Amount paid : $ 0.00\n");
printf("What coin is deposited?  Must be one of 200, 100, 25, 10, 5\n");
scanf("%d",&cents_paid);
}	
if(cents_paid<item_price){
printf("Amount paid : $%2d.%02d\n",cents_paid/100,cents_paid%100);
};
while(cents_paid<item_price){
printf("What coin is deposited?  Must be one of 200, 100, 25, 10, 5\n");
scanf("%d",&u);
cents_paid=cents_paid+u;
if(cents_paid<item_price){
printf("Amount paid : $%2d.%02d\n",cents_paid/100,cents_paid%100); 
};
};
d=cents_paid-item_price;
printf("Amount paid : $%2d.%02d\n",cents_paid/100,cents_paid%100);
printf("Item price  : $%2d.%02d\n",item_price/100,item_price%100);
printf("Change given: $%2d.%02d\n",d/100,d%100);
printf("Quarters    : %d\n",d/25);
 t=d%25;
printf("Dimes       : %d\n",t/10);
 y=t%10;
printf("Nickels     : %d\n",y/5);
	return 0;
}

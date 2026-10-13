//#include<stdio.h>
//
//int main(){
//	int lim,end,x,y,i,j;
//	printf("enter 1st number ");
//	scanf("%d",&x);
//	printf("enter two number ");
//	scanf("%d",&y);
//	if(x<y){
//	lim = y;
//	end = x;
//	}
//	else{
//	lim = x;
//	end = y; 
//	}
//	i = lim;
//	
//	for(i=lim;i>=end;i--){
//		
//		for(j=2;j<i;j++){
//			if(i%j==0){
//			continue;	
//			}
//			}
//		if(j==i)
//			 printf("%d is prime\n",j);
//		}
//	}
//	
//#include<stdio.h>
//
//int main(){
//	int lim,i,j;
//	
//	printf("enter the limit : ");
//	scanf("%d",&lim);
//	
//	for(i=1;i<=lim;i++){
//		if(i%25!=0){
//			continue;
//		}
//		else printf("%d\n",i);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>

//int main(){
//	int i;
//	float x;
//	while(1){
//		printf("enter the number ");
//		scanf("%f",&x);
//		
//		if(x<0){
//			continue;
//		}
//		
//		printf("square root of the number is = %f\n",sqrt(x));
//	}
//	
//	return 0;
//}
//}
//}
//#include<stdio.h>
//
//int main(){
//	char ch;
//	
//	printf("do you wnat to delete successfully");
//	scanf(" %c",&ch);
//	
//	switch(ch){
//		case 'Y': 
//		printf("deleted successfully");
//		
//		case 'y': 
//		printf("deleted successfully");
//		
//		case 'N':
//		printf("delete cancelled");
//		
//		case 'n':
//		printf("delete cancelled");
//		
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main(){
//	int cost,x;
//	float dis,newe;
//	
//	printf("enter total amount : ");
//	scanf("%d",&cost);
//	x = cost;
//	switch(cost>=000 || cost<=4000){
//		case 1:	
//		dis = 0.2 * cost;
//		newe = x - dis;	
//	}
//	
//	switch(cost>4000 || cost<=6000){
//		case 1:	
//		dis = 0.3 * cost;
//		newe = x - dis;	
//	}
//	
//	switch(cost>6000){
//		case 1:	
//		dis = 0.2 * cost;
//		newe = x - dis;	
//	}
//	
//	printf("actual amount is = %d\nsaved is =%f\namount after discount is =%f",x,dis,newe);
//	return 0;
//}
//#include<stdio.h>
//
//int main(){
//	char ch;
//	int size;
//	printf("you have two choices black or white\nand also two sizes 1 or 2\n");
//	printf("enter the character : ");
//	scanf(" %c",&ch);
//	printf("enter size of the coffe : ");
//	scanf("%d",&size);
//	switch((ch!='B' || ch!='b' || ch!='W' || ch!='w') && (size!=1 || size!=2)){
//    case 1:
//	printf("invalid inputs");}
//	
//	
//	switch((size==1 || size==2) && (ch=='b' || ch=='B')){
//	case 1:	
//	printf("OPERATION   BLACK COFFE\nput water   20mins\nsugar    20mins\nmix well   25mins\nadd coffe    15mins\nadd milk    15mins\nmix well    25mins");
//	}
//	
//	switch((size==1 || size==2) && (ch=='w' || ch=='W')){
//	case 1:	
//	printf("OPERATION   WHITE COFFE\nput water   15mins\nsugar    15mins\nmix well   20mins\nadd coffe    2mins\nadd milk    4mins\nmix well    20mins");
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//
//int main(){
//	int x;
//	printf("enter the number : ");
//	scanf("%d",&x);
//	
//	x = x & ~(1 << 3);
//	x = x & ~(1 << 6);
//	
//	printf("%d",x);
//	return 0;
//}
#include<stdio.h>

int main(){
//	int fact;
//	float i,j,num,ope,sum=0;
//	
//	printf("enter the number : ");
//	scanf("%f",&num);
////	if(num==1)
//	printf("not prime nor composite");
//	while(i<=num-1){
//		if(num%i==0){
//			printf("%d is not prime",num);
//			break;
//		}
//		i++;
//	}
//	if(i==num){
//		printf("%d is prime number",i);
//	}
//	return 0;
//}
//	for(i=2;i<=num-1;i++){
//		if(num%i==0){
//			printf("%d is not a prime number ",num);
//			break;
//		}
//	}
//	if(i==num)
//	printf("%d is prime number",num);
//
//	return 0;
//}

//for(i=1;i<=num;i++){
//	fact = 1;
//	for(j=1;j<=i;j++){
//		fact = fact * j;
//	}
//	ope = i / fact;
//	sum = sum + ope;
//}
//	printf("%f",sum);
//	
//	return 0;
//}

int a = 3;
printf("%d",a++,a*3);

return 0;

}

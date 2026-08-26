// write a program to  grade of a student given his mark
#include <stdio.h>
int main() {
	int marks;
	printf("Enter ur marks: ");
	scanf("%d", &marks);
	if (marks>=90 && marks<=100){
	    printf(" your marks are %d and u have got grade A", marks);
	}
    else if (marks>=80 && marks<90){
	    printf(" your marks are %d and u have got grade B", marks);
    }
	else if (marks>=70 && marks<80){
	    printf(" your marks are %d and u have got grade C", marks);
	}
	else if (marks>=60 && marks<70){
	    printf(" your marks are %d and u have got grade D", marks);
	}
	else if (marks>=50 && marks<60){
	    printf(" your marks are %d and u have got grade E", marks);
	}
	else{
	    printf(" your marks are %d and u have got grade F", marks);
	}
	return 0;
}
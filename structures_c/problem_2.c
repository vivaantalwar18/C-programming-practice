#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
}; 

void show(struct employee e); 


void show(struct employee e){
    printf("Code is %d\nSalary is %f\nName is %s\n", e.code, e.salary, e.name);
}

int main()
{
    struct employee e1;
    e1.code = 4511;
    strcpy(e1.name, "Vivaan");
    e1.salary = 59999999.99;
    show(e1);


    return 0;
}
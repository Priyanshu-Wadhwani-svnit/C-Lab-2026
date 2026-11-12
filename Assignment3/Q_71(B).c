#include <stdio.h>
struct student{
	int roll_no;
	char name[50];
	float marks;
};
typedef struct student Student;

void input(Student *ptr){
	printf("Enter Roll Number: ");
	scanf("%d",&ptr->roll_no);
	getchar();
	printf("Enter Name: ");
	gets(ptr->name);
	printf("Enter Marks: ");
	scanf("%f",&ptr->marks);
}

void display(Student st[]){
	int i=0;
	for (i=0;i<10;i++){
		if (st[i].marks>500){
			printf("\n%d\t%s\t%.2f",st[i].roll_no,st[i].name,st[i].marks);
		}
	}
}

int main(){
	Student s[10];
	Student* ptr = &s[0];
	int i;
	for (i=0;i<10;i++){
	input(ptr+i);}
	
	display(s);
		
	return 0;
}

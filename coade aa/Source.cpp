#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

using namespace std;
int n;
int i;

struct Person
{

	char name[100];
	int salary;
	int yearwork;
	float bonus;
	int price;
	int many;
	int work;
	float sum;
};

void displayData(Person);

int main()
{
	printf("how many people : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		Person p;

		printf("Enter name :");
		scanf("%s", &p.name);

		printf("how many product that you sale : ");
		scanf("%d", &p.many);

		printf("Enter salary :");
		scanf("%d", &p.salary);

		printf("Enter year work :");
		scanf("%d", &p.yearwork);

		printf("Enter product price : ");
		scanf("%d", &p.price);

		printf("\n");
		p.work = p.many * p.price;

		displayData(p);
		printf("\n");
		printf("-----------------------------\n");
	}

	return 0;
}

void displayData(Person p)
{
	printf("your name : %s\n", p.name);
	printf("your salary : %d	\n", p.salary);
	printf("your mouthly sale : %d		", p.work);

	if (p.yearwork >= 0)
	{
		if (p.yearwork <= 1)
		{
			p.bonus = p.work * 5 / 100;
			printf("your bonus : %f	", p.bonus);
		}
		else if (p.yearwork > 1 && p.yearwork <= 5)
		{
			p.bonus = p.work * 10 / 100;
			printf("your bonus : %f	", p.bonus);
		}
		else if (p.yearwork > 5 && p.yearwork <= 10)
		{
			p.bonus = p.work * 15 / 100;
			printf("your bonus : %f	", p.bonus);
		}
		else if (p.yearwork > 10)
		{
			p.bonus = p.work * 20 / 100;
			printf("your bonus : %f	", p.bonus);
		}
	}
	else {
		printf("error");
	}
	printf("\n");
	p.sum = p.salary + p.bonus;
	printf("your salary with bonus = %f\n", p.sum);
}

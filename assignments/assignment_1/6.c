#include <stdio.h>

typedef struct {
	int year;
	int month;
	int day;
} Date;

typedef struct {
	char *name;
	int year;
	Date dateOfBirth;
	char sex;
	float marks;
	char grade;
	char *discipline;
} Student;

char findGrade(float marks);

int main()
{
	
	// create students
	Student silva = {"Silva", 2, {1987, 1, 12}, 'M', 78, findGrade(78)};
	Student janaka = {"Janaka", 1, {1989, 1, 11}, 'M', 34, findGrade(34)};
	Student muru = {"Muru", 3, {1989, 1, 9}, 'M', 29, findGrade(29)};
	Student vishmi = {"Vishmi", 1, {1989, 2, 9}, 'F', 54, findGrade(54)};

	// push students to an array
	Student students[4] = {silva, janaka, muru, vishmi};

	// display students' information
	printf("Name\tYear\tDate of Birth\tSex\tMarks\tGrade\n");
	int i;
	for (i = 0; i < 4; i++ ) {
		// current stduent

		// print name
		printf("%s\t", students[i].name);
		// year
		printf("%d\t", students[i].year);
		// date of birth
		printf("%d-%d-%d\t", students[i].dateOfBirth.day, students[i].dateOfBirth.month, students[i].dateOfBirth.year);
		// sex
		printf("%c\t", students[i].sex);
		// marks	
		printf("%.2f\t", students[i].marks);
		// grade
		printf("%c\t", students[i].grade);

		// newline
		printf("\n");
	}

	return 0;
}

/* function that calculate grades */
char findGrade(float marks)
{
	char grade;

	if (marks >= 80)
		grade = 'A';
	else if (marks > 64)
		grade = 'B';
	else if (marks > 49)
		grade = 'C';
	else if (marks > 34)
		grade = 'D';
	else
		grade = 'E';

	return grade;
}
			

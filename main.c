#include <stdio.h>
#include <stdlib.h>

#include "Grader.H"

int main()
{
    //float data[MAX_GRADES] = {78.8F,99.3F,105.F,89.9F,37.F};
    float data[MAX_GRADES];
    int i = 0;

    while (i < MAX_GRADES)
    {
        printf("Enter a grade: ");

        float grade;
        scanf("%f", &grade);

        data[i] = grade;

        i++;
    }

    assignShowGrade(data);

    //printf("Hello world!\n");
    return 0;
}

// 2.	WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).

# include <stdio.h>

int main()
{

    float weight, height, bmi;
    printf("Enter your weight in kgs:\n");
    scanf("%f", &weight);
    printf("Enter your height in mts:\n");
    scanf("%f", &height);

    if (weight <= 0 || height <= 0) {
        printf("Invalid input. Weight and height must be positive numbers.\n");
        return 1;
    }

    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5)
        printf("You are underweight.\n");
    else if (bmi < 25)
        printf("You have a normal weight.\n");
    else if (bmi < 30)
        printf("You are overweight.\n");
    else
        printf("You are obese.\n");

    return 0;
}
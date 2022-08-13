#include <stdio.h>

float CalcBmi(float weight, float height);
void PrintMessage(float bmi);

void main()
{
    float weight, height, bmi;

    printf("体重を入力して下さい。\n");
    scanf("%f", &weight);
    printf("身長を入力して下さい。\n");
    scanf("%f", &height);

    bmi = CalcBmi(weight, height);
    PrintMessage(bmi);
}

float CalcBmi(float weight, float height)
{
    return weight / (height * height) * 10000;
}

void PrintMessage(float bmi)
{
    printf("あなたのBMIは%.2fで、", bmi);

    if (bmi < 18.5f)
        printf("低体重です。\n");
    else if (bmi < 25.0f)
        printf("通常体重です。\n");
    else if (bmi < 30.0f)
        printf("肥満(1度)です。\n");
    else if (bmi < 35.0f)
        printf("肥満(2度)です。\n");
    else if (bmi < 40.0f)
        printf("肥満(3度)です。\n");
    else
        printf("肥満(4度)です。\n");
}
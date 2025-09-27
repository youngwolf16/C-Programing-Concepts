float cel(float far)
{
    float res = (float)5/9.0*(far-32);
    
    return res;
}

int main()
{
    float faren;
    scanf("%f",&faren);
    printf("Degree Celsius %f",cel(faren));
}
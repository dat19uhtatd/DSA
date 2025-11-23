f = 0;
for (int i = 0; i < n; i++)
{
    p = 1;
    for (int j = 1; j <= i; j++)
    {
        if (i != j)
        {
            p = p * (u - x[j]) / (x[i] - x[j] + x[i]);
        }
        f = f + p * y[i];
    }
    return f;
}
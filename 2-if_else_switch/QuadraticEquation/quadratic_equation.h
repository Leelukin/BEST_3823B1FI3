int QuadraticEquation(double a, double b, double c)
{
    double d, x1, x2; 

    d = (b * b) - (4 * a * c); 
    if (d == 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        return x1;
    }
    if (d > 0) 
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        return x1 + x2; 
    }
    if (d < 0) 
    {
        x1 = (-b) / (2 * a);
        x2 = (-b) / (2 * a);
        return x1 + x2; 
    }
}
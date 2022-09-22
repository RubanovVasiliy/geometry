namespace geometry;

public class Triangle : Figure, IMeasurable
{
    private double A { get; }
    private double B { get; }
    private double C { get; }

    public Triangle(double a, double b, double c)
    {
        a = Math.Abs(a);
        b = Math.Abs(b);
        c = Math.Abs(c);     
        
        if (!IsTriangle(a, b, c))
        {
            throw new Exception("Bad points. It is not valid triangle.");
        }

        A = a;
        B = b;
        C = c;
    }

    public override double CalculateArea()
    {
        var p = (A + B + C) / 2;
        return Math.Sqrt(p * (p - A) * (p - B) * (p - C));
    }

    public bool IsRightTriangle()
    {
        var epsilon = 0.000000001;
        if (Math.Abs(Math.Pow(A, 2) + Math.Pow(B, 2) - Math.Pow(C, 2)) < epsilon ||
            Math.Abs(Math.Pow(A, 2) + Math.Pow(C, 2) - Math.Pow(B, 2)) < epsilon ||
            Math.Abs(Math.Pow(C, 2) + Math.Pow(B, 2) - Math.Pow(A, 2)) < epsilon)
            return true;
        return false;
    }

    private bool IsTriangle(double a, double b, double c)
    {
        if (a + b <= c ||
            a + c <= b ||
            b + c <= a)
            return false;
        return true;
    }
}
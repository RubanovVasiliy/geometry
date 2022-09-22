namespace geometry;

public class Circle : Figure, IMeasurable
{
    private double  Radius { get; }

    public Circle(double radius)
    {
        Radius = Math.Abs(radius);
    }

    public override double CalculateArea()
    {
        return Math.PI * Math.Pow(Radius, 2);
    }
}
// See https://aka.ms/new-console-template for more information

using geometry;

var figures = new List<Figure>
{
    new Circle(6),
    new Triangle(3, 4, 5)
};

foreach (var f in figures)
{
    Console.WriteLine(f.CalculateArea());
}
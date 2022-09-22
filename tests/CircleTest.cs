using geometry;

namespace tests;

public class CircleTest
{
    [Fact]
    public void NegativeRadius()
    {
        var actual = new Circle(-5).CalculateArea();
        var expected = Math.Pow(5, 2) * Math.PI;
        Assert.Equal(expected, actual);
    }

    [Fact]
    public void ZeroRadius()
    {
        var actual = new Circle(0).CalculateArea();
        var expected = 0;
        Assert.Equal(expected, actual);
    }
}
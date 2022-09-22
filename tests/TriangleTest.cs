using geometry;

namespace tests;

public class TriangleTest
{
    [Fact]
    public void NegativeSide()
    {
        var a = -5;
        var b = 4;
        var c = 5;

        var actual = new Triangle(a, b, c).CalculateArea();
        var p = (a + b + c) / 2;
        var expected = Math.Sqrt(p * (p - a) * (p - b) * (p - c));
        Assert.Equal(expected, actual);
    }

    [Fact]
    public void InvalidSide()
    {
        try
        {
            new Triangle(3, 1, 1).CalculateArea();
        }
        catch (Exception e)
        {
            var expected = "Bad points. It is not valid triangle.";
            Assert.Equal(expected, e.Message);
        }
    }

    [Fact]
    public void RightTriangle()
    {
        var actual = new Triangle(3, 4, 5).IsRightTriangle();
        var expected = true;
        Assert.Equal(expected, actual);
    }

    [Fact]
    public void NotRightTriangle()
    {
        var actual = new Triangle(11, 8, 7).IsRightTriangle();
        var expected = false;
        Assert.Equal(expected, actual);
    }
}
using System;
abstract class Shape
{
    public abstract double CalculateArea();
    public abstract double CalculatePerimeter();
}
class Circle : Shape
{
    public double Radius { get; set; }
    public Circle(double radius)
    {
        Radius = radius;
    }
    public override double CalculateArea() => Math.PI * Math.Pow(Radius, 2);
    public override double CalculatePerimeter() => 2 * Math.PI * Radius;
}
class Triangle : Shape
{
    public double Side1 { get; set; }
    public double Side2 { get; set; }
    public double Side3 { get; set; }
    public Triangle(double side1, double side2, double side3)
    {
        Side1 = side1;
        Side2 = side2;
        Side3 = side3;
    }
    public override double CalculateArea()
    {
        double s = (Side1 + Side2 + Side3) / 2;
        return Math.Sqrt(s * (s - Side1) * (s - Side2) * (s - Side3));
    }
    public override double CalculatePerimeter() => Side1 + Side2 + Side3;
}
class Program
{
    static void Main()
    {
        Console.Write("Enter the radius of the circle: ");
        double circleRadius = double.Parse(Console.ReadLine());
        Circle circle = new Circle(circleRadius);
        Console.Write("Enter the length of side 1 of the triangle: ");
        double triangleSide1 = double.Parse(Console.ReadLine());
        Console.Write("Enter the length of side 2 of the triangle: ");
        double triangleSide2 = double.Parse(Console.ReadLine());
        Console.Write("Enter the length of side 3 of the triangle: ");
        double triangleSide3 = double.Parse(Console.ReadLine());
        Triangle triangle = new Triangle(triangleSide1, triangleSide2, triangleSide3);
        DisplayShapeInfo("Circle", circle);
        DisplayShapeInfo("Triangle", triangle);
    }
    static void DisplayShapeInfo(string shapeName, Shape shape)
    {
        Console.WriteLine($"{shapeName}:");
        Console.WriteLine($"Area: {shape.CalculateArea()}");
        Console.WriteLine($"Perimeter: {shape.CalculatePerimeter()}\n");
    }
}

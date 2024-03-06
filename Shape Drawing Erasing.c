using System;
class Shape
{
    public virtual void Draw() => Console.WriteLine("Drawing a shape");
    public virtual void Erase() => Console.WriteLine("Erasing a shape");
}
class Circle : Shape
{
    public override void Draw() => Console.WriteLine("Drawing a circle");
    public override void Erase() => Console.WriteLine("Erasing a circle");
}
class Triangle : Shape
{
    public override void Draw() => Console.WriteLine("Drawing a triangle");
    public override void Erase() => Console.WriteLine("Erasing a triangle");
}
class Square : Shape
{
    public override void Draw() => Console.WriteLine("Drawing a square");
    public override void Erase() => Console.WriteLine("Erasing a square");
}
class Program
{
    static void DisplayShapeInfo(Shape shape)
    {
        shape.Draw();
        shape.Erase();
        Console.WriteLine();
    }
    static void Main()
    {
        Console.WriteLine("Demonstrating polymorphism:");
        Console.WriteLine("---------------------------");
        DisplayShapeInfo(new Circle());
        DisplayShapeInfo(new Triangle());
        DisplayShapeInfo(new Square());
    }
}

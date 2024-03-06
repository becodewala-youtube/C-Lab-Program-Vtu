using System;
interface Resizable
{
    void ResizeWidth(int width);
    void ResizeHeight(int height);
}

class Rectangle : Resizable
{
    private int width;
    private int height;

    public Rectangle(int width, int height)
    {
        this.width = width;
        this.height = height;
    }

    public void Display() => Console.WriteLine($"Rectangle: Width = {width}, Height = {height}");

    public void ResizeWidth(int newWidth)
    {
        if (newWidth > 0)
        {
            width = newWidth;
            Console.WriteLine($"Resized Width to {newWidth}");
        }
        else
        {
            Console.WriteLine("Width must be greater than 0");
        }
    }

    public void ResizeHeight(int newHeight)
    {
        if (newHeight > 0)
        {
            height = newHeight;
            Console.WriteLine($"Resized Height to {newHeight}");
        }
        else
        {
            Console.WriteLine("Height must be greater than 0");
        }
    }
}

class Program
{
    static void Main()
    {
        Console.Write("Enter initial width and height of the rectangle: ");
        string[] initialDimensions = Console.ReadLine().Split();
        int initialWidth = int.Parse(initialDimensions[0]);
        int initialHeight = int.Parse(initialDimensions[1]);

        Rectangle rectangle = new Rectangle(initialWidth, initialHeight);

        Console.WriteLine("\nInitial state of the rectangle:");
        rectangle.Display();

        Console.Write("\nEnter width and height to resize: ");
        string[] resizeDimensions = Console.ReadLine().Split();
        int resizeWidth = int.Parse(resizeDimensions[0]);
        int resizeHeight = int.Parse(resizeDimensions[1]);

        rectangle.ResizeWidth(resizeWidth);
        rectangle.ResizeHeight(resizeHeight);

        Console.WriteLine("\nUpdated state of the rectangle:");
        rectangle.Display();
    }
}

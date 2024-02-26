using System;
class Complex
{
    public double Real { get; set; }
    public double Imaginary { get; set; }
    public Complex(double real, double imaginary)
    {
        Real = real;
        Imaginary = imaginary;
    }
    public void Display() => Console.WriteLine($"Complex Number: {Real} + {Imaginary}i");
    public static Complex operator +(Complex c1, Complex c2) =>
        new Complex(c1.Real + c2.Real, c1.Imaginary + c2.Imaginary);
}
class Program
{
    static void Main()
    {
        Console.Write("Enter the first complex number (real and imaginary): ");
        string[] input1 = Console.ReadLine().Split();
        Complex complex1 = new Complex(double.Parse(input1[0]), double.Parse(input1[1]));
        Console.Write("Enter the second complex number (real imaginary): ");
        string[] input2 = Console.ReadLine().Split();
        Complex complex2 = new Complex(double.Parse(input2[0]), double.Parse(input2[1]));
        Complex sum = complex1 + complex2;
        Console.WriteLine("\nResult of addition:");
        complex1.Display();
        Console.WriteLine("   +");
        complex2.Display();
        Console.WriteLine("   =");
        sum.Display();
    }
}

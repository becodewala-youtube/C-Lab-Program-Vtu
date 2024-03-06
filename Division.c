using System;
class Program
{
    static void Main()
    {
        DivisionByZeroExceptionExample();
        IndexOutOfRangeExceptionExample();
    }
    static void DivisionByZeroExceptionExample()
    {
        try
        {
            Console.Write("Enter numerator: ");
            int numerator = int.Parse(Console.ReadLine());
            Console.Write("Enter denominator: ");
            int denominator = int.Parse(Console.ReadLine());
            int result = numerator / denominator;
            Console.WriteLine("Result of division: " + result);
        }
        catch (DivideByZeroException ex)
        {
            Console.WriteLine("Division by Zero Exception: " + ex.Message);
        }
        catch (FormatException)
        {
            Console.WriteLine("Invalid input. Please enter valid integers for numerator and denominator.");
        }
    }
    static void IndexOutOfRangeExceptionExample()
    {
        try
        {
            Console.Write("Enter index to access in array: ");
            int index = int.Parse(Console.ReadLine());
            int[] numbers = { 1, 2, 3, 4, 5 };
            int value = numbers[index];
            Console.WriteLine("Value at index: " + value);
        }
        catch (IndexOutOfRangeException ex)
        {
            Console.WriteLine("Index Out of Range Exception: " + ex.Message);
        }
        catch (FormatException)
        {
            Console.WriteLine("Invalid input. Please enter a valid integer for the array index.");
        }
    }
}

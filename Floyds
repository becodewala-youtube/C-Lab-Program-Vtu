using System;
class Program
{
    static void Main()
    {
        Console.Write("Enter the number of rows for Floyd's Triangle: ");
        int numRows = int.Parse(Console.ReadLine());
        int[][] floydsTriangle = GenerateFloydsTriangle(numRows);
        Console.WriteLine("Floyd's Triangle:");
        PrintFloydsTriangle(floydsTriangle);
    }
    static int[][] GenerateFloydsTriangle(int numRows)
    {
        int[][] triangle = new int[numRows][];
        int count = 1;
        for (int i = 0; i < numRows; i++)
        {
            triangle[i] = new int[i + 1];
            for (int j = 0; j <= i; j++)
            {
                triangle[i][j] = count++;
            }
        }
        return triangle;
    }
    static void PrintFloydsTriangle(int[][] triangle)
    {
        int numRows = triangle.Length;
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j < triangle[i].Length; j++)
            {
                Console.Write($"{triangle[i][j],4} ");
            }
            Console.WriteLine();
        }
    }
}

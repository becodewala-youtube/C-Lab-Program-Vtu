using System;
class Program
{
    static void Main()
    {
        Console.Write("Enter the number of rows for Pascal's Triangle: ");
        int numRows = int.Parse(Console.ReadLine());
        int[][] pascalsTriangle = GeneratePascalsTriangle(numRows);
        Console.WriteLine("Pascal's Triangle:");
        PrintPascalsTriangle(pascalsTriangle);
    }
    static int[][] GeneratePascalsTriangle(int numRows)
    {
        int[][] triangle = new int[numRows][];
        for (int i = 0; i < numRows; i++)
        {
            triangle[i] = new int[i + 1];
            triangle[i][0] = 1;
            for (int j = 1; j < i; j++)
            {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            triangle[i][i] = 1;
        }
        return triangle;
    }
    static void PrintPascalsTriangle(int[][] triangle)
    {
        int numRows = triangle.Length;
        for (int i = 0; i < numRows; i++)
        {
            int numSpaces = numRows - i - 1;
            for (int s = 0; s < numSpaces; s++)
            {
                Console.Write("   ");
            }
            for (int j = 0; j <= i; j++)
            {
                Console.Write($"{triangle[i][j],6}   ");
            }
            Console.WriteLine();
        }
    }
}

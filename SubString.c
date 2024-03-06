using System;
class Program
{
    static void Main()
    {
        Console.Write("Enter a string: ");
        string inputString = Console.ReadLine();
        Console.WriteLine("All substrings of the given string are:");
        ListAllSubstrings(inputString);
    }
    static void ListAllSubstrings(string str)
    {
        int length = str.Length;
        for (int start = 0; start < length; start++)
        {
            for (int end = start; end < length; end++)
            {
                string substring = str.Substring(start, end - start + 1);
                Console.WriteLine(substring);
            }
        }
    }
}

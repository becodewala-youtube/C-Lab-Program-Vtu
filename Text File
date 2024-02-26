using System;
using System.IO;
class Program
{
    static void Main()
    {
        try
        {
            Console.Write("Enter the source file path: ");
            string sourceFilePath = Console.ReadLine();
            Console.Write("Enter the destination file path: ");
            string destinationFilePath = Console.ReadLine();
            string fileContents = ReadFile(sourceFilePath);
            WriteFile(destinationFilePath, fileContents);
            Console.WriteLine("File contents copied successfully.");
        }
        catch (Exception ex)
        {
            Console.WriteLine($"An error occurred: {ex.Message}");
        }
    }
    static string ReadFile(string filePath)
    {
        using (StreamReader reader = new StreamReader(filePath))
        {
            return reader.ReadToEnd();
        }
    }
    static void WriteFile(string filePath, string content)
    {
        using (StreamWriter writer = new StreamWriter(filePath))
        {
            writer.Write(content);
        }
    }
}

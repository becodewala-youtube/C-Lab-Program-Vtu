using System;
using System.Collections.Generic;
class Program
{
    static void Main()
    {
        Stack<int> myStack = new Stack<int>();
        while (true)
        {
            Console.WriteLine("\nChoose an option:");
            Console.WriteLine("1. Push");
            Console.WriteLine("2. Pop");
            Console.WriteLine("3. Display Stack");
            Console.WriteLine("4. Exit");
            Console.Write("Enter your choice: ");
            int choice = int.Parse(Console.ReadLine());
            switch (choice)
            {
                case 1:
                    Console.Write("Enter a value to push onto the stack: ");
                    myStack.Push(int.Parse(Console.ReadLine()));
                    break;
                case 2:
                    int poppedValue = myStack.TryPop(out int result) ? result : -1;
                    Console.WriteLine($"Popped {poppedValue} from the stack. Top element after                        
                                                       pop: {myStack.Count}");
                    break;
                case 3:
                    Console.WriteLine($"Current stack: {string.Join(" ", myStack)}");
                    break;
                case 4:
                    Environment.Exit(0);
                    break;
                default:
                    Console.WriteLine("Invalid choice. Please enter a valid option.");
                    break;
            }
        }
    }
}

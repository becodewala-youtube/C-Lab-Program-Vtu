using System;
public class ArmstrongExample
{
public static void Main(string[] args)
{
for (int number = 1; number <= 1000; number++)
{
if (IsArmstrongNumber(number))
{
Console.WriteLine($"{number} is an Armstrong Number.");
}
}
}
static bool IsArmstrongNumber(int n)
{
int originalNumber = n;
int sum = 0;
while (n > 0)
{
int digit = n % 10;
sum += digit * digit * digit;
n /= 10;
}
return originalNumber == sum;
}
}

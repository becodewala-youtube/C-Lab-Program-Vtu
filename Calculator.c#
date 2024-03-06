using System;
class Calculator
{
static void Main ()
{
Console.WriteLine("Simple Arithmetic Calculator");
Console.Write("Choose an operator (+, -, *, /, %) to perform the operation: ");
char operatorSymbol = char.Parse(Console.ReadLine());
Console.Write("Enter the first operand: ");
double operand1 = double.Parse(Console.ReadLine());
Console.Write("Enter the second operand: ");
double operand2 = double.Parse(Console.ReadLine());
double result = 0;
switch (operatorSymbol)
{
case '+':
result = operand1 + operand2;
break;
case '-':
result = operand1 - operand2;
break;
case '*':
result = operand1 * operand2;
break;
case '/':
if (operand2!= 0)
{
result = operand1 / operand2;
}
else
{
Console.WriteLine("Error: Division by zero is not allowed.");
return;
}
break;
case '%':
if (operand2!= 0)
{
result = operand1 % operand2;
}
else
{
Console.WriteLine("Error: Modulo by zero is not allowed.");
return;
}
break;
default:
Console.WriteLine("Error: Invalid operator.");
return;
}
Console.WriteLine($"Result: {operand1} {operatorSymbol} {operand2} = {result}");
}
}

using System;

public class Conditionals {
    static public void Main() {
        // control statements with if-else
        int x;
        Console.Write("Enter number: ");
        x = Convert.ToInt32(Console.ReadLine());
        if ( x % 2 == 0){
            Console.WriteLine($"the number {x} is even");
        } else {
            Console.WriteLine($"the number {x} is not even");
        }

        // control statements with switch
        Console.Write("Enter two integers separated by a space: ");
        string input = Console.ReadLine();
        string[] numbers = input.Split(' ');
        int a = Convert.ToInt32(numbers[0]);
        int b = Convert.ToInt32(numbers[1]);

        Console.Write("Enter the operation [ '+' or '-' or '*' or '/' ]: ");
        string operation = Console.ReadLine();
        switch (operation) {
            case "+":
                Console.WriteLine($"The sum of {a} and {b} is {a + b}");
                break;
            case "-":
                Console.WriteLine($"The difference of {a} and {b} is {a - b}");
                break;
            case "*":
                Console.WriteLine($"The product of {a} and {b} is {a * b}");
                break;
            case "/":
                Console.WriteLine($"The quotient of {a} and {b} is {a / b}");
                break;
            default:
                Console.WriteLine("Invalid operation");
                break;
        }
    }
}
using System;

public class Methods {
    static void HelloWorld(){
        Console.WriteLine("-- start HelloWord --");
        Console.WriteLine("Hello World");
        Greeting("Lucho");
        Console.WriteLine("-- end HelloWord --");
    }

    static void Greeting(string name){
        Console.WriteLine("-- start Greeting --");
        Console.WriteLine($"Hello {name}");
        Console.WriteLine("-- end Greeting --");
    }


    static double half(double n1, double n2){
        Console.WriteLine("-- start half --");
        double result = (n1 + n2) / 2;
        Console.WriteLine($"The half of {n1} and {n2} is {result}");
        Console.WriteLine("-- end half --");
        return result;
    }

    static public void Main() {
        Console.WriteLine("-- start Main --");
        HelloWorld();
        half(8.0, 5.0);
        Console.WriteLine("Hello, world!");
        Console.WriteLine("-- end Main --");
    }
}
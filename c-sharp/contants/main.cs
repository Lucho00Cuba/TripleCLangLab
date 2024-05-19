using System;

public class Contants {
    static public void Main() {
        int number = 1;
        Console.WriteLine("Number: " + number);
        number++;
        Console.WriteLine("Number: " + number);

        const int NUMBER = 1;
        Console.WriteLine("Number: " + NUMBER);
        // NUMBER = 3; // error
    }
}

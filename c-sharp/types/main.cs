using System;

public class Types {
    static public void Main() {
        int number = 1;
        float numberFloat = 1.0f;
        double numberDouble = 1.0;
        decimal numberDecimal = 1.0m;
        string word = "1";
        bool boolean = true;
        char letter = 'A';

        // printer values and types values
        Console.WriteLine("number: " + number + " type: " + number.GetType());
        Console.WriteLine("numberFloat: " + numberFloat + " type: " + numberFloat.GetType());
        Console.WriteLine("numberDouble: " + numberDouble + " type: " + numberDouble.GetType());
        Console.WriteLine("numberDecimal: " + numberDecimal + " type: " + numberDecimal.GetType());
        Console.WriteLine("numberString: " + word + " type: " + word.GetType());
        Console.WriteLine("numberBool: " + boolean + " type: " + boolean.GetType());
        Console.WriteLine("numberChar: " + letter + " type: " + letter.GetType());
    }
}

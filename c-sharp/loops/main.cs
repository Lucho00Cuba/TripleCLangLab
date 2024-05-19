using System;

public class Loops {
    static public void Main() {
        // loop with while
        Console.WriteLine("-- start while --");
        int i = 0;
        while (i <= 10) {
            Console.WriteLine(i);
            i++;
        }
        Console.WriteLine("-- end while --");

        // loop with do-while
        Console.WriteLine("-- start do-while --");
        do {
            Console.WriteLine(i);
            i++;
        } while (i <= 12);
        Console.WriteLine("-- end do-while --");

        // loop with for
        Console.WriteLine("-- start for --");
        for (int j = 0; j <= 10; j++) {
            Console.WriteLine(j);
        }
        Console.WriteLine("-- end for --");

        // loop with for (array)
        Console.WriteLine("-- start for (array) --");
        string[] names = { "John", "Mary", "Bob", "Alice" };
        for (int k = 0; k < names.Length; k++) {
            Console.WriteLine(names[k]);
        }
        Console.WriteLine("-- end for (array) --");

        // nested loops with an array of arrays
        Console.WriteLine("-- start nested loops --");

        int[][] matrix = { new int[] { 1, 2, 3 }, new int[] { 4, 5, 6} };
        for (int l = 0; l < matrix.Length; l++) {
            for (int m = 0; m < matrix[l].Length; m++) {
                Console.WriteLine(matrix[l][m]);
            }
        }

        int[,] numbers = { {7, 8, 9}, {10, 11, 12}, {13, 14, 15} };
        for (int l = 0; l < 3; l++) {
            for (int m = 0; m < 3; m++) {
                Console.WriteLine(numbers[l, m]);
            }
        }

        Console.WriteLine("-- end nested loops --");
    }
}

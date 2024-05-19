using System;

public class Exceptions {
    static public void Main() {
        try {
            int[] n = { 1, 2, 3, 4, 5};
            Console.WriteLine(n[7]);
        } catch(Exception e){
            Console.WriteLine(e);
        } finally {
            Console.WriteLine("FIN");
        }
    }
}
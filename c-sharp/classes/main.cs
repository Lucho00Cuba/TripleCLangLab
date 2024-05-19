using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

internal class Student {
    public string name;
    public int age;
    public double score;
    private string degree;
    public static int graduates;

    public Student(){
        name = "Unknown";
        age = 0;
        score = 0.0;
        degree = "Unknown";
    }

    public Student(string Name, int Age, double Score, string Choice){
        name = Name;
        age = Age;
        score = Score;
        Degree = Choice;
    }

    public bool Approved(){
        if (score >= 5.0){
            Console.WriteLine("approved");
            graduates++;
            return true;
        } else {
            Console.WriteLine("not approved");
            return false;
        }
    }

    public void Show(){
        Console.WriteLine("---");
        Console.WriteLine("Name: " + name);
        Console.WriteLine("Age: " + age);
        Console.WriteLine("Score: " + score);
        Console.WriteLine("Degree: " + degree);
        Console.WriteLine("---");
    }

    public string Degree {
        get {
            return degree;
        }
        set {
            if (value == "IT" || value == "Electronic"){
                degree = value;
            } else {
                degree = "Failed";
            }
        }
    }
}

internal class Animal {
    public void Eat(){
        Console.WriteLine("the animal eats");
    }
    public void Sleep(){
        Console.WriteLine("the animal sleeps");
    }
}

internal class Dog: Animal{
    public void Bark(){
        Console.WriteLine("the dog barks");
    }
}

public class Classes {
    static public void Main() {
        Student s1 = new Student();
        s1.name = "Bob";
        s1.age = 20;
        s1.score = 9.5;

        // printer values
        s1.Show();
        s1.Approved();

        Student s2 = new Student();

        // printer values
        s2.Show();
        s2.Approved();

        Student s3 = new Student("Alice", 21, 8.0, "ITA");

        // printer values
        s3.Show();
        s3.Approved();
        Console.WriteLine(s3.Degree);

        Console.WriteLine(Student.graduates);

        // inheritance
        Animal a1 = new Animal();
        a1.Eat();
        a1.Sleep();

        Dog d1 = new Dog();
        d1.Bark();
    }
}
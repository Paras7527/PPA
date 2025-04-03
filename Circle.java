package Marvellous;

public class Circle
{
    public float CircleArea(float R)
    {
        return 3.14f * R * R;
    }
}

// javac -d . Circle.java
// Dont execute this code directly


/*
 * (base) parasshivprasadkulkarni@Parass-MacBook-Air ~ % cd Desktop
(base) parasshivprasadkulkarni@Parass-MacBook-Air Desktop % cd PPA
(base) parasshivprasadkulkarni@Parass-MacBook-Air PPA % javac -d . Square.java
(base) parasshivprasadkulkarni@Parass-MacBook-Air PPA % javac -d . Circle.java
(base) parasshivprasadkulkarni@Parass-MacBook-Air PPA % javac PackageDemo1.java
(base) parasshivprasadkulkarni@Parass-MacBook-Air PPA % java PackageDemo1.java
Area of circle is : 346.185
Area of square is : 110.25
(base) parasshivprasadkulkarni@Parass-MacBook-Air PPA % 
 */
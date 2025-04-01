public class Base{
    public int A,B;

    public Base()
    {
        System.out.println("Inside Base Constructor");
    }

    public void fun()
    {
        System.out.println("Inside Base fun");
    }
}
class Derived extends Base      //class Derived : public Base
{
    public int x,y;

    public Derived()
    {
        System.out.println("Inside Derived Constructor");
    }

    public void gun()
    {
        System.out.println("Inside Derived gun");
    }
}
class SingleLevel 
{
    public static void main(String A[])
    {
        System.out.println("Inside main method");
        Derived dobj=new Derived();
        dobj.fun();
        dobj.gun();
    }
}
public class newClass{
    int a,b;
    public static void main(String args[]) {
        System.out.println("hello");

        newClass obj1 = new newClass();
        newClass obj2 = new newClass();
        newClass obj3 = new newClass();
        newClass obj4 = new newClass();
        newClass obj5 = new newClass();
        
        obj1.a = 5;
        obj1.b=6;

        System.out.println(obj1.a+obj1.b);

        obj2.a = 3;
        obj2.b=5;


        System.out.println(obj2.a+obj2.b);
    }
}
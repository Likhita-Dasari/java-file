//Demonstrate method/function overlaoding using inheritance in Java.
import java.*;


class parent{
    int a = 25;
    void overloadFunction(int a){
        System.out.println("i am parent's overloadFunction : "+a);
    }
}


class overload extends parent{
    String str1 = "likki";
    int a = 45;
    void overloadFunction(){
        System.out.println("i am child's function : "+ str1);
    }
    public static void main(String[] args){
        int a = 41;
        //String str1 = "likki";
        overload obj = new overload();
        obj.overloadFunction();
        obj.overloadFunction(a);

    }

}

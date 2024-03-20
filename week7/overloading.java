import java.util.*;

public class overloading {
    int a = 100;
    double d1;
    String name ;
    String str1 = "overloding";
    void addConcatDisplay(int a ,double d1){
        System.out.println("this is adding function of int and double: " + (a+d1));
    }
    void addConcatDisplay(String name, String str1){
        System.out.println("this is concatination function of name and str1:" + (name + str1));
    }
    void addConcatDisplay(){
        System.out.println("this function is used to display the function");
    }
    public static void main(String[] args){
        overloading obj = new overloading();
        obj.addConcatDisplay();
        obj.addConcatDisplay(12,67.89);
        obj.addConcatDisplay("pambuss"," is a snake");
    }
}

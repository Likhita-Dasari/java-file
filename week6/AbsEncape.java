
import java.util.Scanner;
 
 public class AbsEncap{
    private int  priVar;
    protected int proVar;
    public int pubVar;
    int priVal ;
    int proVal;
    int pubVal;

    void setVar(int priValue, int proValue,int pubValue){
        this.priVar = priValue;
        this.proVar = proValue;
        this.pubVar = pubValue;

    }
    void getVar(){
        priVal = this.priVar;
        proVal = this.proVar;
        pubVal = this.pubVar;
    }
    public static void main(String args[]){
        AbsEncap obj = new AbsEncap();
        obj.setVar(12, 15, 17);
        obj.getVar();
        System.out.println("The value of the private variable: " + obj.priVal);
        System.out.println("The value of the protected variable : "+ obj.proVal);;
        System.out.println("The value of the public variable: "+ obj.pubVal);
        
    }


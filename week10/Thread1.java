class Table{
void print(int num){
synchronized(this){
for(int i=1;i<=10;i++){
System.out.println(num+" * "+i+" = "+(num*i));
try{
Thread.sleep(40);
}catch(Exception e){
System.out.println(e);
}
}
}
}
}
class Thread1 extends Thread{
int num;
Table t=new Table();
Thread1(Table t,int num){
this.t=t;
this.num=num;
}
public void run(){
t.print(num);
}
}

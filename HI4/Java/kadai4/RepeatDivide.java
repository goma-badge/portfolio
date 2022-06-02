import java.util.Random;
import java.util.Scanner;

public class RepeatDivide{
    static final int MAX=1000;
    public static void main(String[]args){

        Random rnd=new Random();
        int r= rnd.nextInt(MAX);
        Scanner in =new Scanner(System.in);
        int val =r;
        System.out.println(val);

        while(true){
            try{
            System.out.print("Input integer :");
            String line =in.nextLine();
            val=val/Integer.parseInt(line);
            System.out.println(val);
            }catch(ArithmeticException e){
                System.out.println("算術計算で例外が発生しました");
            }catch(NumberFormatException e){
                System.out.println("入力の形式が正しくありません.");
            }
        }
    }
}

import java.util.Scanner;

class Sumtest{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);

		System.out.print("input number:");
		int x=in.nextInt();
		System.out.print("input number:");
		int y=in.nextInt();
		System.out.print("input number:");
		int z=in.nextInt();

		System.out.println("sum:"+(x+y+z));
		System.out.println("average:"+(String.format("%.1f",((float)(x+y+z)/3))));
		in.close();
	}
}



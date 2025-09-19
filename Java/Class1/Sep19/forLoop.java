import java.util.Scanner;
class Main{
	public static void main(String[] args){
		Scanner s=new Scanner(System.in);
		System.out.println("Enter starting number:");
		int start=s.nextInt();
		System.out.println("Enter ending value:");
		int end=s.nextInt();
		if (start==0 ||  end==0){
			System.out.println("Invalid input");
		}else{
		//loop
		for (int i=((start%2==0)?start:++start);i<=end;i=i+2){
			if (i%2==0){
				System.out.println(i);
			}
		} }
	}
}

import java.util.Scanner;
class StringInputGet{
	public static void main(String[] args){
                Scanner sc=new Scanner(System.in);
		System.out.println("Enter your name:");
		String name=sc.next();
		System.out.println("Enter your genre:");
		String genre=sc.next();
		System.out.println("My name is "+name+" and i love to read "+genre);
	}
}
		

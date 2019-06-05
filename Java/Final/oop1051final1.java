import java.util.Scanner;

class Fggame {
	
	int get_finger() {
		return ((int) (Math.random() * 3 + 1));
	}
}


public class oop1051final1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Fggame fgg = new Fggame();
		Scanner sc = new Scanner(System.in);
		int computer_finger = 0, user_finger = 0;
		System.out.print("1.剪刀, 2.石頭, 3布。請選擇：");
		user_finger = sc.nextInt();
		computer_finger = fgg.get_finger();
		switch (user_finger) {
		case 1:
			System.out.println("你出剪刀...");
			switch (computer_finger) {
			case 1:
				System.out.println("電腦出剪刀...");
				System.out.println("雙方平手");
				break;
			case 2:
				System.out.println("電腦出石頭...");
				System.out.println("電腦贏");
				break;
			case 3:
				System.out.println("電腦出布...");
				System.out.println("你贏了");
				break;
			}			
			break;
		case 2:
			System.out.println("你出石頭...");
			switch (computer_finger) {
			case 1:
				System.out.println("電腦出剪刀...");
				System.out.println("你贏了");
				break;
			case 2:
				System.out.println("電腦出石頭...");
				System.out.println("雙方平手");
				break;
			case 3:
				System.out.println("電腦出布...");
				System.out.println("電腦贏");
				break;
			}			
			break;
		case 3:
			System.out.println("你出布...");
			switch (computer_finger) {
			case 1:
				System.out.println("電腦出剪刀...");
				System.out.println("電腦贏");
				break;
			case 2:
				System.out.println("電腦出石頭...");
				System.out.println("你贏了");
				break;
			case 3:
				System.out.println("電腦出布...");
				System.out.println("雙方平手");
				break;
			}			
			break;
		}
	}	
}

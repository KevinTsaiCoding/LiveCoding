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
		System.out.print("1.�ŤM, 2.���Y, 3���C�п�ܡG");
		user_finger = sc.nextInt();
		computer_finger = fgg.get_finger();
		switch (user_finger) {
		case 1:
			System.out.println("�A�X�ŤM...");
			switch (computer_finger) {
			case 1:
				System.out.println("�q���X�ŤM...");
				System.out.println("���襭��");
				break;
			case 2:
				System.out.println("�q���X���Y...");
				System.out.println("�q��Ĺ");
				break;
			case 3:
				System.out.println("�q���X��...");
				System.out.println("�AĹ�F");
				break;
			}			
			break;
		case 2:
			System.out.println("�A�X���Y...");
			switch (computer_finger) {
			case 1:
				System.out.println("�q���X�ŤM...");
				System.out.println("�AĹ�F");
				break;
			case 2:
				System.out.println("�q���X���Y...");
				System.out.println("���襭��");
				break;
			case 3:
				System.out.println("�q���X��...");
				System.out.println("�q��Ĺ");
				break;
			}			
			break;
		case 3:
			System.out.println("�A�X��...");
			switch (computer_finger) {
			case 1:
				System.out.println("�q���X�ŤM...");
				System.out.println("�q��Ĺ");
				break;
			case 2:
				System.out.println("�q���X���Y...");
				System.out.println("�AĹ�F");
				break;
			case 3:
				System.out.println("�q���X��...");
				System.out.println("���襭��");
				break;
			}			
			break;
		}
	}	
}

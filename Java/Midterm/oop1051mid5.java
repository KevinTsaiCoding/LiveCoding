
class Students {
	private int num = 3;
	String[] sname = new String[num];
	int[] chi_score = new int[num];
	int[] eng_score = new int[num];
	int[] math_score = new int[num];
	Students() {
		sname[0] = "趙一";
		chi_score[0] = 60;
		eng_score[0] = 50;
		math_score[0] = 75;
		sname[1] = "錢二";
		chi_score[1] = 80;
		eng_score[1] = 60;
		math_score[1] = 43;
		sname[2] = "孫三";
		chi_score[2] = 75;
		eng_score[2] = 66;
		math_score[2] = 80;				
	}
	public int get_num () {
		return num;
	}
	public String get_name(int index) {
		return sname[index];
	}
	public int get_chiscore(int index) {
		return chi_score[index];
	}
	public int get_engscore(int index) {
		return eng_score[index];
	}
	public int get_mathscore(int index) {
		return math_score[index];
	}	
}

public class oop1051mid5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Students student = new Students();

		System.out.println(student.get_name(0));
		System.out.println(student.get_chiscore(0));
		System.out.println(student.get_engscore(0));
		System.out.println(student.get_mathscore(0));
		
	}

}

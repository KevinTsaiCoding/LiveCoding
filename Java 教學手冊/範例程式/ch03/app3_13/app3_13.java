// app3_13, ����L��J���
import java.util.Scanner;     // ���JScanner���O
public class app3_13
{
   public static void main(String args[])
   {
     Scanner scn=new Scanner(System.in);  // �ŧiScanner���O������
     String name;
     int age;

     System.out.print("What's your name? ");
     name=scn.nextLine();     // ��J�r��
     System.out.print("How old are you? ");
     age=scn.nextInt();       // ��J���

     System.out.print("Hi, "+name+", you're ");
     System.out.println(age+" years old.");
   }
}

/* app3_13 OUTPUT-------------------
What's your name? Junie Hong
How old are you? 6
Hi, Junie Hong, you're 6 years old.
----------------------------------*/
// app7_11, �Q�Τ޼ƭӼƪ����P�Ӧh��method���d��
public class app7_11
{
   public static void main(String args[])
   {
      star();     // �I�s11~14��ҩw�q��star() method
      star(7);       // �I�s16~21��ҩw�q��star() method
      star('@',9);   // �I�s23~28��ҩw�q��star() method
   }

   public static void star()     // �S���޼ƪ�star() method
   {
      star(5);       // �I�s16~21��ҩw�q��star()�A�öǤJ���5
   }

   public static void star(int n)      // ���@�Ӥ޼ƪ�star() method
   {
      for(int i=0;i<n;i++)
         System.out.print("*");
      System.out.println();
   }

   public static void star(char ch, int n) // ����Ӥ޼ƪ�star() method
   {
      for(int i=0;i<n;i++)
         System.out.print(ch);
      System.out.println();
   }
}
// app7_2, ²�檺�d��--method���޼ƻP�Ǧ^��
public class app7_2
{
   public static void main(String args[])
  {
     int i;    // �ŧi����ܼ�i�A���ܼƪ����Ľd��Ȥ��main() method
     i=star(9);   // �ǤJ9��star()�A�åHi�����Ǧ^���ƭ�
     System.out.println(i + " stars printed");
  }

  public static int star(int n)  // star() method
  {
     int i;    // �ŧi����ܼ�i�A���ܼƪ����Ľd��Ȥ��star() method
     for(i=1;i<=2*n;i++)
        System.out.print("*");   // �L�X2*n�ӬP��
     System.out.print("\n");     // ����
     return 2*n;              // �Ǧ^���2*n
  }
}

/* app7_2 OUTPUT------
******************
18 stars printed
--------------------*/
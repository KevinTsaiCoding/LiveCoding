// app7_3, �p�����ι﨤�u������
public class app7_3
{
   public static void main(String args[])
  {
     double num;
     num=show_length(8,4);  // �ǤJ8�P4��Ӥ޼ƨ�show_length()��
     System.out.println("length = "+num);
  }

  public static double show_length(int m, int n)
  {
     return Math.sqrt(m*m+n*n);  // �Ǧ^�﨤�u����
  }
}

/* app7_3 OUTPUT-----------
length = 8.94427190999916
-------------------------*/
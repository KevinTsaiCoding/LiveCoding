// app7_9, ²�檺���jmethod
public class app7_9
{
   public static void main(String args[])
  {
     System.out.println("1*2*...*4="+fac(4));
  }
  public static int fac(int n)   // fac() method
  {
     if(n==0)                    // �]�w�פ����
        return 1;
     else
        return n*fac(n-1);       // ���j�p��
  }
}

/* app7_9 OUTPUT----
1*2*...*4=24
------------------*/
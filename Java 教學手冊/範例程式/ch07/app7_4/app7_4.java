// app7_4, method�ǭȪ��d��
public class app7_4
{
   public static void main(String args[])
  {
     int num=5;
     add10(num);        // �I�sadd10(),�öǻ�num
     System.out.println("in main(), num = "+num);
  }

  public static void add10(int value)
  {
     value=value+10;    // �Nvalue���ȥ[10����A�]�^��value
     System.out.println("in add10(), value = "+value);
  }
}

/* app7_4 OUTPUT--------
in add10(), value = 15
in main(), num = 5
----------------------*/
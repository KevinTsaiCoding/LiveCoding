// app4_4, ���W�B��l�u++�v
public class app4_4
{
   public static void main(String args[])
   {
      int a=5,b=5,c;

      System.out.println("a="+a+", b="+b);  // �L�Xa�Bb
      c=a++;
      System.out.println("c="+c+", a="+a);  // �L�Xa++
      c=++b;
      System.out.println("c="+c+", b="+b);  // �L�X++b
   }
}

/* app4_4 OUTPUT------------
a=5, b=5
c=5, a=6
c=6, b=6
---------------------------*/
// app5_10, switch�ԭz
public class app5_10
{
   public static void main(String args[])
   {
      int a=50,b=20;
      char oper='*';

      switch (oper)
      {
         case '+':         // �L�Xa+b
            System.out.println(a+"+"+b+"="+(a+b));
            break;
         case '-':         // �L�Xa-b
            System.out.println(a+"-"+b+"="+(a-b));
            break;
         case '*':         // �L�Xa*b
            System.out.println(a+"*"+b+"="+(a*b));
            break;
         case '/':         // �L�Xa/b
            System.out.println(a+"/"+b+"="+((float)a/b));
            break;
         default:          // �L�X�r��
            System.out.println("Unknown expression!!");
     }
  }
}

/* app5_10 OUTPUT------------
50*20=1000
---------------------------*/
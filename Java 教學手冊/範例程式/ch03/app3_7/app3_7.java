// app3_7, �C�L����ǦC
public class app3_7
{
   public static void main(String args[])
   {
      char ch1='\"';          // �Nch1�]�Ȭ�\"
      char ch2='\74';         // �H�K�i��ȳ]�w�r���ܼ�ch2
      char ch3='\u003e';      // �H16�i��ȳ]�w�r���ܼ�ch3

      System.out.println(ch1+"Time flies."+ch1);
      System.out.println("\"Time is money!\"");
      System.out.println(ch2+"Tomorrow never comes"+ch3);
   }
}

/* app3_7 OUTPUT------------
"Time flies."
"Time is money!"
<Tomorrow never comes>
---------------------------*/
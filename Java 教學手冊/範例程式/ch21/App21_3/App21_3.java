// App21_3, ²�檺applet�{��
import java.awt.*;
import java.applet.Applet;

public class App21_3 extends Applet
{
   public void paint(Graphics g)
   {
       g.drawString(getParameter("str1"),30,40); // ���oHTML�̪�str1�r��
       g.drawString(getParameter("str2"),30,60); // ���oHTML�̪�str2�r��
   }
}
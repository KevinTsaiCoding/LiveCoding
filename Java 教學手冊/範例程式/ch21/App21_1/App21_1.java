// App21_1, ²�檺applet�{��
import java.awt.*;
import java.applet.Applet;          // ���JApplet���O

public class App21_1 extends Applet    // App21_1�l�ͦ�Applet���O
{
   public void paint(Graphics g)
   {
       g.setColor(Color.blue);      // �]�wø���C�⬰�Ŧ�
       g.fillOval(30,30,50,50);     // ø�X��Ψö��Ŧ�
       g.setColor(Color.orange);    // �]�wø���C�⬰���
       g.fillOval(60,40,90,90);     // ø�X��Ψö񺡾��
   }
}

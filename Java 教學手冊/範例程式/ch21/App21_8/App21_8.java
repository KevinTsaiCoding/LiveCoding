// App21_8, �bapplet�̸��J����
import java.awt.*;
import java.awt.event.*;
import java.applet.Applet;

public class App21_8 extends Applet
{
   Image img;                 // �ŧiImage���O���A���ܼ�img

   public void init()
   {
        img=getImage(getCodeBase(),"flower.jpg");        // ���J����
   }

   public void paint(Graphics g)
   {
      g.drawImage(img,20,20,this);  // �Nimg�e�bapplet�W
   }
}

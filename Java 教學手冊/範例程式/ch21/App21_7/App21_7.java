// App21_7, ���ƹ��k��ø�X���
import java.awt.*;
import java.awt.event.*;
import java.applet.Applet;

public class App21_7 extends Applet implements MouseListener
{
   int x,y;                      // �ƹ����Ъ�x�By�y��
   boolean clicked=false;

   public void init()
   {
        this.addMouseListener(this);   // �]�wapplet���ۤv��������ť��
   }
   public void mouseClicked(MouseEvent e)
   {
      clicked=true;
      x=e.getX();                // ���o�ƹ����U���I��x�y��
      y=e.getY();                // ���o�ƹ����U���I��y�y��
      update(getGraphics());           // �M��ø�ϰϡA�M�᭫ø
   }
   public void paint(Graphics g)
   {
        if(clicked)
        {
           g.setColor(Color.pink);           // �]�w�C�⬰������
           g.fillOval(x-20,y-20,40,40);      // �H���U����m�����ø�X���
        }
   }
      public void mouseEntered(MouseEvent e){}
      public void mouseExited(MouseEvent e){}
      public void mousePressed(MouseEvent e){}
      public void mouseReleased(MouseEvent e){}
}

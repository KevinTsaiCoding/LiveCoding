// app20_10, �즲�ƹ�ø��
import java.awt.*;
import java.awt.event.*;
public class app20_10 extends Frame implements MouseMotionListener,MouseListener
{
   static app20_10 frm=new app20_10();
   int x1,x2,y1,y2;
   public static void main(String args[])
   {
      frm.setTitle("Free drawing");
      frm.setSize(200,150);
      frm.addMouseListener(frm);    // �]�wMouseListener
      frm.addMouseMotionListener(frm); // �]�wMouseMotionListener
      frm.setVisible(true);
   }
   public void mousePressed(MouseEvent e)
   {
      x1=e.getX();   // ���o�ƹ����U�ɪ�x�y�� (ø�ϰ_�l�I��x�y��)
      y1=e.getY();   // ���o�ƹ����U�ɪ�y�y�� (ø�ϰ_�l�I��y�y��)
   }
   public void mouseDragged(MouseEvent e)
   {
      Graphics g=getGraphics();
      x2=e.getX();               // ���o�즲�ƹ��ɪ�x�y��
      y2=e.getY();               // ���o�즲�ƹ��ɪ�y�y��
      g.drawLine(x1,y1,x2,y2);      // ø�X(x1,y1)��(x2,y2)���s�u
      x1=x2;                  // ��sø�ϰ_�l�I��x�y��
      y1=y2;                  // ��sø�ϰ_�l�I��y�y��
   }
   public void mouseMoved(MouseEvent e){}
   public void mouseReleased(MouseEvent e){}
   public void mouseEntered(MouseEvent e){}
   public void mouseExited(MouseEvent e){}
   public void mouseClicked(MouseEvent e){}
}

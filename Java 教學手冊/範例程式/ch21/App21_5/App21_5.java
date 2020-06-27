// App20_1, 簡單的applet程式
import java.awt.*;
import java.applet.Applet;

public class App21_5 extends Applet
{
   public void init()               // init() 函數
   {
       System.out.println("init() method called!");
   }
   public void start()              // start() 函數
   {
       System.out.println("start() method called!");
   }
   public void stop()               // stop() 函數
   {
       System.out.println("stop() method called!");
   }
   public void destroy()            // destroy() 函數
   {
       System.out.println("destroy() method called!");
   }
   public void paint(Graphics g)
   {
       g.drawString("Love makes the world go round.",30,50);
       System.out.println("paint() called!");
   }
}

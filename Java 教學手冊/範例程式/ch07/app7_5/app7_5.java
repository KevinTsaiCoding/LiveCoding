// app7_5, ²�檺�d��
public class app7_5
{
   public static void main(String args[])
  {
     int score[]={9,14,6,18,2,10};  // �ŧi�@���}�Cscore
     largest(score);    // �N�@���}�Cscore�ǤJlargest() method
  }


  public static void largest(int arr[])
  {
     int max=arr[0];
     for(int i=0;i<arr.length;i++)
       if(max<arr[i])
          max=arr[i];
     System.out.println("largest num = "+max);
  }
}

/* app7_5 OUTPUT---
largest num = 18
-----------------*/
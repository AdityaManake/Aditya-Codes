//Q3 Exp-7
package lca;

class FirstThread extends Thread
{
    public void run()
    {
        for(int i = 10; i <= 20; i++)
        {
            System.out.println("Thread 1: " + i);

            if(i == 11)
            {
                try
                {
                    Thread.sleep(100);
                }
                catch(InterruptedException e)
                {
                    System.out.println(e);
                }
            }
        }
    }
}

class SecondThread extends Thread
{
    public void run()
    {
        for(int i = 20; i >= 1; i--)
        {
            System.out.println("Thread 2: " + i);

            try
            {
                Thread.sleep(100);
            }
            catch(InterruptedException e)
            {
                System.out.println(e);
            }
        }
    }
}

public class Sleep_thread_demo {
    public static void main(String args[])
    {
        FirstThread t1 = new FirstThread();
        SecondThread t2 = new SecondThread();

        t1.start();
        t2.start();
    }
}

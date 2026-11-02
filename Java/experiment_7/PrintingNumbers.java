package Programs.Java.experiment_7;

class NormalNumbersPrintingThread extends Thread {
    public void run()
    {
        for(int i = 1; i<=10 ; i++)
        {
           System.out.println("Thread 1:" +i);
        }
    }
}

class ReverseNumberPrintingThread extends Thread {
    public void run()
    {
        for (int i = 10; i >= 1; i--) {
            System.out.println("Thread 2: " + i);
    }
    }
}

public class PrintingNumbers {
    public static void main(String[] args) {
        NormalNumbersPrintingThread t1 = new NormalNumbersPrintingThread();
        ReverseNumberPrintingThread t2 = new ReverseNumberPrintingThread();

        t1.start();
        t2.start();
    }
}
    



package Programs.Java.experiment_7;

class Thread1 extends Thread {
    public void run() {
        for (int i = 10; i <= 20; i++) {
            System.out.println("Thread 1: " + i);
            if (i == 11) {
                try {
                    Thread.sleep(500);
                } catch (InterruptedException e) {
                    System.out.println(e);
                }
            }
        }
    }
}

class Thread2 extends Thread {
    public void run() {
        for (int i = 20; i >= 1; i--) {
            System.out.println("Thread 2: " + i);
        }
    }
}

public class PrintingNumbersThreads {
    public static void main(String[] args) {
        Thread1 t1 = new Thread1();
        Thread2 t2 = new Thread2();

        t1.start();
        t2.start();
    }
}





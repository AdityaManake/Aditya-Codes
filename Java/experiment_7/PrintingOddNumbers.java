package Programs.Java.experiment_7;

class OddThread extends Thread {
    public void run() {
        for (int i = 1; i <= 20; i += 2) {
            System.out.println("Thread 1: Odd: " + i);
            Thread.yield();
        }
    }
}

class EvenThread extends Thread {
    public void run() {
        for (int i = 2; i <= 20; i += 2) {
            System.out.println("Thread 2: Even: " + i);
            Thread.yield();
        }
    }
}

public class PrintingOddNumbers {
    public static void main(String[] args) {
        OddThread odd = new OddThread();
        EvenThread even = new EvenThread();

        odd.start();
        even.start();
    }
}

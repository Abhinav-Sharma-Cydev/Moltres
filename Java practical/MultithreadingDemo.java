class MyThread extends Thread {
    private String threadx;

    // Constructor to give a name to the thread
    MyThread(String name) {
        threadx = name;
    }

    // The 'run' method contains the code that will execute in the thread
    public void run() {
        for (int i = 1; i <= 3; i++) {
            System.out.println(threadx + " - Step " + i);
            try {
                // Sleep for 500ms to simulate time-consuming work
                Thread.sleep(500);
            } catch (InterruptedException e) {
                System.out.println(threadx + " was interrupted");
            }
        }
    }

    public static void main(String[] args) {
        // Create two threads with different names
        MyThread t1 = new MyThread("Thread 1");
        MyThread t2 = new MyThread("Thread 2");

        // Start both threads
        t1.start();
        t2.start();

        try {
            // Main thread waits for both threads to finish before continuing
            t1.join();
            t2.join();
        } catch (InterruptedException e) {
            System.out.println("Main thread interrupted.");
        }

        System.out.println("Main thread finished.");
    }
}

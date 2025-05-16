class Task extends Thread {
    private String taskName;

    public Task(String name) {
        this.taskName = name;
    }

    // This is the code that will run in the new thread
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(taskName + " - Step " + i + " - Executed by: " + Thread.currentThread().getName());
            try {
                // Sleep for 500 milliseconds to simulate time-consuming task
                Thread.sleep(500);
            } catch (InterruptedException e) {
                System.out.println(taskName + " was interrupted.");
            }
        }
        System.out.println(taskName + " finished.\n");
    }
}

class RunnableTask implements Runnable {
    private String taskName;

    public RunnableTask(String name) {
        this.taskName = name;
    }

    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(taskName + " - Step " + i + " - Executed by: " + Thread.currentThread().getName());
            try {
                Thread.sleep(400);
            } catch (InterruptedException e) {
                System.out.println(taskName + " was interrupted.");
            }
        }
        System.out.println(taskName + " finished.\n");
    }
}

public class MultithreadingDemo {
    public static void main(String[] args) {
        System.out.println("Main thread started: " + Thread.currentThread().getName() + "\n");

        // Creating threads by extending Thread class
        Task t1 = new Task("Thread-Class Task 1");
        Task t2 = new Task("Thread-Class Task 2");

        // Creating threads by implementing Runnable interface
        RunnableTask r1 = new RunnableTask("Runnable-Interface Task 1");
        RunnableTask r2 = new RunnableTask("Runnable-Interface Task 2");

        Thread tr1 = new Thread(r1);
        Thread tr2 = new Thread(r2);

        // Start all threads
        t1.start();
        t2.start();
        tr1.start();
        tr2.start();

        // Wait for all threads to complete (optional)
        try {
            t1.join();
            t2.join();
            tr1.join();
            tr2.join();
        } catch (InterruptedException e) {
            System.out.println("Main thread interrupted.");
        }

        System.out.println("\nMain thread finished: " + Thread.currentThread().getName());
    }
}

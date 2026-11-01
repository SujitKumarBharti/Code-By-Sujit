class WorkerThread extends Thread {
    public WorkerThread(String name) {
        super(name);
    }

    public void run() {
        System.out.println(getName() + " running with priority " + getPriority());  // Display running with priority
    }
}

class ThreadPriorities {
    public static void main(String[] args) {
        WorkerThread t1 = new WorkerThread("HighPriority");                         // Instantiate new object
        WorkerThread t2 = new WorkerThread("LowPriority");                          // Instantiate new object
        t1.setPriority(Thread.MAX_PRIORITY);
        t2.setPriority(Thread.MIN_PRIORITY);
        t1.start();
        t2.start();
    }
}

class SharedQueue {
    private int contents;
    private boolean available = false;                            // Calculate and assign value

    public synchronized int get() {
        while (!available) {                                      // Iterate while condition holds
            try { wait(); } catch (InterruptedException e) {}
        }
        available = false;                                        // Calculate and assign value
        notifyAll();
        return contents;                                          // Return computed result contents
    }

    public synchronized void put(int value) {
        while (available) {                                       // Iterate while condition holds
            try { wait(); } catch (InterruptedException e) {}
        }
        contents = value;                                         // Calculate and assign value
        available = true;                                         // Calculate and assign value
        notifyAll();
    }
}

class ProducerConsumerDemo {
    public static void main(String[] args) {
        SharedQueue q = new SharedQueue();                        // Instantiate new object
        q.put(42);
        System.out.println("Produced and consumed: " + q.get());  // Display produced and consumed
    }
}

function simulateDatabaseQuery(recordId) {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            if (recordId > 0) {
                resolve({ id: recordId, name: "Student Record", status: "Fetched" });
            } else {
                reject(new Error("Invalid record ID requested."));
            }
        }, 100);
    });
}

async function runAsyncDemo() {              // Consuming using async/await
    console.log("Initiating async database fetch...");
    try {
        const result = await simulateDatabaseQuery(42);
        console.log("Async Result Received:", result);
    } catch (err) {
        console.error("Async Error:", err.message);
    }
}

runAsyncDemo();

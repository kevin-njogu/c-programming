import time

start = time.time()

for i in range(1_000_000_000):
    pass

end = time.time()

elapsed_ms = (end - start) * 1000
print(f"Execution time: {elapsed_ms:.3f} ms")

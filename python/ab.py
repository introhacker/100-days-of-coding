# stress_cpu.py
import multiprocessing
import math

def burn():
    while True:
        # some heavy calculations
        math.sqrt(12345.6789) ** 5.4321

if __name__ == "__main__":
    # Number of processes = number of CPU cores
    for _ in range(multiprocessing.cpu_count()):
        p = multiprocessing.Process(target=burn)
        p.start()

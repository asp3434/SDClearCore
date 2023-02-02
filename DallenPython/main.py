import serial
import time

clearcore = serial.Serial('COM3', 9600)

clearcore.write(str.encode("hello clearcore"))

time.sleep(5)

print(clearcore.readline().decode())
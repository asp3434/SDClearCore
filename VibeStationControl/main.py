import serial
import time

clearcore = serial.Serial('COM3', 9600)

# Freq = False
# Force = False
#
# while Freq = False:
#     setFreq = input("Enter Freq")
#     Freq = True
#
# while Force = False:
#     setForce = input("Enter Force")
#     Force = True
setFreq = 80
setForce = 400

sendComm = "Freq:" + str(setFreq) + ',Force:' + str(setForce)
clearcore.write(str.encode(sendComm))a
time.sleep(1)

while clearcore.inWaiting():
    input_line = clearcore.read(clearcore.inWaiting()).decode()
    print(input_line)

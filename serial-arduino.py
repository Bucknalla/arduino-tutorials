import serial

ser = serial.Serial('/dev/cu.usbmodem1411', 9600)

with open('test.csv','a') as fo:
    while True:
        fo.write(ser.readline())

import numpy as np
import pandas as pd
import serial

ser = serial.Serial(port='COM3',baudrate=9600)
total_data = 2880
data = np.zeros((total_data,4)) #one data every minute

i = 0

while(i < total_data):
    dataline = ser.readline()
    print(dataline)
    dataline = dataline.split()

    if dataline[0] == b'TIMES':
        data[i]=dataline[1],dataline[2],dataline[3],dataline[4]
        i = i + 1

df = pd.DataFrame(data=data,
                  columns=['chan1','chan2','chan3','chan4'])

df.to_csv('data/datalog.csv')


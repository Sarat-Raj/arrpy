import serial #Import Serial Library
arduinoSerialData=serial.Serial('com4',9600)
while(1==1):
    if(arduinoSerialData.inWaiting()>0):
        myData = arduinoSerialData.readline()
        print (myData)
        
        
    
    

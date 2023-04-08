1. Make sure you have installed Arduino and MaxMsp (30-day free trial).
    1. Arduino: [Software | Arduino](https://www.arduino.cc/en/software);
    2. MaxMsp: [Download Max | Cycling '74 (cycling74.com)](https://cycling74.com/downloads)
  
2. Download the Arduino code and Max patch here: [GestureJam/GestureJam at main · Dawnyeeeee/GestureJam (github.com)](https://github.com/Dawnyeeeee/GestureJam/tree/main/GestureJam)

3. Follow the circuit diagram shown below:
  ![image](https://user-images.githubusercontent.com/38333205/230708701-27febd21-3039-4e6c-93ed-20d8936e4ee7.png)
  
4. Download the "CapacitiveSensor" library from the Arduino IDE, as shown in the screenshot below:
  ![image](https://user-images.githubusercontent.com/38333205/230708732-95433cb4-6931-457e-a09e-ed3f3f0e0396.png)
  
  Make sure you have the "CapacitiveSensor" library, then upload the code to your Arduino board.

Open the serial monitor, check if the data is being transmitted, and touch the wire to see if the data changes. If it is working properly, the output should look like this:
  ![image](https://user-images.githubusercontent.com/38333205/230708775-3282c304-af00-4cf4-bf2f-46f707755252.png)

5. Close the Arduino before opening Max (this is very important, as the serial monitor cannot be opened at the same time, otherwise Max will not receive any signal input).
    
    Print your serial pin number and test it by pressing "print", and see what your serial number is in the right window:
    
![image](https://user-images.githubusercontent.com/38333205/230708786-4be89383-2c51-483f-a3d9-66ebb4e28260.png)

To change your serial number, first click the presentation mode and unlock your patch. Then, locate the patch shown below. The number in the middle represents your current serial number. In this case, my serial number is "i," so the patch reads "serial i 9600." Simply replace the number with your desired serial number.

![image](https://user-images.githubusercontent.com/38333205/230708809-959ea0be-f854-4c65-9377-e7801adf1a2e.png)

Then click presentation mode and lock it to go back to the presentation mode.

6. Click the "trigger" X to open the serial pin. If the data goes through, you will see a "bang".
![image](https://user-images.githubusercontent.com/38333205/230708835-fbd59bde-058e-4616-ae95-a11412d5a1d5.png)

7. To replace the audio file, simply drag and drop your downloaded file (usually an mp3) into the designated "drop audio file here" window. Once you touch the wire, you should hear the sound. In this example, we will use "Trembly-CEL-Gli" for audio 1 (a small bell), "brushes" for audio 2 (a drum), and "duduk" for audio 3 (a flute).
![image](https://user-images.githubusercontent.com/38333205/230708852-cb6c35c0-a474-4d87-8d0c-fe3fe4501faa.png)

make sure you open the sound output:
![image](https://user-images.githubusercontent.com/38333205/230708877-39a5aacc-932e-4859-a395-0a49daff1eaa.png)

  

# Target Practice
This project came about as a fun way to take something I was doing when taking breaks from coding and job searching (slingshot target practice) and merging it with my passion for software and interest in hardware.

## Getting started
If you do not already have the Arduino IDE download and install it from here: https://www.arduino.cc/en/main/software
Next, you’ll need to `fork` the repo as your own. Once you have done that, copy and paste the code into your Arduino IDE and upload the code to your Arduino.

## Functionality
#### Iteration One
Iteration 1 uses a LCD screen and two simple circuits to track how many times a target as been hit or missed and displays the total hits and shots taken.

I hope to interface this with a mobile app that can track and chart progress over time. A future iteration could gamify this featuring a multiplayer mode and incorporating multi colored lights themed on hits vs misses.



![IMG_2567](https://user-images.githubusercontent.com/47466067/80937937-56d99e00-8d94-11ea-80c6-dffba23b1623.jpg)

![IMG_2566](https://user-images.githubusercontent.com/47466067/80937941-593bf800-8d94-11ea-9c6b-f306348e6f3d.jpg)

#### Iteration Two
Iteration 2 adds the following functionality:
- Completes the functionality of counting missed shots
- Upgrades trigger mechanisms for detecting hits and misses
- Add a welcome message
- Adds display of total hits and total shots
- Adds white led to enable shooting after dark
- Adds Green/Blue light display for indicating a hit
- Adds Red light display for indicating a miss

#### Iteration Three
- Iteration 3 begins the addition of a simple web application which will receive and display data from the Arduino to the user. You can view the repo [HERE](https://github.com/nathangthomas/target_practice_dashboard).

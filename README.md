# HeizungESP8266

this is a forked project from haniham/HeizungESP8266

- changed to run on a nodemcu board from lolin,

- heater is a Vaillant VK164/1C

- builds against the last platformio@atom version

- improved the loop to go only through the known parameters but with a reduced delay.

- added startsequenz (must be improved by checking for the right answer instead of 10times send)

- added ota upload

- serial connection

  TX directly connected to heater
  
  RX connected over an adjustable Resistor bridge to pull the voltage near to the receiving threshold

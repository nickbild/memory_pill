# Memory Pill

Memory Pill passively records the last time a medication bottle was opened to prevent over- and underdosing of medications when you cannot remember if you have already taken a scheduled dose.

<p align="center">
<img src="https://raw.githubusercontent.com/nickbild/memory_pill/master/media/memory_pill.gif">
</p>

## How It Works

<p align="center">
<img src="https://raw.githubusercontent.com/nickbild/memory_pill/master/media/memory_pill_workflow.jpg">
</p>

A small hole is drilled into the threaded portion of a medicine bottle.  A pushbutton is attached inside the bottle so that the button lines up with the hole.  A 3D printed button extender is glued to the button such that removing the bottle top will release the button.

The button is connected to an Arduino Nano 33 IoT.  When the button is released, the Arduino connects to a remote web API that records the time the request was received.  A Memory Pill app was created on a LILYGO TTGO T-Watch-2020 that will connect to the web API and display the stored time.

## Media

YouTube:  
https://www.youtube.com/watch?v=GQ3YpKmJ9Q4

![full_setup](https://raw.githubusercontent.com/nickbild/memory_pill/master/media/bottle_watch_on_sm.jpg)

Closeup of triggering mechanism:

![closeup](https://raw.githubusercontent.com/nickbild/memory_pill/master/media/bottle_closeup_sm.jpg)

Internal electronics pulled out:

![guts](https://raw.githubusercontent.com/nickbild/memory_pill/master/media/bottle_guts_sm.jpg)

Watch closeup:

![bottle](https://raw.githubusercontent.com/nickbild/memory_pill/master/media/watch_on_sm.jpg)

Bottle without extender:

![bottle](https://raw.githubusercontent.com/nickbild/memory_pill/master/media/bottle_sm.jpg)

Button extender:

![bottle](https://raw.githubusercontent.com/nickbild/memory_pill/master/media/button_extender_sm.jpg)

Button extender model:

![bottle](https://raw.githubusercontent.com/nickbild/memory_pill/master/media/button_extender_model_sm.png)

## Bill of Materials

- 1 x Arduino Nano 33 IoT
- 1 x LILYGO TTGO T-Watch-2020
- 1 x 2.2K resistor
- 1 x 10K resistor
- 1 x Pushbutton
- 1 x Small LiPo battery pack
- OPTIONAL: 3D Printer to print button extender (can be replaced with misc. scrap materials)
- Miscellaneous wire

## About the Author

[Nick A. Bild, MS](https://nickbild79.firebaseapp.com/#!/)

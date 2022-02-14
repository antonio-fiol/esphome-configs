# esphome-configs
My ESPHome configurations

# m5cam
An ESP32 camera.

# pir1
A simple PIR sensor with LED indicator. Indicator goes high brightness to show the actual sensor is detecting movement and mid-brightness for a while until it decides the room is clear.

# cabecero
Using a 4-channel MOSFET-output board, control three white analog LED strips (_izquierda_, _central_, _derecha_) hidden behind a headboard, and controlled using four rotary encoders. Central light can be fully controlled from two encoders (both sides of the bed), and pressing both encoders on any side switches off all three lights (good night!).

# led1
Full color moon lamp, has a wake-up (_despertar_) routine.

# toldo1
Awning controller with an hall-sensor anemometer.

# riego1
Simple ESP01-relay based single valve irrigation controller.

# riego2
Two-valve plus transformer irrigation controller with a pressure sensor. If there is no water pressure, time doesn't count and the system waits until there actually is water available.

# wemosoled
Single analog white strip lamp with wake-up routine and ambient sensors (temperature, humidity). Uses OLED display to show ambient conditions as well as lamp status and time.

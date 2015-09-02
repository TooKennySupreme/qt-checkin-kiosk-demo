## qt-checkin-kiosk-demo
#Qt5 demo application for simulating a Check-In Kiosk at an airport

<a href="https://drive.google.com/uc?export=view&id=0B7uO0jJfbFQIZzNmZ1VQOFJQOGc"><img src="https://drive.google.com/uc?export=view&id=0B7uO0jJfbFQIZzNmZ1VQOFJQOGc"/></a>

## Overview

Qt5 introduced a new feature which is the possibility to display multiple Qt applications in different screens. That feature is very useful in various types of application. With this project we are giving an example of a check-in kiosk in an ariport. The Check-In Kiosk Demo is intendded to work together with the Flight Information Demo found here: https://github.com/giobauermeister/qt-flight-information-demo

## Steps to run the demo

The image with included demos can be built using the recipes found at: https://github.com/giobauermeister/meta-projects/tree/master/recipes-qt or the applications can be cross-compiled using Qt Creator and the source codes available.

This repository also includes a systemd UNIT file for starting the launching script at startup as well as the script which launches both applications. 

To launch the applications manually, use enviroment variable with the desired framebuffer(eg. /dev/fb0):

    export QT_QPA_EGLFS_FB=/dev/fb0
    
and launch the application with the desired plugin(eg. EGLFS):

    flightKiosk -platform eglfs

[![video](https://drive.google.com/uc?export=view&id=0B7uO0jJfbFQITUZKaFduYXlMNTA)](http://youtu.be/b6nqHyKfjVQ)


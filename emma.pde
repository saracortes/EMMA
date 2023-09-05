import ddf.minim.*;
import ddf.minim.analysis.*;
import ddf.minim.effects.*;
import ddf.minim.signals.*;
import ddf.minim.spi.*;
import ddf.minim.ugens.*;

import processing.serial.*;
Serial myPort;
String val;

Minim minim;
AudioPlayer playerHi;
AudioPlayer playerRojo;
AudioPlayer playerAmarillo;
AudioPlayer playerVerde;
AudioPlayer playerAzul;
AudioPlayer playerBlanco;

String hi = "hi";
String rojo = "rojo";
String amarillo = "amarillo";
String verde = "verde";
String azul = "azul";
String blanco = "blanco";


void setup(){
  String portName = Serial.list()[1];
  myPort = new Serial (this, portName, 9600);
  minim = new Minim(this);
  playerHi = minim.loadFile("holaEMMA.wav");
  playerRojo = minim.loadFile("Rojo.wav");
  playerAmarillo = minim.loadFile("Amarillo.wav");
  playerVerde = minim.loadFile("Verde.wav");
  playerAzul = minim.loadFile("Azul.wav");
  playerBlanco = minim.loadFile("Blanco.wav");
  
}
void draw(){
  if (myPort.available()>0)
  {
    val = myPort.readString();
    print(val);
    if(val.equals(hi))
    {
      playerHi.play();
    }
    if(val.equals(rojo))
    {
      playerRojo.play();
    }
    if(val.equals(amarillo))
    {
      playerAmarillo.play();
    }
    if(val.equals(verde))
    {
      playerVerde.play();
    }
    if(val.equals(azul))
    {
      playerAzul.play();
    }
    if(val.equals(blanco))
    {
      playerBlanco.play();
    }
    myPort.clear();
  }
  
}

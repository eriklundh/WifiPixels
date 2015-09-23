#ifndef webserver_setup_h
#define webserver_setup_h

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

void webserver_url_routing(ESP8266WebServer * webserver);
String IPtoString(IPAddress IPaddr);
void NotFound();
void GetAccessPoints();
void WifiSetup();
void GetCurrentAnimation();
void SetCurrentAnimation();
void GetAnimationFrame();
void SetAnimationFrame();


#endif

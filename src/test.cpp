// #include <Arduino.h>
// #include "OneButton.h"

// // Setup a new OneButton on pin 18
// OneButton button1(18, true);

// // ----- button 1 callback functions

// // This function will be called when the button1 was pressed 1 time (and no 2. button press followed).
// void click1()
// {
//     Serial.println("Button 1 click.");
// } // click1

// // This function will be called once, when the button1 is released after beeing pressed for a long time.
// void longPressStop1()
// {
//     Serial.println("Button 1 longPress stop");
// } // longPressStop1

// // setup code here, to run once:
// void setup()
// {
//     Serial.begin(115200);
//     button1.attachClick(click1);
//     button1.attachLongPressStop(longPressStop1);

// } // setup

// // main code here, to run repeatedly:
// void loop()
// {
//     button1.tick();
// } // loop

// -------------------------------------------------------------------------------------------------------------------------------
// #include <ESP32Time.h>

// //ESP32Time rtc;
// ESP32Time rtcz(3600);  // offset in seconds GMT+1

// void setup() {
//   Serial.begin(115200);
// //   rtcz.setTime(30, , 13, 10, 2, 2023);  // 17th Jan 2021 15:24:30
//   //rtc.setTime(1609459200);  // 1st Jan 2021 00:00:00
//   //rtc.offset = 7200; // change offset value

// /*---------set with NTP---------------*/
// //  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
// //  struct tm timeinfo;
// //  if (getLocalTime(&timeinfo)){
// //    rtc.setTimeStruct(timeinfo);
// //  }
// }

// void loop() {
// //  Serial.println(rtc.getTime());          //  (String) 15:24:38
// //  Serial.println(rtc.getDate());          //  (String) Sun, Jan 17 2021
// //  Serial.println(rtc.getDate(true));      //  (String) Sunday, January 17 2021
// //  Serial.println(rtc.getDateTime());      //  (String) Sun, Jan 17 2021 15:24:38
// //  Serial.println(rtc.getDateTime(true));  //  (String) Sunday, January 17 2021 15:24:38
// //  Serial.println(rtc.getTimeDate());      //  (String) 15:24:38 Sun, Jan 17 2021
// //  Serial.println(rtc.getTimeDate(true));  //  (String) 15:24:38 Sunday, January 17 2021
// //
// //  Serial.println(rtc.getMicros());        //  (long)    723546
// //  Serial.println(rtc.getMillis());        //  (long)    723
// //  Serial.println(rtc.getEpoch());         //  (long)    1609459200
// //  Serial.println(rtc.getSecond());        //  (int)     38    (0-59)
// //  Serial.println(rtc.getMinute());        //  (int)     24    (0-59)
// //  Serial.println(rtc.getHour());          //  (int)     3     (0-12)
// //  Serial.println(rtc.getHour(true));      //  (int)     15    (0-23)
// //  Serial.println(rtc.getAmPm());          //  (String)  pm
// //  Serial.println(rtc.getAmPm(true));      //  (String)  PM
// //  Serial.println(rtc.getDay());           //  (int)     17    (1-31)
// //  Serial.println(rtc.getDayofWeek());     //  (int)     0     (0-6)
// //  Serial.println(rtc.getDayofYear());     //  (int)     16    (0-365)
// //  Serial.println(rtc.getMonth());         //  (int)     0     (0-11)
// //  Serial.println(rtc.getYear());          //  (int)     2021

// //  Serial.println(rtc.getLocalEpoch());         //  (long)    1609459200 epoch without offset
//   Serial.println(rtcz.getTime("%A, %B %d %Y %H:%M:%S"));   // (String) returns time with specified format
//   // formating options  http://www.cplusplus.com/reference/ctime/strftime/

//   struct tm timeinfo = rtcz.getTimeStruct();
//   //Serial.println(&timeinfo, "%A, %B %d %Y %H:%M:%S");   //  (tm struct) Sunday, January 17 2021 07:24:38

//   delay(2000);
// }

// // #include "Arduino.h"
// // #include "uRTCLib.h"
// // // uRTCLib rtc;
// // uRTCLib rtcx(0x68);
// // char daysOfTheWeekx[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
// // void setup()
// // {
// //     Serial.begin(115200);
// //     delay(3000); // wait for console opening
// //     URTCLIB_WIRE.begin();
// //     // Comment out below line once you set the date & time.
// //     // Following line sets the RTC with an explicit date & time
// //     // for example to set January 13 2022 at 12:56 you would call:
// //     rtcx.set(0, 0, 10, 5, 13, 1, 23);
// //     // rtc.set(second, minute, hour, dayOfWeek, dayOfMonth, month, year)
// //     // set day of week (1=Sunday, 7=Saturday)
// // }
// // void loop()
// // {
// //     rtcx.refresh();
// //     Serial.print("Current Date & Time: ");
// //     Serial.print(rtcx.year());
// //     Serial.print('/');
// //     Serial.print(rtcx.month());
// //     Serial.print('/');
// //     Serial.print(rtcx.day());
// //     Serial.print(" (");
// //     Serial.print(daysOfTheWeekx[rtcx.dayOfWeek() - 1]);
// //     Serial.print(") ");
// //     Serial.print(rtcx.hour());
// //     Serial.print(':');
// //     Serial.print(rtcx.minute());
// //     Serial.print(':');
// //     Serial.println(rtcx.second());
// //     delay(3000);
// // }

// -------------------------------------------------------------------------------------------------------------------------------
// // #include <Arduino.h>
// // #include "RTClib.h"
// // RTC_DS1307 DS1307_RTC;
// // char Week_days[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
// // void setup()
// // {
// //     Serial.begin(115200);
// //     if (!DS1307_RTC.begin())
// //     {
// //         Serial.println("Couldn't find RTC");
// //         while (1)
// //             ;
// //     }
// //     DS1307_RTC.adjust(DateTime(F(__DATE__), F(__TIME__)));
// // }
// // void loop()
// // {
// //     DateTime now = DS1307_RTC.now();
// //     Serial.print(now.year(), DEC);
// //     Serial.print('/');
// //     Serial.print(now.month(), DEC);
// //     Serial.print('/');
// //     Serial.print(now.day(), DEC);
// //     Serial.print(" (");
// //     Serial.print(Week_days[now.dayOfTheWeek()]);
// //     Serial.print(") ");
// //     Serial.print(now.hour(), DEC);
// //     Serial.print(':');
// //     Serial.print(now.minute(), DEC);
// //     Serial.print(':');
// //     Serial.print(now.second(), DEC);
// //     Serial.println();
// //     Serial.print(" since midnight 1/1/1970 = ");
// //     Serial.print(now.unixtime());
// //     Serial.print("s = ");
// //     Serial.print(now.unixtime() / 86400L);
// //     Serial.println("d");
// //     // calculate a date which is 7 days, 12 hours, 30 minutes, 6 seconds into the future
// //     DateTime future(now + TimeSpan(7, 12, 30, 6));
// //     Serial.print(" now + 7d + 12h + 30m + 6s: ");
// //     Serial.print(future.year(), DEC);
// //     Serial.print('/');
// //     Serial.print(future.month(), DEC);
// //     Serial.print('/');
// //     Serial.print(future.day(), DEC);
// //     Serial.print(' ');
// //     Serial.print(future.hour(), DEC);
// //     Serial.print(':');
// //     Serial.print(future.minute(), DEC);
// //     Serial.print(':');
// //     Serial.print(future.second(), DEC);
// //     Serial.println();
// //     Serial.println();
// //     delay(3000);
// // }
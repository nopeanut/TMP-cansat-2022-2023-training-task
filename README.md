# ![Copy of CanSat 2022-2023 Software Training Task](https://user-images.githubusercontent.com/65178913/192123190-cb7e8ef6-cb4b-4cc5-bf70-2b39e3737aaf.png)
Lines 1-12 are defining variables.

Lines 14-21 is the setup. I set the pinMode for the RGB led. Attached my servo to pin 9.

Lines 23-48 is the loop. tmpValue is retrieving the value the TMP36 is outputting and I am converting the raw value to celsius. val is reading the variable value tmpValue and also mapping the range of the TMP36 to the range of the servo. Lines 30-36 are just the conditions for the RBG led and setting the color accordingly.

Lines 50-54 is a helper method. Used to simplify the code by taking in the RBG parameters and setting the led color accordingly.

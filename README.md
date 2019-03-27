Benz didn't redesign the wheel to invent the automobile, he just adapted it to his needs.   Likewise I stand on the shoulders of others as I throw my contribution into the heap.

Call it GRBL, Sprinter, Marlin, whatever you like, it is the firmware that came with my Seres Road/Geetech 3d printer.  It is difficult to establish authorship.  Lots of different people credit lots of others in various files, I just left them all.  My only intent is to tweak it little, trim it a little, use what I need and toss what I don't. And maybe add a bit of value if I can.  

Oh, and to fix the one major flaw that is common to every single version of 3d printing firmware I have seen I have seen.  Having run/built/programmed CNC's from long before Mastercam replaced punched tape (when "Rewind" did not cause empty, questioning stares) I feel it is my God given duty to try to re-educate the Maker world on a MAJOR falsehood that they all seem to regard as Gospel truth without the slightest idea that it causes most output Gcode files to be much, MUCH larger than necessary.   This may be tough to swallow, but regardless that 'everyone' says otherwise, G0 != G1.  Not even close.

G0 is a feedrate override.  Adding a feedrate to a G0 command should be an error, but most machines will just ignore it. If 3d printers handled G0 right 95% of the "Fxxxx" directives in the Gcode would be unnecessary.


T.B.C.
Schwack  27Mar2019

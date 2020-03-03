
This is a fork of [VVVVVV](https://github.com/TerryCavanagh/VVVVVV/).
This fork adds a console interface to the game in order to be able to control it from an external program.
The purpose of this fork is to allow the creation of an external artificial intelligence for the Super Gravitron (more info coming soon).

Only `desktop_version` has been modded. The following controls have been added to the game:

- The numerical keys (`0 1 2 3 4 5 6 7 8 9`) change the framerate. The key `=` resets the framerate to default.
- The key `o` activates the frame-by-frame input mode. The key `p` disables it.
- When the frame-by-frame input mode is activated, the game cannot be controlled anymore using the keyboard.
Instead, the input must be specified in the console. You can type `w`, `l`, `r` or `s` (respectively: wait, left, right, suicide). If you enter many of those characters before hitting enter, they will all be played successively.
Each time you enter such a command, the game runs for the corresponding number of frames, and the new state of the game is printed in the console using the JSON format (only for the Gravitron).
You can disable the frame-by-frame input mode by pressing the `p` key in the game while it is running, but it is only posible if the console is controlled by an external program (otherwise you would have to press `p` in the game and to press enter in the console at the same time).

Original Readme
===============

This is the source code to VVVVVV, version 2.0+. For more context about this release, see the [announcement](http://distractionware.com/blog/2020/01/vvvvvv-is-now-open-source/) on Terry's blog!

License
-------
VVVVVV's source code is made available under a custom license. See [LICENSE.md](LICENSE.md) for more details.

In general, if you're interested in creating something that falls outside the license terms, get in touch with Terry and we'll talk about it!

Authors
-------
- Created by [Terry Cavanagh](http://distractionware.com/)
- Room Names by [Bennett Foddy](http://www.foddy.net)
- Music by [Magnus Pålsson](http://souleye.madtracker.net/)
- Metal Soundtrack by [FamilyJules](http://familyjules7x.com/)
- 2.0 Update (C++ Port) by [Simon Roth](http://www.machinestudios.co.uk)
- 2.2 Update (SDL2/PhysicsFS/Steamworks port) by [Ethan Lee](http://www.flibitijibibo.com/)
- Beta Testing by Sam Kaplan and Pauli Kohberger
- Ending Picture by Pauli Kohberger

Versions
------------
There are two versions of the VVVVVV source code available - the [desktop version](https://github.com/TerryCavanagh/VVVVVV/tree/master/desktop_version) (based on the C++ port, and currently live on Steam), and the [mobile version](https://github.com/TerryCavanagh/VVVVVV/tree/master/mobile_version) (based on a fork of the original flash source code, and currently live on iOS and Android).

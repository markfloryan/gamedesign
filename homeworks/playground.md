CS4730 - HW 2: Playground
===============================

<a name="background"></a>Background
---------------------------------------
https://learn.unity.com/

<a name="required"></a>Required Features
---------------------------------------
1) Tutorials (20 points)
- in Unity Hub’s Learn tab, complete one of the basic microgames, Beginner Scripting, and Intermediate Scripting
- Add an image to the repository showing proof of completion of each of these.
2) Playground (10 points)
- Open the `Playground` scene located in `Assets/Scenes/Playground.unity`
- Fill it with a variety of GameObjects
- Mess around with the objects Transform values
- Have one of the object's Transforms be controllable by the player via the `PlayerMove.cs` script
  - WASD - Up Left Down Right translation
  - Q E - Scale in and out
  - Z X - Rotate counterclockwise and clockwise

3) Solar System I (20 points)
- Open the `Solar System` scene
- Utilizing the provided assets, the transform hierarchy, and the `CelestialBody.cs` script, create a solar system model with planets orbiting the sun, and moons orbiting those planets.


<a name="optional"></a>Optional Features
---------------------------------------
1) Playground Shenanigans
- Normalized movement (5 points)
  - Normalize the translation in `PlayerMove.cs` to never exceed a magnitude of 1.
  - In other words, moving diagonally should not move the GameObject faster.
- Canceling Inputs (5 points)
  - W+S or A+D or W+A+S+D = no translation
  - Q+E = no rotation
  - Z+X = no scaling
- Dancing Disco Banana (10 points)
  - Make a dancing disco banana utilizing the appropriate Prefab
  - Create a new C# script component on the prefab called `DancingBanana.cs`
- Nyan Cat (5 points)
  - Make the Nyan Cat play the Nyan Cat song on repeat utilizing the appropriate Prefab.
- Colorful Characters (5 points)
  - Modify `PlayerMove.cs` to include new controls for controlling the color of the GameObject's sprite.
    - R = red channel--, T = red channel++
    - G = green channel--, H = green channel++
    - B = blue channel--, N = blue channel++
    - C = alpha--, V = alpha++
2) Solar System II
- Accurate Model (10 points)
  - Solar system is somewhat accurate to our own solar system in terms of number of planets, year and day rotations, and number of moons.
- Elliptical orbits (10 points)
- Solar System Physics I (20 points)
  - Create a new scene called `Solar System Physics`
  - Instead of using basic rotation and translations for orbits, set up a basic physics system, and a script handling initial velocities, and an acceleration towards the orbiting body (sun for planets, planet for moons)
  - You must use the proper gravitational force equation
    - F<sub>orbiting</sub> = F<sub>orbited</sub> = G * m<sub>orbiting</sub>m<sub>orbited</sub>/r<sub>orbit</sub><sup>2</sup>
    - <INSERT EQUATION PICTURE HERE>
    - Experiment with different values of G to get you the result you want.
- Solar System Physics II (20 points)
  - Create a new script called `SolarSystemManager.cs` and randomly generate the sun, planets, and (optionally) moons.
    - Seed the random number generation and find a seed you want us to look at and grade. (We will test other ones to ensure it properly randomizes.)
    - Give each planet a random density by randomizing mass and radius within reason
    - You can assume/ensure the sun has infinite mass.
    - Handle collisions by having planets collide into one bigger planet
      - D<sub>new</sub>=(m<sub>1</sub>/(m<sub>1</sub>+m<sub>2</sub>))D<sub>1</sub> + (m<sub>2</sub>/(m<sub>1</sub>+m<sub>2</sub>))D<sub>2</sub>
      - m<sub>new</sub>=m1+m2

Description / tutorial for optional features
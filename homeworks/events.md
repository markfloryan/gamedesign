CS4730 - HW 5: Events and UI
===============================


<a name="background"></a>Github Assignment Link
---------------------------------------

Every assignment has a **Github Classroom Link** you must follow to get the starter code (if applicable) and to create your repository for the assignment. If you haven't yet done so, follow the instructions at the [Github Classroom Tutorial](./githubclassroom.html).

**Assignment Invite Link**: COMING SOON

Once your repository is configured, push your code to it in order to submit your work.




<a name="background"></a>Background and Resources
---------------------------------------

For this assignment, you will produce small demos that show basic functionality for menus, simple events (opening a door), and UI elements. You might want to peruse the following resources as you work on your assignment:

- [UI Toolkits](https://docs.unity3d.com/Manual/UIToolkits.html)
- [Unity Events](https://docs.unity3d.com/Manual/UnityEvents.html)
- [Scene Manager](https://docs.unity3d.com/ScriptReference/SceneManagement.SceneManager.html)
- [Coroutines](https://docs.unity3d.com/ScriptReference/Coroutine.html)


<a name="required"></a>Required Features (3 features, 3/3 to pass)
---------------------------------------

These required features are meant to force you to implement very simple versions of common game elements. These can easily be expanded to more complicated elements in your game projects.

- **Main Menu**
  - Open the `MainMenu` scene and create a menu around the template Canvas which must include:
    - Title Text (anything you want!)
    - Play Button (opens the `Game` scene when pressed)
      - Use the `SceneLoader` object's `SceneLoader.cs` script to load a new scene.
      - Note: Scenes needed to be added to the build settings to be able to switch to them (Ctrl+Shift+B)
    - Volume Slider (adjust music volume)
    - Credits Button (opens new UI panel showing credits for the game. That's you!)
      - Should have a back button to go back to the Main UI

- **Opening Door**
  - Open the `Door` scene. In it, a box is suspended above a button and there is a door on the right. When you press play, the box will fall on the button. Modify the `PressurePlate.cs` script on the Button and add a UnityEvent to trigger when the plate is pressed down and when it stops being pressed down. 
  - Modify the `Open()` and `Close()` functions in the `Door.cs` script on the door GameObject to open and close the door respectively in any manner you wish.
  - Set the `Open()` and `Close()` functions as subscribers to the PressurePlate `Down` and `Up` events respectively.
  - Note: public void UnityEvents (ones with no parameters) will appear in the Inspector window, and you can subscribe events directly there instead of in code.

- **Counting Jumps**
  - Open the `JumpCounting` scene. In it, a box jumps every time you press space.
  - Add a UI element for indicating the number of jumps.
  - Modify the `JumpyBox.cs` script on the Box GameObject 
    - Add a `UnityEvent<int>` and an integer to count the number of jumps.
    - Every time the player pressed space, the jump counter should go up, and the jump event should be triggered passing in the new jump count.
    - Subscribe the UI to the event to update its text every time a jump occurs. 


<a name="optional"></a>Optional Features
---------------------------------------

There are 8 optional points available through this assignment.

- **Custom Event System (2 points)**
  - Instead of using UnityEvents, create your own event system using C# events and delegates
- **Custom UI (2 points)**
  - You can replace the sprites on all UI elements in Unity. After a while, the default Unity UI gets really boring and lame. Find some cool UI assets online or make your own and replace all the default UI in the `MainMenu` scene.
  - (UI is the first thing people see in your game, so make sure its good!)
- **Audio Mixing (1 point)**
  - AudioMixers are a really useful asset that are used to adjust an entire channel/group of audio sources at once (i.e. master volume). They can even add effects!
  - Create a new `AudioMixer` asset and adjust its volume instead of directly changing the volume of the music.
  - Check out the documentation on AudioMixers for more details as to how they work.
- **Scene Transitions (2 points)**
  - Modify the `SceneLoader` GameObject
    - Add a child `Image` UI component, set its sprite to a basic square, set the color to black, and have it [fill the entire screen](https://answers.unity.com/questions/1250052/set-the-ui-image-to-fit-screen-size.html).
  - Modify the `SceneLoader.cs` script
    - Instead of just setting the new scene, setup a coroutine to fade the screen out, then switch scenes, then fade the screen in. 
- **Text Mesh Pro (1 point)**
  - For all applicable UI elements, use TextMeshPro (TMP) instead of the standard UI.
  - The difference is that TMP converts UI to a mesh, allowing it to scale infinitely without getting blurry.


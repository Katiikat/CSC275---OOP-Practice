Assignment - Object Oriented Programming

Assignment Requirements: 
Project
Create a project called Pirates vs Ninjas

Using Classes
Create a class called GameStructure.

Create a class called GameDriver.

Add a method to the GameDriver class to display a cool intro to the game.

For extra credit add a method called RandomRoll to the GameDriver class which returns a number > 0 and <101.

Using  Inheritance
Create a class called Character which inherits from the GameStructure class.

Create a public property in the Character class and call it Name.

Create 2 classes which inherit from the Character class.  (examples, ninja and pirate). 

Create a method called ThrowStars in the Ninja class which outputs the phrase to the screen "I am throwing stars!";

Create a method called UseSword in the Pirate class which outputs to the screen "I am Swooshing my Sword!".

Create a constructor both subclasses of the  Character class to initialize all public and private properties in the Character class and subclasses. (Hint: The constructor is only needed in the Ninja and Pirate classes)

Add a method to the Character class called DisplayStats to display all the properties of all the characters.

Using Encapsulation and Abstraction
Create one private property called Health in the Character superclass. (Encapsulation)

Create getter and setter public methods in the superclass to access and update this private Health property. (Abstraction)

In the setter method check health before setting the value, if the new Health value will be less than zero, then set the property Health to zero and display "Character has Expired..." to the screen.

Using Polymorphism
Create 2 methods named Talk using Overloading Polymorphism in the Character class.

Give one Talk method this method signature: voidTalk(string stuffToSay)

Give the other Talk this method signature:  void Talk(string name, string stuffToSay)

Make both Talk methods say their name then stuff to say.

Create a virtual attack method in the Character class that returns 10 hit points.

Create an override attack method in both subclasses of the Character class using Overriding Polymorphism and set their attack return values at 25 hit points.

Abstraction
Create a pure virtual method called Help in the GameStructure class. (Abstraction)

Override the Help method in the Character class.

Override the Help method in both character classes.

Pro Tips for the Help methods:

The Help Methods return type would be void and take no parameters.
In the GameStructure class, the Help method would be virtual and empty.
In the Character class, the Help method would be overridden and empty.
In each character class, Ninja and Pirate the Help method would look something like this.

void Help()
{
cout << "Ninja's are really cool, can you can use them to throw stars!" << endl;
}
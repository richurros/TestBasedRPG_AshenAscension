 
# Ashen Ascension
 
Authors: Ronit Bhushan - (https://github.com/rbhus002); Malina Martinez - (https://github.com/mmart505); Jenhua Chang - (https://github.com/jchan434); Richard Kim - (https://github.com/richurros) 



## Project Description
* Why is it important or interesting to you?
  * Our project will be a mystery/dungeon crawl text-based rpg. In the game the user plays as a character that mysteriously finds themselves in a dungeon and must traverse higher and higher to more dangerous levels in an attempt to figure out why they are there and how to get out? In order to traverse these levels of the dungeon, the player must interact with the world in order to find out where to go and they must fight certain enemies.  The reason why this project is important to us is because all of us have had no prior experience with game development so doing this project will give us some experience in game development and give us some insight on whether we like game development or not. The reason why this project is important to us is because we all have experience with playing video games so it will be interesting to learn how to make a video game ourselves.
 * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
   * C++ - The coding language we will be using
 * What will be the input/output of your project? What are the features that the project provides?
   * Input (Outside of Combat):
     * User can type in commands with certain action keywords that let them interact with the world in the game
     * "PICK up \<item_name\>"
     * "MOVE to \<location_name\>"
     * "TALK to \<NPC_name\>"
     * This allows the user to interact with the world in their own way as long as they use the commands
   * Input (During Combat):
     * The User is given a set of commands they can choose from
     * Consisting of attack, flee, or use an itme within combat
     * as of right now still working on options for combat
   * Output
     * Output during combat would be text that shows the health bar of both the enemies and the player, it shows the set of actions that user can do and its stats if the action has stats, and this output would reprint after every turn to update the health bars and etc. The output would also print out whether an attack was succesful or not.
     * Output outside of combat would basically be text that are descriptions in order to aid the user in visualising the game. After each action text would be written back in response to the user's choice. These descriptions would also help progress the player through the game.
    * The features of this game are that there will be multiple characters to choose from, each with different abilities, stats, flaws, and etc. that make them unique. The player will progres through the dungeon by finding their way to next level by using the hints they find in the world and by fighting various enemeies that they will encounter along the way. The combat system is a turned based combat system, and the player will have the choices to attack, use an item, or flee the battle. Depending on the plater and enemy stats, damage received and dealt will vary accordingly so the plater must strategize each and every turn in order to succeed. The player will have an inventory system that will hold all kinds of items. One type item would be potions that boost stats during battle. Other items would weapons and armor that increase the base stats that the user has so they are stronger in combat. Another type of item would be story relevant items where the item is necessary in order for the player to progress in the game (like a key to a door).
 
 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
 > * Schedule two check-ins using Calendly. You need to pick both time slots during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members

## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design pattern(s) did you use? For each pattern you must explain in 4-5 sentences:
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design pattern(s) you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 

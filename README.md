# Monocular Visual Odometry (initially called "frustration-child")

Born out of stress and frustration from studying for software interviews.  
Using Friedrich Fraundorfer and Davide Scaramuzza's Visual Odometry tutorial (IEEE)  

## What can this thing do? (Milestones*)  
1. unitless odometry of my laptop moving in free space using ts webcam
2. unitless odometry of my [duckiebot](duckietown.mit.edu) moving around
3. odometry in meters of duckiebot using an in-frame reference of known dimensions
4. this is a lofty goal, but perhaps package this as a [MOOS-IvP](moos-ivp.org) app after asking if people want it.

*this project is too small to justify using github milestones.  

## Components/Steps 
1. Extract features with feature detector  
2. Track features between current image frame and previous one  
3. Remove outliers using RANSAC  
4. Guess the camera transformation  

The cmake list styles and directory organization is mostly inherited from [moos-ivp](https://github.com/jogama/moos-ivp-jogama)'s [extend](http://oceanai.mit.edu/moos-ivp/pmwiki/pmwiki.php?n=Tree.Extend) format.  

## To Build/Compile  
Navigate to the directory where you've dumped the code:
	$ mkdir build
	$ cd build
	$ cmake ..
	$ make
	
And it's built! 	

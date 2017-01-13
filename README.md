# Visual Odometry (initially called "frustration-child")

Born out of stress and frustration from studying for software interviews.  
Using Friedrich Fraundorfer and Davide Scaramuzza's Visual Odometry tutorial (IEEE)  

not yet sure if I'm doing this monocular or stereo. I'd need to buy webcams for the latter, but a pair of logitecs come as low as ~20...

## Components/Steps 
1. Extract features with feature detector  
2. Match features between current image frame and previous one  
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

# Visual Odometry (initially called "frustration-child")

Born out of stress and frustration from studying for software interviews.  
Using Friedrich Fraundorfer and Davide Scaramuzza's Visual Odometry tutorial (IEEE)  

not yet sure if I'm doing this monocular or stereo. I'd need to buy webcams for the latter, but a pair of logitecs come as low as ~20...

## Components/Steps 
    1. Extract features with feature detector
	2. Match features between current image frame and previous one
	3. Remove outliers using RANSAC
	4. Guess the camera transformation

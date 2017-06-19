Implemented a PID controller in C++

# Reflection : 

In this project, I have built a PID controller and tuned the PID hyperparameters by applying the general processing flow as described in the SDCND lessons.
My implementation of the PID controller in C++ is spawned to control steer and maneuvers the vehicle around the track. The simulator provides the cross track error (CTE) and the velocity (mph) in order to compute the appropriate steering angle.

# The effect of the P, I, D component of the PID algorithm: 

this image https://s3.cn-north-1.amazonaws.com.cn/u-img/ddd2fd42-36ec-4346-97a2-78743501d3f6 has explain the effect of the P, I, D component

I tweaked the PID coefficients via trial and error and used that to update the steering value.
While running the contoller with varying coefficients values for the P,I,D, I observed change in magnitude of oscillation, steering and cross track error. 
I observed an increase in value of P increased the magnitude of the oscillation, and setting the D coefficients too high caused sharp steering change.  
Setting the P value to 0.2 and the value for D at 3.0 gave me an expected result and found the CTE dropped down.
Then I started tweaking integral factor that counter systematic bias and setting the integral component to 0.001 helped the CTE converged down to 0.04 or -0.10.




 
 
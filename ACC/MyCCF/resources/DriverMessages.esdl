package MyCCF.resources;

data interface DriverMessages {
	real brake = 0.0;
	real power = 0.0;
	boolean ignition = false;
	boolean on = false;
	boolean display = false; 
	boolean increment = false;
	boolean decrement = false;
	kmh soll = 40.0 [kmh];
}

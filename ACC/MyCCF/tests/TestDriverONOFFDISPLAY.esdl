package MyCCF.tests;

import MyCCF.resources.DriverMessages;
import MyCCF.resources.TestMessages;
import SystemLib.CounterTimer.Timer;
import SystemLib.CounterTimer.CountDown;
import SystemLib.CounterTimer.StopWatch;
import MyCCF.resources.curve_real;

singleton class TestDriverONOFFDISPLAY
writes DriverMessages.on, TestMessages.testONOFFDISPLAYGood, TestMessages.testONOFFDISPLAYDone
reads DriverMessages.display {

	characteristic real ^start = 0.0;
	boolean begin;
	boolean result;
	Timer Timer_instance;
	CountDown CountDown_instance;
	StopWatch StopWatch_instance;
	StopWatch StopWatch_instance_2;
	characteristic boolean c = false;
	characteristic curve_real curve_real_instance[16] = {
		{ 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0 },
		{ 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0 }
	};
	characteristic curve_real curve_real_instance_2[16] = {
		{ 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0 },
		{ 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
	};
	characteristic real c_2 = 0.0;
	characteristic curve_real curve_real_instance_3[4] = {
		{ 11.0, 12.0, 13.0, 14.0 },
		{ 0.0, 1.0, 1.0, 0.0 }
	};
	boolean testOn;
	boolean testOff;
	characteristic curve_real curve_real_instance_4[4] = {
		{ 19.0, 20.0, 21.0, 22.0 },
		{ 0.0, 1.0, 1.0, 0.0 }
	};

	@generated("blockdiagram", "50f44607")
	public void calc() {
		DriverMessages.on = (curve_real_instance.getAt(StopWatch_instance_2.value()) == 1.0); // Main/calc 1
		if (curve_real_instance_2.getAt(StopWatch_instance_2.value()) == 1.0) {
			testOn = DriverMessages.display; // Main/calc 2/if-then 1
		} // Main/calc 2
		if (curve_real_instance_3.getAt(StopWatch_instance_2.value()) == 1.0) {
			testOff = (!DriverMessages.display); // Main/calc 3/if-then 1
		} // Main/calc 3
		TestMessages.testONOFFDISPLAYGood = ((testOn == testOff) == true); // Main/calc 4
		TestMessages.testONOFFDISPLAYDone = (curve_real_instance_4.getAt(StopWatch_instance_2.value()) == 1.0); // Main/calc 5
		if (c) {
			StopWatch_instance_2.compute(); // Main/calc 6/if-then 1
		} else {
			StopWatch_instance_2.reset(); // Main/calc 6/if-else 1
		} // Main/calc 6
	}
}
package MyCCF.tests;

import MyCCF.resources.DriverMessages;
import MyCCF.resources.TestMessages;
import SystemLib.CounterTimer.Timer;
import SystemLib.CounterTimer.CountDown;
import SystemLib.CounterTimer.StopWatch;

singleton class TestDriverONOFFDISPLAY
writes DriverMessages.on, TestMessages.testONOFFDISPLAYGood
reads DriverMessages.display {

	characteristic real ^start = 0.0;
	boolean begin;
	boolean result;
	Timer Timer_instance;
	CountDown CountDown_instance;
	StopWatch StopWatch_instance;

	@generated("blockdiagram", "a36be990")
	public void calc() {
		if (false == DriverMessages.display) {
			TestMessages.testONOFFDISPLAYGood = true; // Main/calc 1/if-then 1
		} else {
			TestMessages.testONOFFDISPLAYGood = false; // Main/calc 1/if-else 1
		} // Main/calc 1
		CountDown_instance.compute(); // Main/calc 2
		DriverMessages.on = CountDown_instance.value(); // Main/calc 3
		if (begin) {
			CountDown_instance.begin(5); // Main/calc 4/if-then 1
		} // Main/calc 4
	}
}
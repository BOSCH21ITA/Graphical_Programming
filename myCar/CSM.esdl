package myCar;

class CSM {

	@set
	private real bra;
	@set
	private boolean on;
	@get
	private boolean isOn;

	@generated("statemachine", "000000")
	public void cSMStatemachineTrigger() triggers CSMStatemachine;

	@generated("statemachine", "d17a2d9f")
	statemachine CSMStatemachine using CSMStatemachineStates {
		start Off;

		state Off {
			entry {
				isOn = false;
			}
			transition on to On;
		}

		state On {
			entry {
				isOn = true;
			}
			transition bra > 0.0 to Off;
		}
	}
}

@generated("statemachine", "000000")
type CSMStatemachineStates is enum {
	Off,
	On
};
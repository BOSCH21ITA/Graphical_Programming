package MyCCF.myCar;

class ACC {

	@set
	private real brake;
	@set
	private boolean on;
	@get
	private boolean accOn;

	@generated("statemachine", "000000")
	public void aCCStatemachineTrigger() triggers ACCStatemachine;

	@generated("statemachine", "91be91f9")
	statemachine ACCStatemachine using ACCStatemachineStates {
		start Off;

		state On {
			entry {
				accOn = true;
			}
			transition brake > 0 to Braking;
			transition on to Off;
		}

		state Off {
			entry {
				accOn = false;
			}
			transition brake > 0 to Braking;
			transition on to On;
		}

		state Braking {
			entry {
				accOn = false;
			}
			transition brake == 0 to Off;
		}
	}
}

@generated("statemachine", "000000")
type ACCStatemachineStates is enum {
	On,
	Off,
	Braking
};
application {
	class myCar.myCar
	class myCar.Control
	class myCar.Driver
	class myCar.KFDriver
	class SystemLib.Miscellaneous.DeltaTimeService
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process myCar.KFDriver.calc
		process myCar.Control.calc
		process myCar.myCar.calc
	}
}
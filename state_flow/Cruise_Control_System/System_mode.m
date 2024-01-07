classdef (Enumeration) System_mode < Simulink.IntEnumType
    enumeration
        Do_nothing(0)
        Stop(1)
        Accelerate(2)
		Deaccelerate(3)
        brake(4)
        No_control_speed(5)
        Fault(6)
    end    
end
classdef (Enumeration) App_modes < Simulink.IntEnumType
    enumeration
        Normal(0)
        Downgraded_sen_1(1)
        Downgraded_sen_2(2)
        Failure(3)
    end
end
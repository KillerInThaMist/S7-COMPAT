class CfgVehicles {
	class NATO_BOX_Base;
	class Box_NATO_Ammo_F : NATO_BOX_Base
	{
		maximumLoad = 2500;
	};
	class Box_NATO_Grenades_F : NATO_BOX_Base
	{
		maximumLoad = 1500;
	};
	/*class RHS_AH64_base;
    class RHS_AH64D: RHS_AH64_base {
        class Turrets{
            class MainTurret {
                class OpticsIn {
                    class Medium : Wide {
                        directionStabilized =  null;
                    };
                    class Wide {
                        directionStabilized = null;
                    };
                };
            };
        };
    };*/
    //class Helicopter_Base_H;
    class RHS_MELB_AH6M;
    class RHS_MELB_AH6M_M: RHS_MELB_AH6M {
        class Turrets {
            class CopilotTurret {
                class OpticsIn {
                    class Wide {
                        directionStabilized = 0;
                    };
                };
            };
        };
    };
}

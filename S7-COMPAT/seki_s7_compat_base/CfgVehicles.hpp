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
    class RHS_MELB_base;
    class RHS_MELB_base: RHS_MELB_base {
        class Turrets;
        class Turrets: Turrets{
            class CopilotTurret;
            class CopilotTurret: CopilotTurret {
				class OpticsIn {
					class Wide
					{
						opticsDisplayName="TRK COR";
						initAngleX=0;
						minAngleX=-360;
						maxAngleX=360;
						initAngleY=0;
						minAngleY=-15;
						maxAngleY=85;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0};
						directionStabilized=1;
						gunnerOpticsModel="rhsusf\addons\rhsusf_melb\data\optics\melb_flir_wf.p3d";
						opticsPPEffects[]=
						{
							"OpticsCHAbera3",
							"OpticsBlur3"
						};
						gunnerOpticsEffect[]=
						{
							"TankCommanderOptics2"
						};
					};
                };
			};
        };
    };
}

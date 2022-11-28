class CfgVehicles
{
	class NATO_BOX_Base;
	class Box_NATO_Ammo_F : NATO_BOX_Base
	{
		maximumLoad = 2500;
	};
	class Box_NATO_Grenades_F : NATO_BOX_Base
	{
		maximumLoad = 1500;
	};
	class Heli_light_03_base_F;
	class UK3CB_BAF_Wildcat_Base : Heli_light_03_base_F
	{
		ace_cargo_space = 10;
	};
	class ACE_RepairItem_Base;
	class ACE_Track : ACE_RepairItem_Base
	{
		ace_cargo_size = 1;
	};
	class ACE_Wheel : ACE_RepairItem_Base
	{
		ace_cargo_size = 1;
	};
	class Land_FlexibleTank_01_F;
	class Land_FlexibleTank_01_forest_F : Land_FlexibleTank_01_F
	{
		ace_refuel_fuelCapacity = -10;
		//Dragging
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
		//Cargo
		ace_cargo_canLoad = 1;
		ace_cargo_size = 3;
		ace_cargo_noRename = 0;
	};
	class Machine_base_F;
	class Land_EngineCrane_01_F : Machine_base_F
	{
		ace_repair_canRepair = 1;
		// Dragging
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
		//Cargo
		ace_cargo_canLoad = 1;
		ace_cargo_size = 8;
		ace_cargo_noRename = 0;
	};
	class Box_NATO_AmmoVeh_F : NATO_Box_Base
	{
		ace_rearm_defaultSupply = 100000;
		// Dragging
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
		//Cargo
		ace_cargo_canLoad = 1;
		ace_cargo_size = 5;
		ace_cargo_noRename = 0;
	};
	class VirtualReammoBox_F;
	class VirtualReammoBox_small_F : VirtualReammoBox_F
	{
		ace_rearm_defaultSupply = 1200;
		// Dragging
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

		// Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

		//Cargo
		ace_cargo_canLoad = 1;
		ace_cargo_size = 2;
		ace_cargo_noRename = 0;
	};
	class CargoNet_01_ammo_base_F;
	class B_CargoNet_01_ammo_F : CargoNet_01_ammo_base_F
	{
		// Dragging
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

		// Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
		
		//Cargo
		ace_cargo_canLoad = 1;
		ace_cargo_size = 6;
		ace_cargo_noRename = 0;
		ace_cargo_space = 6;
		ace_cargo_hasCargo = 1;
	};
};
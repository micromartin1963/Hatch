
class CfgPatches
{
	class Hatch
	{
		units[] = {"Land_Hatch"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgMods
{
	class Hatch
	{
		type = "mod";
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class House;




	class Land_Hatch: HouseNoDestruct
	{
		scope = 1;
		model = "Hatch\models\Land_Hatch.p3d";
		class Doors
		{
			class Door1
			{
				displayName = "Hatch door In";
				component = "Door1";
				soundPos = "door1_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};

		};

	};



};
class CfgPatches
{
	class PhoenixArmoury_Unit_707th
	{
		author="Marco";
		name="Phoenix Armoury 707th";
		url = "https://discord.gg/sM7krRhPmh";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"PhoenixCore",
		};
		units[]=
		{
			"PhoenixArmoury_Unit_707th_Trooper",
			"PhoenixArmoury_Unit_707th_Sergeant",
			"PhoenixArmoury_Unit_707th_CO",
		};
		weapons[]=
		{
			"PhoenixArmoury_Unit_707th_Trooper_Helmet",
			"PhoenixArmoury_Unit_707th_Sergeant_Helmet",
			"PhoenixArmoury_Unit_707th_CO_Helmet",
			"PhoenixArmoury_Unit_707th_Trooper_Uniform",
			"PhoenixArmoury_Unit_707th_Sergeant_Uniform",
			"PhoenixArmoury_Unit_707th_CO_Uniform",
		};
	};
};	
class CfgWeapons
{
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class JLTS_CloneNVGRange;
	class JLTS_CloneArmor;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneVestRecon;


	class PhoenixArmoury_Unit_707th_Trooper_Helmet: JLTS_CloneHelmetP2
	{
		author="Cosmos";
		displayName="Clone Trooper Helmet [707th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_707th\PhoenixArmoury_Unit_707th_Trooper_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_707th_Sergeant_Helmet: JLTS_CloneHelmetP2
	{
		author="Cosmos";
		displayName="Clone Sergeant Helmet [707th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_707th\PhoenixArmoury_Unit_707th_Sergeant_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_707th_CO_Helmet: JLTS_CloneHelmetP2
	{
		author="Cosmos";
		displayName="Clone CO Helmet [707th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_707th\PhoenixArmoury_Unit_707th_CO_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Unit_707th_Trooper_Uniform: JLTS_CloneArmor
	{
	    author="Cosmos";
		displayName="Clone Trooper Uniform [707th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_707th_Trooper";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_707th_Sergeant_Uniform: JLTS_CloneArmor
	{
	    author="Cosmos";
		displayName="Clone Sergeant Uniform [707th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_707th_Sergeant";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_707th_CO_Uniform: JLTS_CloneArmor
	{
	    author="Cosmos";
		displayName="Clone CO Uniform [707th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_707th_CO";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
};
class CfgVehicles
{
    class JLTS_Clone_belt_bag;
	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_rto;
	class JLTS_Clone_P2_DC15A;



	class PhoenixArmoury_Unit_707th_Trooper: JLTS_Clone_P2_DC15A
	{
		author="Cosmos";
		displayName="Clone Trooper";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_707th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_707th_Trooper_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_707th\PhoenixArmoury_Unit_707th_Trooper_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_707th\PhoenixArmoury_Unit_707th_Trooper_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_707th_Trooper_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_707th_Trooper_Helmet",
		};
	};
	class PhoenixArmoury_Unit_707th_Sergeant: JLTS_Clone_P2_DC15A
	{
		author="Cosmos";
		displayName="Clone Sergeant";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_707th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_707th_Sergeant_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_707th\PhoenixArmoury_Unit_707th_Sergeant_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_707th\PhoenixArmoury_Unit_707th_Sergeant_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_707th_Sergeant_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_707th_Sergeant_Helmet",
		};
	};
	class PhoenixArmoury_Unit_707th_CO: JLTS_Clone_P2_DC15A
	{
		author="Cosmos";
		displayName="Clone CO";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_707th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_707th_CO_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_707th\PhoenixArmoury_Unit_707th_CO_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_707th\PhoenixArmoury_Unit_707th_CO_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_707th_CO_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_707th_CO_Helmet",
		};
	};
};
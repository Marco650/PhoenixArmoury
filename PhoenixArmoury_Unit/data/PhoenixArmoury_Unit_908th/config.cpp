class CfgPatches
{
	class PhoenixArmoury_Unit_908th
	{
		author="Marco";
		name="Phoenix Armoury 908th";
		url = "https://discord.gg/sM7krRhPmh";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"PhoenixCore",
		};
		units[]=
		{
			"PhoenixArmoury_Unit_908th_Trooper",
			"PhoenixArmoury_Unit_908th_NCO",
			"PhoenixArmoury_Unit_908th_Medic",
			"PhoenixArmoury_Unit_908th_Lieutenant",
			"PhoenixArmoury_Unit_908th_Captain",
			"PhoenixArmoury_Unit_908th_Commander",
		};
		weapons[]=
		{
			"PhoenixArmoury_Unit_908th_Trooper_Helmet",
			"PhoenixArmoury_Unit_908th_NCO_Helmet",
			"PhoenixArmoury_Unit_908th_Captain_Helmet",
			"PhoenixArmoury_Unit_908th_Commander_Helmet",
			"PhoenixArmoury_Unit_908th_Trooper_Vest",
			"PhoenixArmoury_Unit_908th_NCO_Vest",
			"PhoenixArmoury_Unit_908th_Officer_Vest",
			"PhoenixArmoury_Unit_908th_Command_Vest",
			"PhoenixArmoury_Unit_908th_Trooper_Uniform",
			"PhoenixArmoury_Unit_908th_Medic_Uniform",
			"PhoenixArmoury_Unit_908th_Lieutenant_Uniform",
			"PhoenixArmoury_Unit_908th_Captain_Uniform",
			"PhoenixArmoury_Unit_908th_Commander_Uniform",
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
	class JLTS_CloneHelmetAB;
	class JLTS_CloneVestHolster;
	class JLTS_CloneVestOfficer;
	class JLTS_CloneVestAirborne;
	class JLTS_CloneVestLieutenant;
	class JLTS_CloneVestSuspender;
	class JLTS_CloneVestAirborneNCO;


	class PhoenixArmoury_Unit_908th_Trooper_Helmet: JLTS_CloneHelmetAB
	{
		author="Marco";
		displayName="Clone Trooper Helmet [908th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Trooper_Helmet_co.paa"
		};
	};
	class PhoenixArmoury_Unit_908th_NCO_Helmet: JLTS_CloneHelmetAB
	{
		author="Marco";
		displayName="Clone NCO Helmet [908th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_NCO_Helmet_co.paa"
		};
	};
	class PhoenixArmoury_Unit_908th_Captain_Helmet: JLTS_CloneHelmetAB
	{
		author="Marco";
		displayName="Clone Captain Helmet [908th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Captain_Helmet_co.paa"
		};
	};
	class PhoenixArmoury_Unit_908th_Commander_Helmet: JLTS_CloneHelmetAB
	{
		author="Marco";
		displayName="Clone Commander Helmet [908th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Commander_Helmet_co.paa"
		};
	};
	class PhoenixArmoury_Unit_908th_Trooper_Vest: JLTS_CloneVestAirborne
	{
		author="Marco";
		displayName="Clone Trooper Vest [908th]";
		hiddenSelectionsTextures[]=
		{
			"",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Officer_Vest_Co.paa",
		};
	};
	class PhoenixArmoury_Unit_908th_NCO_Vest: JLTS_CloneVestAirborneNCO
	{
		author="Marco";
		displayName="Clone NCO Vest [908th]";
		hiddenSelectionsTextures[]=
		{
			"",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Heavy_Vest_Co.paa",
		};
	};
	class PhoenixArmoury_Unit_908th_Officer_Vest: JLTS_CloneVestAirborne
	{
		author="Marco";
		displayName="Clone Officer Vest [908th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Officer_Vest_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Heavy_Vest_Co.paa",
		};
	};
	class PhoenixArmoury_Unit_908th_Command_Vest: JLTS_CloneVestAirborneNCO
	{
		author="Marco";
		displayName="Clone Command Vest [908th]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Officer_Vest_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Heavy_Vest_Co.paa",
		};
	};
	class PhoenixArmoury_Unit_908th_Trooper_Uniform: JLTS_CloneArmor
	{
	    author="Marco";
		displayName="Clone Trooper Uniform [908th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_908th_Trooper";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_908th_Medic_Uniform: JLTS_CloneArmor
	{
	    author="Marco";
		displayName="Clone Medic Uniform [908th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_908th_Medic";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_908th_Lieutenant_Uniform: JLTS_CloneArmor
	{
	    author="Marco";
		displayName="Clone Lieutenant Uniform [908th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_908th_Lieutenant";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_908th_Captain_Uniform: JLTS_CloneArmor
	{
	    author="Marco";
		displayName="Clone Captain Uniform [908th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_908th_Captain";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Unit_908th_Commander_Uniform: JLTS_CloneArmor
	{
	    author="Marco";
		displayName="Clone Commander Uniform [908th]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Unit_908th_Commander";
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



	class PhoenixArmoury_Unit_908th_Trooper: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Clone Trooper";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_908th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_908th_Trooper_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Trooper_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Trooper_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_908th_Trooper_Helmet",
			"PhoenixArmoury_Unit_908th_Trooper_Vest",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_908th_Trooper_Helmet",
			"PhoenixArmoury_Unit_908th_Trooper_Vest",
		};
	};
	class PhoenixArmoury_Unit_908th_NCO: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Clone NCO";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_908th_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Unit_908th_Trooper_Uniform";
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_908th_NCO_Helmet",
			"PhoenixArmoury_Unit_908th_NCO_Vest",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_908th_NCO_Helmet",
			"PhoenixArmoury_Unit_908th_NCO_Vest",
		};
	};
	class PhoenixArmoury_Unit_908th_Medic: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Clone Medic";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_908th_Sub";
		backpack="";
		uniformclass="JLTS_PA_908th_Medic_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Medic_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Trooper_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_908th_Trooper_Helmet",
			"PhoenixArmoury_Unit_908th_Trooper_Vest",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_908th_Trooper_Helmet",
			"PhoenixArmoury_Unit_908th_Trooper_Vest",
		};
	};
	class PhoenixArmoury_Unit_908th_Lieutenant: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Clone Lieutenant";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_908th_Sub";
		backpack="";
		uniformclass="JLTS_PA_908th_Lieutenant_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Lieutenant_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Lieutenant_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_908th_NCO_Helmet",
			"PhoenixArmoury_Unit_908th_Officer_Vest",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_908th_NCO_Helmet",
			"PhoenixArmoury_Unit_908th_Officer_Vest",
		};
	};
	class PhoenixArmoury_Unit_908th_Captain: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Clone Captain";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_908th_Sub";
		backpack="";
		uniformclass="JLTS_PA_908th_Captain_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Captain_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Lieutenant_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_908th_Captain_Helmet",
			"PhoenixArmoury_Unit_908th_Command_Vest",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_908th_Captain_Helmet",
			"PhoenixArmoury_Unit_908th_Command_Vest",
		};
	};
	class PhoenixArmoury_Unit_908th_Commander: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Clone Commander";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Unit_908th_Sub";
		backpack="";
		uniformclass="JLTS_PA_908th_Commander_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Commander_Upper_Co.paa",
			"PhoenixArmoury_Unit\data\PhoenixArmoury_Unit_908th\PhoenixArmoury_Unit_908th_Commander_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Unit_908th_Commander_Helmet",
			"PhoenixArmoury_Unit_908th_Command_Vest",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Unit_908th_Commander_Helmet",
			"PhoenixArmoury_Unit_908th_Command_Vest",
		};
	};
};
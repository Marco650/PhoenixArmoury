class CfgPatches
{
	class PhoenixArmoury_Developer
	{
		author="Marco";
		name="Phoenix Armoury Developer";
		url = "https://discord.gg/sM7krRhPmh";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"PhoenixCore",
		};
		units[]=
		{
			"PhoenixArmoury_Developer_Marco_Backpack",
			"PhoenixArmoury_Developer_Marco",
			"PhoenixArmoury_Developer_Cosmos",
			"PhoenixArmoury_Developer_Hando",
			"PhoenixArmoury_Developer_Schlabbie",
		};
		weapons[]=
		{
			"PhoenixArmoury_Developer_Marco_NVG",
			"PhoenixArmoury_Developer_Marco_Helmet",
			"PhoenixArmoury_Developer_Cosmos_Helmet",
			"PhoenixArmoury_Developer_Hando_Helmet",
			"PhoenixArmoury_Developer_Schlabbie_Helmet",
			"PhoenixArmoury_Developer_Marco_Vest",
			"PhoenixArmoury_Developer_Schlabbie_Vest",
			"PhoenixArmoury_Developer_Marco_Uniform",
			"PhoenixArmoury_Developer_Cosmos_Uniform",
			"PhoenixArmoury_Developer_Hando_Uniform",
			"PhoenixArmoury_Developer_Schlabbie_Uniform",
		};
	};
};	
class CfgFactionClasses 
{
	class PhoenixArmoury_Faction
	{
	displayName = "Phoenix Armoury";
	};
};
class CfgEditorSubcategories
{
	class PhoenixArmoury_Developer_Sub
	{
		displayName="Phoenix Armoury Developers";
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
	class PhoenixCore_P1_Helmet;
	class JLTS_CloneVestKama;
	class JLTS_CloneVestReconOfficer;

	class PhoenixArmoury_Developer_Marco_NVG: JLTS_CloneNVGRange
	{
		author="Marco";
	    displayName="Marco's Rangefinder [Developer]";
		modelOptics="PhoenixCore\data\NVG\PhoenixCore_NVG_Proxy.p3d";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Developer_Marco_NVG_Co.paa"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class PhoenixArmoury_Developer_Marco_Helmet: JLTS_CloneHelmetP2
	{
		author="Marco";
		displayName="Mudjumper Marco's Helmet [Developer]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Developer_Marco_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Developer_Cosmos_Helmet: JLTS_CloneHelmetP2
	{
		author="Cosmos";
		displayName="Trooper Cosmos's Helmet [Developer]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Developer_Cosmos_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Developer_Hando_Helmet: JLTS_CloneHelmetP2
	{
		author="Hando";
		displayName="Trooper Hando's Helmet [Developer]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Developer_Hando_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Developer_Schlabbie_Helmet: PhoenixCore_P1_Helmet
	{
		author="Marco";
		displayName="Trooper Schlabbie's Helmet [Developer]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Developer_Schlabbie_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Developer_Marco_Vest: JLTS_CloneVestKama
	{
		author="Marco";
		displayName="Mudjumper Marco's Kama [Developer]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Developer_Marco_Vest_Co.paa"
		};
	};
	class PhoenixArmoury_Developer_Schlabbie_Vest: JLTS_CloneVestReconOfficer
	{
		author="Marco";
		displayName="Trooper Schlabbie  vest [Developer]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Schlabbie_Officer_Vest_Co.paa",
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Schlabbie_Heavy_Vest_Co.paa",
		};
	};
	class PhoenixArmoury_Developer_Marco_Uniform: JLTS_CloneArmor
	{
	    author="Marco";
		displayName="Mudjumper Marco's Armour [Developer]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Developer_Marco";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Developer_Cosmos_Uniform: JLTS_CloneArmor
	{
	    author="Cosmos";
		displayName="Trooper Cosmos's Armour [Developer]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Developer_Cosmos";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Developer_Hando_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Trooper Hando's Armour [Developer]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Developer_Hando";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Developer_Schlabbie_Uniform: JLTS_CloneArmor
	{
	    author="Marco";
		displayName="Trooper Schlabbie's Armour [Developer]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Developer_Schlabbie";
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


	class PhoenixArmoury_Developer_Marco_Backpack: JLTS_Clone_belt_bag
	{
		author="Marco";
		displayname="Mudjumper Marco's Backpack [Developer]";
		maximumload=300;
		hiddenselectionstextures[]=
		{
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Developer_Marco_Backpack_Co.paa",
		};
	};	
	class PhoenixArmoury_Developer_Marco: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Mudjumper Marco";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Developer_Sub";
		backpack="PhoenixArmoury_Developer_Marco_Backpack";
		uniformclass="PhoenixArmoury_Developer_Marco_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Developer_Marco_Upper_Co.paa",
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Developer_Marco_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Developer_Marco_NVG",
			"PhoenixArmoury_Developer_Marco_Helmet",
			"PhoenixArmoury_Developer_Marco_Vest",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Developer_Marco_NVG",
			"PhoenixArmoury_Developer_Marco_Helmet",
			"PhoenixArmoury_Developer_Marco_Vest",
		};
	};
	class PhoenixArmoury_Developer_Cosmos: JLTS_Clone_P2_DC15A
	{
		author="Cosmos";
		displayName="Clone Trooper Cosmos";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Developer_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Developer_Cosmos_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Developer_Cosmos_Upper_Co.paa",
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Developer_Cosmos_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Developer_Cosmos_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Developer_Cosmos_Helmet",
		};
	};
	class PhoenixArmoury_Developer_Hando: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Desert Trooper Hando";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Developer_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Developer_Hando_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Developer_Hando_Upper_Co.paa",
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Developer_Hando_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Developer_Hando_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Developer_Hando_Helmet",
		};
	};
	class PhoenixArmoury_Developer_Schlabbie: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Clone Trooper Schlabbie";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Developer_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Developer_Schlabbie_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Developer_Schlabbie_Upper_Co.paa",
			"PhoenixArmoury_Developer\data\PhoenixArmoury_Developer_Schlabbie_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Developer_Schlabbie_Helmet",
			"PhoenixArmoury_Developer_Schlabbie_Vest",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Developer_Schlabbie_Helmet",
			"PhoenixArmoury_Developer_Schlabbie_Vest",
		};
	};
};
class CfgPatches
{
	class PhoenixArmoury_Vault
	{
		author="Marco";
		name="Phoenix Armoury Vault";
		url = "https://discord.gg/sM7krRhPmh";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"PhoenixCore",
		};
		units[]=
		{
			"PhoenixArmoury_Vault_Warden_Backpack",
			"PhoenixArmoury_Vault_MTP_ARF_Backpack_Belt",
			"PhoenixArmoury_Vault_MTP_ARF_Backpack_RTO",
			"PhoenixArmoury_Vault_Desert",
			"PhoenixArmoury_Vault_75th",
			"PhoenixArmoury_Vault_Warden",
			"PhoenixArmoury_Vault_MTP_ARF",
		};
		weapons[]=
		{
			"PhoenixArmoury_Vault_Desert_Helmet",
			"PhoenixArmoury_Vault_75th_Helmet",
			"PhoenixArmoury_Vault_Warden_Helmet",
			"PhoenixArmoury_Vault_MTP_ARF_Helmet",
			"PhoenixArmoury_Vault_75th_Vest",
			"PhoenixArmoury_Vault_MTP_ARF_Vest_Holster",
			"PhoenixArmoury_Vault_MTP_ARF_Vest_Officer",
			"PhoenixArmoury_Vault_MTP_ARF_Vest_Recon",
			"PhoenixArmoury_Vault_MTP_ARF_Vest_Kama",
			"PhoenixArmoury_Vault_Desert_Uniform",
			"PhoenixArmoury_Vault_75th_Uniform",
			"PhoenixArmoury_Vault_Warden_Uniform",
			"PhoenixArmoury_Vault_MTP_ARF_Uniform",
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
	class PhoenixCore_ARF_Helmet;
	class JLTS_CloneVestHolster;
	class JLTS_CloneVestRecon;
	class JLTS_CloneVestOfficer;
	class JLTS_CloneVestKama;
	class JLTS_CloneVestLieutenant;


	class PhoenixArmoury_Vault_Desert_Helmet: JLTS_CloneHelmetP2
	{
		author="Hando";
		displayName="Desert Trooper Helmet [Vault]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_Desert_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Vault_75th_Helmet: JLTS_CloneHelmetP2
	{
		author="Marco";
		displayName="Phoenix Trooper Helmet [Vault]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_75th_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Vault_Warden_Helmet: JLTS_CloneHelmetP2
	{
		author="Marco";
		displayName="Warden Trooper Helmet [Vault]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_Warden_Helmet_Co.paa"
		};
	};
	class PhoenixArmoury_Vault_MTP_ARF_Helmet: PhoenixCore_ARF_Helmet
	{
		author="Marco";
		displayName="ARF Trooper Helmet [Vault]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_MTP_ARF_Helmet_Co.paa",
			"",
			"\PhoenixCore\data\ARF\PhoenixCore_ARF_Visor_Co.paa"
		};
	};
	class PhoenixArmoury_Vault_75th_Vest: JLTS_CloneVestHolster
	{
		author="Marco";
		displayName="Phoenix Trooper Vest [Vault]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_75th_Vest_Co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
			containerClass="Supply70";
			hiddenSelections[]=
			{
				"camo1",
			};
		};	
	};
	class PhoenixArmoury_Vault_MTP_ARF_Vest_Holster: JLTS_CloneVestHolster
	{
		author="Marco";
		displayName="ARF Trooper Vest [Vault]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_MTP_ARF_Vest_Officer_Co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
			containerClass="Supply70";
			hiddenSelections[]=
			{
				"camo1",
			};
		};	
	};
	class PhoenixArmoury_Vault_MTP_ARF_Vest_Kama: JLTS_CloneVestKama
	{
		author="Marco";
		displayName="ARF Kama Vest [Vault]";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_MTP_ARF_Vest_Officer_Co.paa"
		};
	};
	class PhoenixArmoury_Vault_MTP_ARF_Vest_Officer: JLTS_CloneVestOfficer
	{
		author="Marco";
		displayName="ARF Officer Vest [Vault])";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_MTP_ARF_Vest_Officer_Co.paa"
		};
	};
	class PhoenixArmoury_Vault_MTP_ARF_Vest_Recon: JLTS_CloneVestRecon
	{
		author="Marco";
		displayName="ARF Recon Vest [Vault])";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_MTP_ARF_Vest_Recon_Co.paa"
		};
	};
	class PhoenixArmoury_Vault_Desert_Uniform: JLTS_CloneArmor
	{
	    author="Hando";
		displayName="Desert Trooper Armour [Vault]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Vault_Desert";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Vault_75th_Uniform: JLTS_CloneArmor
	{
	    author="Marco";
		displayName="Phoenix Trooper Armour [Vault]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Vault_75th";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Vault_Warden_Uniform: JLTS_CloneArmor
	{
	    author="Marco";
		displayName="Warden Trooper Armour [Vault]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Vault_Warden";
			containerClass="Supply150";
			mass=40;
			vestType="Rebreather";
		};
	};
	class PhoenixArmoury_Vault_MTP_ARF_Uniform: JLTS_CloneArmor
	{
	    author="Marco";
		displayName="ARF Trooper Armour [Vault]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren";
			uniformClass="PhoenixArmoury_Vault_MTP_ARF";
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
	class JLTS_Clone_RTO_pack;
	class JLTS_Clone_P2_DC15A;


	class PhoenixArmoury_Vault_Warden_Backpack: JLTS_Clone_belt_bag
	{
		author="Marco";
		displayname="Clone Warden Backpack [Vault]";
		maximumload=300;
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_Warden_Backpack_Co.paa",
		};
	};	
	class PhoenixArmoury_Vault_MTP_ARF_Backpack_Belt: JLTS_Clone_belt_bag
	{
		author="Marco";
		displayname="ARF Belt Backpack [Vault]";
		maximumload=300;
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_MTP_ARF_Backpack_Belt_Co.paa",
		};
	};	
	class PhoenixArmoury_Vault_MTP_ARF_Backpack_RTO: JLTS_Clone_RTO_pack
	{
		author="Marco";
		displayname="ARF RTO Backpack [Vault]";
		hiddenselectionstextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_MTP_ARF_Backpack_RTO_Co.paa",
		};
		maximumload=300;
	};	
	class PhoenixArmoury_Vault_Desert: JLTS_Clone_P2_DC15A
	{
		author="Hando";
		displayName="Desert Clone Trooper";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Vault_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Vault_Desert_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_Desert_Upper_Co.paa",
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_Desert_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Vault_Desert_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Vault_Desert_Helmet",
		};
	};
	class PhoenixArmoury_Vault_75th: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Phoenix Clone Trooper";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Vault_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Vault_75th_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_75th_Upper_Co.paa",
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_75th_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Vault_75th_Helmet",
			"PhoenixArmoury_Vault_75th_Vest",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Vault_75th_Helmet",
			"PhoenixArmoury_Vault_75th_Vest",
		};
	};
	class PhoenixArmoury_Vault_Warden: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="Warden Clone Trooper";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Vault_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Vault_Warden_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_Warden_Upper_Co.paa",
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_Warden_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Vault_Warden_Helmet",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Vault_Warden_Helmet",
		};
	};
	class PhoenixArmoury_Vault_MTP_ARF: JLTS_Clone_P2_DC15A
	{
		author="Marco";
		displayName="MTP ARF Trooper";
		faction="PhoenixArmoury_Faction";
	    editorSubcategory="PhoenixArmoury_Vault_Sub";
		backpack="";
		uniformclass="PhoenixArmoury_Vault_MTP_ARF_Uniform";
		hiddenSelectionsTextures[]=
		{
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_MTP_ARF_Upper_Co.paa",
			"PhoenixArmoury_Vault\data\PhoenixArmoury_Vault_MTP_ARF_Lower_Co.paa",
		};
		linkedItems[]=
		{
			"PhoenixArmoury_Vault_MTP_ARF_Helmet",
			"PhoenixArmoury_Vault_MTP_ARF_Vest_Holster",
		};
		respawnLinkedItems[]=
		{
			"PhoenixArmoury_Vault_MTP_ARF_Helmet",
			"PhoenixArmoury_Vault_MTP_ARF_Vest_Holster",
		};
	};
};
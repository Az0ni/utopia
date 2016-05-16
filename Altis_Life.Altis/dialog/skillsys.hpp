class Skillsys {

	idd = 5623;
	movingEnable = 0;
	enableSimulation = 1;
	onload = "_this call life_fnc_updatexp";
	
	class controlsBackground {
	};
	
	class controls {
		
		/*
		class Back: life_RscText
		{
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.232031 * safezoneW;
			h = 0.319 * safezoneH;
		};
		*/
		
		class Skilldisp_numb: Life_RscText
		{
			idc = 5624;
			sizeEx = 0.020;
            text = "";
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.132 * safezoneH;
		};
		/*
		class Skilldisp_list: life_RscListBox
		{
			idc = 5625;
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.253 * safezoneH;
		};
		
		class Skilldisp_rew_button: Life_RscButtonMenu
		{
			idc = -1;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.099 * safezoneH;
		};
		*/
	};
};

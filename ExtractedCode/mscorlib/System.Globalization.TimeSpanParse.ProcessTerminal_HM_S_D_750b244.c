// rea decompile_all
// name: System.Globalization.TimeSpanParse$$ProcessTerminal_HM_S_D
// address: 0x750b244
// body: available
// range: 0x750b244-0x750bc6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750b314 to 0x752c730 System.Globalization.TimeSpanParse.TimeSpanResult$$SetFailure (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Globalization_TimeSpanParse__ProcessTerminal_HM_S_D
                (long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 local_990;
  undefined8 local_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 local_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 local_8c0;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_095216c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0920efa0);
    FUN_03f5c2a4(&DAT_0920dc98);
    DAT_095216c8 = 1;
  }
  local_78 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if ((*(int *)(param_1 + 8) != 4) || ((param_2 >> 2 & 1) != 0)) {
    uVar4 = System_Globalization_TimeSpanParse_TimeSpanResult__SetFailure
                      (param_3,2,DAT_0920dc98,0,0,0);
    return uVar4;
  }
  uVar3 = param_2 & 0xff;
  System_Globalization_TimeSpanParse_TimeSpanToken___ctor(&local_70,0,0);
  local_78 = 0;
  if ((param_2 & 1) == 0) {
    if ((uVar3 >> 1 & 1) == 0) {
LAB_0750bc34:
      uVar5 = 2;
      uVar6 = DAT_0920dc98;
    }
    else {
      uVar1 = 0;
LAB_0750b860:
      System_Globalization_TimeSpanParse_TimeSpanRawInfo__get_PositiveLocalized
                (&local_578,param_1,0);
      uStack_598 = uStack_570;
      local_5a0 = local_578;
      uStack_588 = uStack_560;
      local_590 = uStack_568;
      local_580 = local_558;
      uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullHMSMatch(param_1,&local_5a0,0)
      ;
      if ((uVar4 & 1) != 0) {
        uStack_5d8 = *(undefined8 *)(param_1 + 0x80);
        local_5e0 = *(undefined8 *)(param_1 + 0x78);
        uStack_5c8 = *(undefined8 *)(param_1 + 0x90);
        local_5d0 = *(undefined8 *)(param_1 + 0x88);
        uStack_5e8 = *(undefined8 *)(param_1 + 0xb0);
        local_5f0 = *(undefined8 *)(param_1 + 0xa8);
        uStack_5f8 = *(undefined8 *)(param_1 + 0xa0);
        local_600 = *(undefined8 *)(param_1 + 0x98);
        uStack_608 = *(undefined8 *)(param_1 + 0xd0);
        local_610 = *(undefined8 *)(param_1 + 200);
        uStack_618 = *(undefined8 *)(param_1 + 0xc0);
        local_620 = *(undefined8 *)(param_1 + 0xb8);
        uStack_5b8 = uStack_68;
        local_5c0 = local_70;
        uStack_5a8 = uStack_58;
        local_5b0 = local_60;
        uStack_638 = uStack_68;
        local_640 = local_70;
        uStack_628 = uStack_58;
        local_630 = local_60;
        uVar3 = System_Globalization_TimeSpanParse__TryTimeToTicks
                          (1,&local_5c0,&local_5e0,&local_600,&local_620,&local_640,&local_78);
        if ((uVar3 & 1) == 0) {
          uVar1 = uVar1 | uVar3 ^ 1;
          goto LAB_0750b910;
        }
        goto LAB_0750bc00;
      }
LAB_0750b910:
      System_Globalization_TimeSpanParse_TimeSpanRawInfo__get_PositiveLocalized
                (&local_578,param_1,0);
      uStack_668 = uStack_570;
      local_670 = local_578;
      uStack_658 = uStack_560;
      uStack_660 = uStack_568;
      local_650 = local_558;
      uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullDHMMatch(param_1,&local_670,0)
      ;
      if ((uVar4 & 1) != 0) {
        uStack_688 = *(undefined8 *)(param_1 + 0x80);
        local_690 = *(undefined8 *)(param_1 + 0x78);
        uStack_678 = *(undefined8 *)(param_1 + 0x90);
        uStack_680 = *(undefined8 *)(param_1 + 0x88);
        uStack_6a8 = *(undefined8 *)(param_1 + 0xa0);
        local_6b0 = *(undefined8 *)(param_1 + 0x98);
        uStack_698 = *(undefined8 *)(param_1 + 0xb0);
        uStack_6a0 = *(undefined8 *)(param_1 + 0xa8);
        uStack_6c8 = *(undefined8 *)(param_1 + 0xc0);
        local_6d0 = *(undefined8 *)(param_1 + 0xb8);
        uStack_6b8 = *(undefined8 *)(param_1 + 0xd0);
        uStack_6c0 = *(undefined8 *)(param_1 + 200);
        uStack_708 = uStack_68;
        local_710 = local_70;
        uStack_6f8 = uStack_58;
        uStack_700 = local_60;
        uStack_6e8 = uStack_68;
        local_6f0 = local_70;
        uStack_6d8 = uStack_58;
        uStack_6e0 = local_60;
        uVar3 = System_Globalization_TimeSpanParse__TryTimeToTicks
                          (1,&local_690,&local_6b0,&local_6d0,&local_6f0,&local_710,&local_78);
        if ((uVar3 & 1) != 0) goto LAB_0750bc00;
        uVar1 = uVar1 | uVar3 ^ 1;
      }
      System_Globalization_TimeSpanParse_TimeSpanRawInfo__get_PositiveLocalized
                (&local_578,param_1,0);
      uStack_738 = uStack_570;
      local_740 = local_578;
      uStack_728 = uStack_560;
      uStack_730 = uStack_568;
      local_720 = local_558;
      uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__PartialAppCompatMatch
                        (param_1,&local_740,0);
      if ((uVar4 & 1) != 0) {
        uStack_778 = *(undefined8 *)(param_1 + 0x80);
        local_780 = *(undefined8 *)(param_1 + 0x78);
        uStack_768 = *(undefined8 *)(param_1 + 0x90);
        uStack_770 = *(undefined8 *)(param_1 + 0x88);
        uStack_798 = *(undefined8 *)(param_1 + 0xa0);
        local_7a0 = *(undefined8 *)(param_1 + 0x98);
        uStack_788 = *(undefined8 *)(param_1 + 0xb0);
        uStack_790 = *(undefined8 *)(param_1 + 0xa8);
        uStack_7b8 = uStack_68;
        local_7c0 = local_70;
        uStack_7a8 = uStack_58;
        uStack_7b0 = local_60;
        uStack_758 = uStack_68;
        local_760 = local_70;
        uStack_748 = uStack_58;
        uStack_750 = local_60;
        uStack_7d8 = *(undefined8 *)(param_1 + 0xc0);
        local_7e0 = *(undefined8 *)(param_1 + 0xb8);
        uStack_7c8 = *(undefined8 *)(param_1 + 0xd0);
        uStack_7d0 = *(undefined8 *)(param_1 + 200);
        uVar3 = System_Globalization_TimeSpanParse__TryTimeToTicks
                          (1,&local_760,&local_780,&local_7a0,&local_7c0,&local_7e0,&local_78);
        if ((uVar3 & 1) != 0) goto LAB_0750bc00;
        uVar1 = uVar1 | uVar3 ^ 1;
      }
      System_Globalization_TimeSpanParse_TimeSpanRawInfo__get_NegativeLocalized
                (&local_578,param_1,0);
      uStack_808 = uStack_570;
      local_810 = local_578;
      uStack_7f8 = uStack_560;
      uStack_800 = uStack_568;
      local_7f0 = local_558;
      uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullHMSMatch(param_1,&local_810,0)
      ;
      if ((uVar4 & 1) == 0) {
LAB_0750bacc:
        System_Globalization_TimeSpanParse_TimeSpanRawInfo__get_NegativeLocalized
                  (&local_578,param_1,0);
        uStack_8d8 = uStack_570;
        local_8e0 = local_578;
        uStack_8c8 = uStack_560;
        uStack_8d0 = uStack_568;
        local_8c0 = local_558;
        uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullDHMMatch
                          (param_1,&local_8e0,0);
        if ((uVar4 & 1) != 0) {
          uStack_8f8 = *(undefined8 *)(param_1 + 0x80);
          local_900 = *(undefined8 *)(param_1 + 0x78);
          uStack_8e8 = *(undefined8 *)(param_1 + 0x90);
          uStack_8f0 = *(undefined8 *)(param_1 + 0x88);
          uStack_918 = *(undefined8 *)(param_1 + 0xa0);
          local_920 = *(undefined8 *)(param_1 + 0x98);
          uStack_908 = *(undefined8 *)(param_1 + 0xb0);
          uStack_910 = *(undefined8 *)(param_1 + 0xa8);
          uStack_938 = *(undefined8 *)(param_1 + 0xc0);
          local_940 = *(undefined8 *)(param_1 + 0xb8);
          uStack_928 = *(undefined8 *)(param_1 + 0xd0);
          uStack_930 = *(undefined8 *)(param_1 + 200);
          uStack_978 = uStack_68;
          local_980 = local_70;
          uStack_968 = uStack_58;
          uStack_970 = local_60;
          uStack_958 = uStack_68;
          local_960 = local_70;
          uStack_948 = uStack_58;
          uStack_950 = local_60;
          uVar3 = System_Globalization_TimeSpanParse__TryTimeToTicks
                            (0,&local_900,&local_920,&local_940,&local_960,&local_980,&local_78);
          if ((uVar3 & 1) != 0) goto LAB_0750bbec;
          uVar1 = uVar1 | uVar3 ^ 1;
        }
        System_Globalization_TimeSpanParse_TimeSpanRawInfo__get_NegativeLocalized
                  (&local_578,param_1,0);
        uStack_9a8 = uStack_570;
        local_9b0 = local_578;
        uStack_998 = uStack_560;
        uStack_9a0 = uStack_568;
        local_990 = local_558;
        uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__PartialAppCompatMatch
                          (param_1,&local_9b0,0);
        if ((uVar4 & 1) != 0) {
          uStack_9e8 = *(undefined8 *)(param_1 + 0x80);
          local_9f0 = *(undefined8 *)(param_1 + 0x78);
          uStack_9d8 = *(undefined8 *)(param_1 + 0x90);
          uStack_9e0 = *(undefined8 *)(param_1 + 0x88);
          uStack_a08 = *(undefined8 *)(param_1 + 0xa0);
          local_a10 = *(undefined8 *)(param_1 + 0x98);
          uStack_9f8 = *(undefined8 *)(param_1 + 0xb0);
          uStack_a00 = *(undefined8 *)(param_1 + 0xa8);
          uStack_a28 = uStack_68;
          local_a30 = local_70;
          uStack_a18 = uStack_58;
          uStack_a20 = local_60;
          uStack_9c8 = uStack_68;
          local_9d0 = local_70;
          uStack_9b8 = uStack_58;
          uStack_9c0 = local_60;
          uStack_a48 = *(undefined8 *)(param_1 + 0xc0);
          local_a50 = *(undefined8 *)(param_1 + 0xb8);
          uStack_a38 = *(undefined8 *)(param_1 + 0xd0);
          uStack_a40 = *(undefined8 *)(param_1 + 200);
          uVar3 = System_Globalization_TimeSpanParse__TryTimeToTicks
                            (0,&local_9d0,&local_9f0,&local_a10,&local_a30,&local_a50,&local_78);
          if ((uVar3 & 1) != 0) goto LAB_0750bbec;
          uVar1 = uVar1 | uVar3 ^ 1;
        }
LAB_0750bc18:
        if ((uVar1 & 1) == 0) goto LAB_0750bc34;
      }
      else {
        uStack_848 = *(undefined8 *)(param_1 + 0x80);
        local_850 = *(undefined8 *)(param_1 + 0x78);
        uStack_838 = *(undefined8 *)(param_1 + 0x90);
        uStack_840 = *(undefined8 *)(param_1 + 0x88);
        uStack_868 = *(undefined8 *)(param_1 + 0xa0);
        local_870 = *(undefined8 *)(param_1 + 0x98);
        uStack_858 = *(undefined8 *)(param_1 + 0xb0);
        uStack_860 = *(undefined8 *)(param_1 + 0xa8);
        uStack_878 = *(undefined8 *)(param_1 + 0xd0);
        uStack_880 = *(undefined8 *)(param_1 + 200);
        uStack_888 = *(undefined8 *)(param_1 + 0xc0);
        local_890 = *(undefined8 *)(param_1 + 0xb8);
        uStack_8a8 = uStack_68;
        local_8b0 = local_70;
        uStack_898 = uStack_58;
        uStack_8a0 = local_60;
        uStack_828 = uStack_68;
        local_830 = local_70;
        uStack_818 = uStack_58;
        uStack_820 = local_60;
        uVar3 = System_Globalization_TimeSpanParse__TryTimeToTicks
                          (0,&local_830,&local_850,&local_870,&local_890,&local_8b0,&local_78);
        if ((uVar3 & 1) == 0) {
          uVar1 = uVar1 | uVar3 ^ 1;
          goto LAB_0750bacc;
        }
LAB_0750bbec:
        local_78 = -local_78;
        if (local_78 < 1) goto LAB_0750bc00;
      }
      uVar5 = 4;
      uVar6 = DAT_0920efa0;
    }
    uVar3 = System_Globalization_TimeSpanParse_TimeSpanResult__SetFailure(param_3,uVar5,uVar6,0,0,0)
    ;
  }
  else {
    if (DAT_095216d2 == '\0') {
      FUN_03f5c2a4(&DAT_0918bd68);
      DAT_095216d2 = '\x01';
    }
    if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar8 = *(undefined8 **)(DAT_0918bd68 + 0xb8);
    uStack_98 = puVar8[1];
    local_a0 = *puVar8;
    uStack_88 = puVar8[3];
    local_90 = puVar8[2];
    local_80 = puVar8[4];
    uVar1 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullHMSMatch(param_1,&local_a0,0);
    if ((uVar1 & 1) == 0) {
LAB_0750b404:
      if (DAT_095216d2 == '\0') {
        FUN_03f5c2a4(&DAT_0918bd68);
        DAT_095216d2 = '\x01';
      }
      if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar8 = *(undefined8 **)(DAT_0918bd68 + 0xb8);
      uStack_168 = puVar8[1];
      local_170 = *puVar8;
      uStack_158 = puVar8[3];
      local_160 = puVar8[2];
      local_150 = puVar8[4];
      uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullDHMMatch(param_1,&local_170,0)
      ;
      if ((uVar4 & 1) == 0) {
LAB_0750b4dc:
        if (DAT_095216d2 == '\0') {
          FUN_03f5c2a4(&DAT_0918bd68);
          DAT_095216d2 = '\x01';
        }
        if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar8 = *(undefined8 **)(DAT_0918bd68 + 0xb8);
        uStack_238 = puVar8[1];
        local_240 = *puVar8;
        uStack_228 = puVar8[3];
        local_230 = puVar8[2];
        local_220 = puVar8[4];
        uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__PartialAppCompatMatch
                          (param_1,&local_240,0);
        if ((uVar4 & 1) != 0) {
          uStack_278 = *(undefined8 *)(param_1 + 0x80);
          local_280 = *(undefined8 *)(param_1 + 0x78);
          uStack_268 = *(undefined8 *)(param_1 + 0x90);
          local_270 = *(undefined8 *)(param_1 + 0x88);
          uStack_288 = *(undefined8 *)(param_1 + 0xb0);
          local_290 = *(undefined8 *)(param_1 + 0xa8);
          uStack_258 = uStack_68;
          local_260 = local_70;
          uStack_298 = *(undefined8 *)(param_1 + 0xa0);
          local_2a0 = *(undefined8 *)(param_1 + 0x98);
          uStack_2c8 = *(undefined8 *)(param_1 + 0xd0);
          local_2d0 = *(undefined8 *)(param_1 + 200);
          uStack_2b8 = uStack_68;
          local_2c0 = local_70;
          uStack_2d8 = *(undefined8 *)(param_1 + 0xc0);
          local_2e0 = *(undefined8 *)(param_1 + 0xb8);
          uStack_248 = uStack_58;
          local_250 = local_60;
          uStack_2a8 = uStack_58;
          local_2b0 = local_60;
          uVar2 = System_Globalization_TimeSpanParse__TryTimeToTicks
                            (1,&local_260,&local_280,&local_2a0,&local_2c0,&local_2e0,&local_78);
          bVar7 = true;
          uVar1 = uVar1 | uVar2 ^ 1;
          if ((uVar2 & 1) != 0) goto LAB_0750b768;
        }
        if (DAT_095216d3 == '\0') {
          FUN_03f5c2a4(&DAT_0918bd68);
          DAT_095216d3 = '\x01';
        }
        if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = *(long *)(DAT_0918bd68 + 0xb8);
        uStack_308 = *(undefined8 *)(lVar9 + 0x30);
        local_310 = *(undefined8 *)(lVar9 + 0x28);
        uStack_2f8 = *(undefined8 *)(lVar9 + 0x40);
        local_300 = *(undefined8 *)(lVar9 + 0x38);
        local_2f0 = *(undefined8 *)(lVar9 + 0x48);
        uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullHMSMatch
                          (param_1,&local_310,0);
        if ((uVar4 & 1) != 0) {
          uStack_348 = *(undefined8 *)(param_1 + 0x80);
          local_350 = *(undefined8 *)(param_1 + 0x78);
          uStack_338 = *(undefined8 *)(param_1 + 0x90);
          local_340 = *(undefined8 *)(param_1 + 0x88);
          uStack_358 = *(undefined8 *)(param_1 + 0xb0);
          local_360 = *(undefined8 *)(param_1 + 0xa8);
          uStack_368 = *(undefined8 *)(param_1 + 0xa0);
          local_370 = *(undefined8 *)(param_1 + 0x98);
          uStack_378 = *(undefined8 *)(param_1 + 0xd0);
          local_380 = *(undefined8 *)(param_1 + 200);
          uStack_388 = *(undefined8 *)(param_1 + 0xc0);
          local_390 = *(undefined8 *)(param_1 + 0xb8);
          uStack_328 = uStack_68;
          local_330 = local_70;
          uStack_318 = uStack_58;
          local_320 = local_60;
          uStack_3a8 = uStack_68;
          local_3b0 = local_70;
          uStack_398 = uStack_58;
          local_3a0 = local_60;
          uVar2 = System_Globalization_TimeSpanParse__TryTimeToTicks
                            (0,&local_330,&local_350,&local_370,&local_390,&local_3b0,&local_78);
          uVar1 = uVar1 | uVar2 ^ 1;
          if ((uVar2 & 1) == 0) goto LAB_0750b68c;
LAB_0750b760:
          bVar7 = false;
          goto LAB_0750b768;
        }
LAB_0750b68c:
        if (DAT_095216d3 == '\0') {
          FUN_03f5c2a4(&DAT_0918bd68);
          DAT_095216d3 = '\x01';
        }
        if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = *(long *)(DAT_0918bd68 + 0xb8);
        uStack_3d8 = *(undefined8 *)(lVar9 + 0x30);
        local_3e0 = *(undefined8 *)(lVar9 + 0x28);
        uStack_3c8 = *(undefined8 *)(lVar9 + 0x40);
        local_3d0 = *(undefined8 *)(lVar9 + 0x38);
        local_3c0 = *(undefined8 *)(lVar9 + 0x48);
        uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullDHMMatch
                          (param_1,&local_3e0,0);
        if ((uVar4 & 1) != 0) {
          uStack_3f8 = *(undefined8 *)(param_1 + 0x80);
          local_400 = *(undefined8 *)(param_1 + 0x78);
          uStack_3e8 = *(undefined8 *)(param_1 + 0x90);
          local_3f0 = *(undefined8 *)(param_1 + 0x88);
          uStack_418 = *(undefined8 *)(param_1 + 0xa0);
          local_420 = *(undefined8 *)(param_1 + 0x98);
          uStack_408 = *(undefined8 *)(param_1 + 0xb0);
          local_410 = *(undefined8 *)(param_1 + 0xa8);
          uStack_438 = *(undefined8 *)(param_1 + 0xc0);
          local_440 = *(undefined8 *)(param_1 + 0xb8);
          uStack_428 = *(undefined8 *)(param_1 + 0xd0);
          local_430 = *(undefined8 *)(param_1 + 200);
          uStack_448 = uStack_58;
          local_450 = local_60;
          uStack_458 = uStack_68;
          local_460 = local_70;
          uStack_478 = uStack_68;
          local_480 = local_70;
          uStack_468 = uStack_58;
          local_470 = local_60;
          uVar2 = System_Globalization_TimeSpanParse__TryTimeToTicks
                            (0,&local_400,&local_420,&local_440,&local_460,&local_480,&local_78);
          uVar1 = uVar1 | uVar2 ^ 1;
          if ((uVar2 & 1) != 0) goto LAB_0750b760;
        }
        if (DAT_095216d3 == '\0') {
          FUN_03f5c2a4(&DAT_0918bd68);
          DAT_095216d3 = '\x01';
        }
        if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = *(long *)(DAT_0918bd68 + 0xb8);
        uStack_4a8 = *(undefined8 *)(lVar9 + 0x30);
        local_4b0 = *(undefined8 *)(lVar9 + 0x28);
        uStack_498 = *(undefined8 *)(lVar9 + 0x40);
        local_4a0 = *(undefined8 *)(lVar9 + 0x38);
        local_490 = *(undefined8 *)(lVar9 + 0x48);
        uVar4 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__PartialAppCompatMatch
                          (param_1,&local_4b0,0);
        if ((uVar4 & 1) != 0) {
          uStack_4e8 = *(undefined8 *)(param_1 + 0x80);
          local_4f0 = *(undefined8 *)(param_1 + 0x78);
          uStack_4d8 = *(undefined8 *)(param_1 + 0x90);
          local_4e0 = *(undefined8 *)(param_1 + 0x88);
          uStack_4f8 = *(undefined8 *)(param_1 + 0xb0);
          local_500 = *(undefined8 *)(param_1 + 0xa8);
          uStack_4c8 = uStack_68;
          local_4d0 = local_70;
          uStack_508 = *(undefined8 *)(param_1 + 0xa0);
          local_510 = *(undefined8 *)(param_1 + 0x98);
          uStack_538 = *(undefined8 *)(param_1 + 0xd0);
          local_540 = *(undefined8 *)(param_1 + 200);
          uStack_528 = uStack_68;
          local_530 = local_70;
          uStack_548 = *(undefined8 *)(param_1 + 0xc0);
          local_550 = *(undefined8 *)(param_1 + 0xb8);
          uStack_4b8 = uStack_58;
          local_4c0 = local_60;
          uStack_518 = uStack_58;
          local_520 = local_60;
          uVar2 = System_Globalization_TimeSpanParse__TryTimeToTicks
                            (0,&local_4d0,&local_4f0,&local_510,&local_530,&local_550,&local_78);
          bVar7 = false;
          uVar1 = uVar1 | uVar2 ^ 1;
          goto joined_r0x0750b84c;
        }
        if ((uVar3 >> 1 & 1) != 0) goto LAB_0750b860;
        goto LAB_0750bc18;
      }
      uStack_188 = *(undefined8 *)(param_1 + 0x80);
      local_190 = *(undefined8 *)(param_1 + 0x78);
      uStack_178 = *(undefined8 *)(param_1 + 0x90);
      local_180 = *(undefined8 *)(param_1 + 0x88);
      uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
      local_1b0 = *(undefined8 *)(param_1 + 0x98);
      uStack_198 = *(undefined8 *)(param_1 + 0xb0);
      local_1a0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_1c8 = *(undefined8 *)(param_1 + 0xc0);
      local_1d0 = *(undefined8 *)(param_1 + 0xb8);
      uStack_1b8 = *(undefined8 *)(param_1 + 0xd0);
      local_1c0 = *(undefined8 *)(param_1 + 200);
      uStack_1d8 = uStack_58;
      local_1e0 = local_60;
      uStack_1e8 = uStack_68;
      local_1f0 = local_70;
      uStack_208 = uStack_68;
      local_210 = local_70;
      uStack_1f8 = uStack_58;
      local_200 = local_60;
      uVar2 = System_Globalization_TimeSpanParse__TryTimeToTicks
                        (1,&local_190,&local_1b0,&local_1d0,&local_1f0,&local_210,&local_78);
      bVar7 = true;
      uVar1 = uVar1 | uVar2 ^ 1;
      if ((uVar2 & 1) == 0) goto LAB_0750b4dc;
LAB_0750b768:
      uVar2 = 1;
joined_r0x0750b84c:
      if ((uVar3 >> 1 & 1) == 0) goto LAB_0750b76c;
LAB_0750b850:
      if ((uVar2 & 1) == 0) goto LAB_0750b860;
    }
    else {
      uStack_d8 = *(undefined8 *)(param_1 + 0x80);
      local_e0 = *(undefined8 *)(param_1 + 0x78);
      uStack_c8 = *(undefined8 *)(param_1 + 0x90);
      local_d0 = *(undefined8 *)(param_1 + 0x88);
      uStack_e8 = *(undefined8 *)(param_1 + 0xb0);
      local_f0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_f8 = *(undefined8 *)(param_1 + 0xa0);
      local_100 = *(undefined8 *)(param_1 + 0x98);
      uStack_108 = *(undefined8 *)(param_1 + 0xd0);
      local_110 = *(undefined8 *)(param_1 + 200);
      uStack_118 = *(undefined8 *)(param_1 + 0xc0);
      local_120 = *(undefined8 *)(param_1 + 0xb8);
      uStack_b8 = uStack_68;
      local_c0 = local_70;
      uVar2 = 1;
      uStack_a8 = uStack_58;
      local_b0 = local_60;
      uStack_138 = uStack_68;
      local_140 = local_70;
      uStack_128 = uStack_58;
      local_130 = local_60;
      uVar4 = System_Globalization_TimeSpanParse__TryTimeToTicks
                        (1,&local_c0,&local_e0,&local_100,&local_120,&local_140,&local_78);
      if ((uVar4 & 1) == 0) goto LAB_0750b404;
      uVar1 = 0;
      bVar7 = true;
      if ((uVar3 >> 1 & 1) != 0) goto LAB_0750b850;
LAB_0750b76c:
      if ((uVar2 & 1) == 0) goto LAB_0750bc18;
    }
    if (!bVar7) goto LAB_0750bbec;
LAB_0750bc00:
    uVar3 = 1;
    *param_3 = local_78;
  }
  return (ulong)(uVar3 & 1);
}


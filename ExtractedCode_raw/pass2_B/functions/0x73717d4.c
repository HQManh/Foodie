// rea decompile_all
// name: MaxSdkCallbacks$$ForwardEvent
// address: 0x73717d4
// body: available
// range: 0x73717d4-0x73729a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7371c40 to 0x73758d0 MaxSdkLogger$$E (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7371cd8 to 0x73759c4 MaxSdkLogger$$D (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7371d44 to 0x4bfe9d4 FUN_04bfe9d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7371dc8 to 0x736909c MaxCmpService$$NotifyCompletedIfNeeded (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7371e58 to 0x4bfe704 FUN_04bfe704 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73720a0 to 0x4bffd14 FUN_04bffd14 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7372234 to 0x4bff184 FUN_04bff184 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73729a0 to 0x736e770 MaxSdkLogger$$UserWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MaxSdkCallbacks__ForwardEvent(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 local_60;
  undefined8 local_58;
  
  if ((DAT_09520953 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09192708);
    FUN_03f5c2a4(&DAT_09192760);
    FUN_03f5c2a4(&DAT_09192768);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_09192720);
    FUN_03f5c2a4(&DAT_09192770);
    FUN_03f5c2a4(&DAT_09192778);
    FUN_03f5c2a4(&DAT_09187f10);
    FUN_03f5c2a4(&DAT_091d2c70);
    FUN_03f5c2a4(&DAT_091d2c78);
    FUN_03f5c2a4(&DAT_091d2c98);
    FUN_03f5c2a4(&DAT_091d2c80);
    FUN_03f5c2a4(&DAT_091d2ca0);
    FUN_03f5c2a4(&DAT_091d2c88);
    FUN_03f5c2a4(&DAT_091d2ca8);
    FUN_03f5c2a4(&DAT_091d2c90);
    FUN_03f5c2a4(&DAT_09187f30);
    FUN_03f5c2a4(&DAT_09187f38);
    FUN_03f5c2a4(&DAT_09189db0);
    FUN_03f5c2a4(&DAT_09192780);
    FUN_03f5c2a4(&DAT_092099b8);
    FUN_03f5c2a4(&DAT_09209968);
    FUN_03f5c2a4(&DAT_09209b70);
    FUN_03f5c2a4(&DAT_092097c0);
    FUN_03f5c2a4(&DAT_092097e8);
    FUN_03f5c2a4(&DAT_09209818);
    FUN_03f5c2a4(&DAT_09209a58);
    FUN_03f5c2a4(&DAT_09209a70);
    FUN_03f5c2a4(&DAT_09209840);
    FUN_03f5c2a4(&DAT_092170f0);
    FUN_03f5c2a4(&DAT_09209ba0);
    FUN_03f5c2a4(&DAT_09209a78);
    FUN_03f5c2a4(&DAT_09221b40);
    FUN_03f5c2a4(&DAT_09209b88);
    FUN_03f5c2a4(&DAT_0921fc48);
    FUN_03f5c2a4(&DAT_0921b328);
    FUN_03f5c2a4(&DAT_09209a08);
    FUN_03f5c2a4(&DAT_09221b48);
    FUN_03f5c2a4(&DAT_09209a60);
    FUN_03f5c2a4(&DAT_09209ba8);
    FUN_03f5c2a4(&DAT_09209848);
    FUN_03f5c2a4(&DAT_09209a80);
    FUN_03f5c2a4(&DAT_092097b0);
    FUN_03f5c2a4(&DAT_09209a10);
    FUN_03f5c2a4(&DAT_09209830);
    FUN_03f5c2a4(&DAT_09209850);
    FUN_03f5c2a4(&DAT_092170f8);
    FUN_03f5c2a4(&DAT_092099e8);
    FUN_03f5c2a4(&DAT_092097d0);
    FUN_03f5c2a4(&DAT_0921d9a8);
    FUN_03f5c2a4(&DAT_09209a28);
    FUN_03f5c2a4(&DAT_09209a88);
    FUN_03f5c2a4(&DAT_09209b60);
    FUN_03f5c2a4(&DAT_09209828);
    FUN_03f5c2a4(&DAT_09209b98);
    FUN_03f5c2a4(&DAT_09212330);
    FUN_03f5c2a4(&DAT_092097d8);
    FUN_03f5c2a4(&DAT_09209a20);
    FUN_03f5c2a4(&DAT_09214918);
    FUN_03f5c2a4(&DAT_0921df88);
    FUN_03f5c2a4(&DAT_09209970);
    FUN_03f5c2a4(&DAT_09209858);
    FUN_03f5c2a4(&DAT_092097e0);
    FUN_03f5c2a4(&DAT_09204b90);
    FUN_03f5c2a4(&DAT_092097c8);
    FUN_03f5c2a4(&DAT_09209838);
    FUN_03f5c2a4(&DAT_09209978);
    FUN_03f5c2a4(&DAT_09209a18);
    FUN_03f5c2a4(&DAT_09209898);
    FUN_03f5c2a4(&DAT_09209b90);
    FUN_03f5c2a4(&DAT_09209b80);
    FUN_03f5c2a4(&DAT_0921fa28);
    FUN_03f5c2a4(&DAT_09209a68);
    FUN_03f5c2a4(&DAT_09209a38);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_09202490);
    FUN_03f5c2a4(&DAT_09209bd8);
    FUN_03f5c2a4(&DAT_09209a30);
    FUN_03f5c2a4(&DAT_09209b78);
    FUN_03f5c2a4(&DAT_0921b0c8);
    DAT_09520953 = 1;
  }
  local_60 = 0;
  local_58 = 0;
  uVar4 = System_String__IsNullOrEmpty(param_1,0);
  if (((uVar4 & 1) != 0) ||
     (plVar5 = (long *)AppLovinMax_ThirdParty_MiniJson_Json_Parser__Parse(param_1),
     plVar5 == (long *)0x0)) {
LAB_07371c1c:
    MaxSdkLogger__E(DAT_09202490);
    return;
  }
  if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_09176b80 + 0x130)) ||
     (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09176b80 + 0x130) * 8 + -8) !=
      DAT_09176b80)) goto LAB_07371c1c;
  if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = MaxSdkUtils__GetBoolFromDictionary(plVar5,DAT_0921df88,0);
  uVar6 = MaxSdkUtils__GetStringFromDictionary(plVar5,DAT_0921fa28,DAT_091f5700);
  uVar4 = System_String__op_Equality(uVar6,DAT_092099b8,0);
  if ((uVar4 & 1) != 0) {
    MaxSdkLogger__D(DAT_09204b90);
    return;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209bd8,0);
  if ((uVar4 & 1) != 0) {
    uVar7 = MaxSdkBase_SdkConfiguration__Create(plVar5);
    FUN_04bfe9d4(**(undefined8 **)(DAT_09187f30 + 0xb8),uVar7,uVar6,uVar1 & 1,DAT_091d2c78);
    return;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209898,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = MaxSdkUtils__GetDictionaryFromDictionary(plVar5,DAT_0921b0c8,0);
    if (*(int *)(DAT_09187f10 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187f10);
    }
    MaxCmpService__NotifyCompletedIfNeeded(uVar6);
    return;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209818,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = MaxSdkUtils__GetBoolFromDictionary(plVar5,DAT_0921d9a8,0);
    FUN_04bfe704(*(undefined8 *)(*(long *)(DAT_09187f30 + 0xb8) + 8),uVar2 & 1,uVar6,uVar1 & 1,
                 DAT_091d2c70);
    return;
  }
  if (*(int *)(DAT_09189db0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Text_RegularExpressions_Regex__IsMatch(uVar6,DAT_09214918,0);
  plVar8 = plVar5;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar8 = (long *)MaxSdkUtils__GetDictionaryFromDictionary(plVar5,DAT_0921fc48,0);
  }
  uVar7 = thunk_FUN_03f9944c(DAT_09192708);
  MaxSdkBase_AdInfo___ctor(uVar7,plVar8);
  if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar9 = MaxSdkUtils__GetStringFromDictionary(plVar8,DAT_092170f8,DAT_091f5700);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = MaxSdkUtils__GetDictionaryFromDictionary(plVar5,DAT_0921b328,0);
    uVar11 = thunk_FUN_03f9944c(DAT_09192708);
    MaxSdkBase_AdInfo___ctor(uVar11,uVar10);
    uVar4 = System_String__op_Equality(uVar6,DAT_09209970,0);
    if ((uVar4 & 1) == 0) {
      uVar4 = System_String__op_Equality(uVar6,DAT_09209968,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = System_String__op_Equality(uVar6,DAT_09209978,0);
        if ((uVar4 & 1) == 0) {
LAB_07372970:
          System_String__Concat(DAT_09212330,uVar6,0);
          MaxSdkLogger__UserWarning();
          return;
        }
        plVar5 = &DAT_09192780;
      }
      else {
        plVar5 = &DAT_09192760;
      }
    }
    else {
      plVar5 = &DAT_09192770;
    }
    puVar13 = &DAT_091d2c98;
    uVar10 = *(undefined8 *)(*(long *)(*plVar5 + 0xb8) + 0x30);
LAB_0737207c:
    uVar12 = *puVar13;
    goto LAB_07372080;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209848,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = &DAT_09192768;
LAB_07371fa0:
    puVar13 = &DAT_091d2c80;
    uVar10 = **(undefined8 **)(*plVar5 + 0xb8);
    goto LAB_07372208;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209840,0);
  if ((uVar4 & 1) != 0) {
    uVar7 = thunk_FUN_03f9944c(DAT_09192720);
    MaxSdkBase_ErrorInfo___ctor(uVar7,plVar5);
    plVar5 = &DAT_09192768;
LAB_07372020:
    puVar13 = &DAT_091d2c88;
    uVar10 = *(undefined8 *)(*(long *)(*plVar5 + 0xb8) + 8);
    goto LAB_07372208;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209828,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = &DAT_09192768;
    goto LAB_073720c8;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209850,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = &DAT_09192768;
LAB_07372104:
    puVar13 = &DAT_091d2c80;
    uVar10 = *(undefined8 *)(*(long *)(*plVar5 + 0xb8) + 0x18);
    goto LAB_07372208;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209858,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = MaxSdkUtils__GetStringFromDictionary(plVar5,DAT_092170f0,DAT_091f5700);
    plVar5 = &DAT_09192768;
LAB_07372168:
    uVar10 = *(undefined8 *)(*(long *)(*plVar5 + 0xb8) + 0x20);
    uVar12 = DAT_091d2c90;
LAB_07372080:
    FUN_04bffd14(uVar10,uVar9,uVar11,uVar7,uVar6,uVar1 & 1,uVar12);
    return;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209838,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = &DAT_09192768;
    goto LAB_073721b8;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209830,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = &DAT_09192768;
LAB_073721f4:
    puVar13 = &DAT_091d2c80;
    uVar10 = *(undefined8 *)(*(long *)(*plVar5 + 0xb8) + 0x30);
    goto LAB_07372208;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209a78,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = &DAT_09192778;
    goto LAB_07371fa0;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209a70,0);
  if ((uVar4 & 1) != 0) {
    uVar7 = thunk_FUN_03f9944c(DAT_09192720);
    MaxSdkBase_ErrorInfo___ctor(uVar7,plVar5);
    plVar5 = &DAT_09192778;
    goto LAB_07372020;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209a58,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = &DAT_09192778;
    goto LAB_073720c8;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209a80,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = &DAT_09192778;
    goto LAB_07372104;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209a88,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = MaxSdkUtils__GetStringFromDictionary(plVar5,DAT_092170f0,DAT_091f5700);
    plVar5 = &DAT_09192778;
    goto LAB_07372168;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209a68,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = &DAT_09192778;
    goto LAB_073721b8;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209a60,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = &DAT_09192778;
    goto LAB_073721f4;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209a38,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = &DAT_09192770;
    goto LAB_07371fa0;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209a30,0);
  if ((uVar4 & 1) != 0) {
    uVar7 = thunk_FUN_03f9944c(DAT_09192720);
    MaxSdkBase_ErrorInfo___ctor(uVar7,plVar5);
    plVar5 = &DAT_09192770;
    goto LAB_07372020;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209a28,0);
  if ((uVar4 & 1) != 0) {
    puVar13 = &DAT_091d2c80;
    uVar10 = *(undefined8 *)(*(long *)(DAT_09192770 + 0xb8) + 0x40);
    goto LAB_07372208;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209a20,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = &DAT_09192770;
    goto LAB_073720c8;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_092099e8,0);
  if ((uVar4 & 1) != 0) {
    uVar11 = thunk_FUN_03f9944c(DAT_09192720);
    MaxSdkBase_ErrorInfo___ctor(uVar11,plVar5);
    plVar5 = &DAT_09192770;
LAB_073724a4:
    puVar13 = &DAT_091d2ca0;
    uVar10 = *(undefined8 *)(*(long *)(*plVar5 + 0xb8) + 0x18);
    goto LAB_0737207c;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209a18,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = &DAT_09192770;
    goto LAB_073724ec;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209a08,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = &DAT_09192770;
    goto LAB_073721b8;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_09209a10,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = MaxSdkUtils__GetStringFromDictionary(plVar5,DAT_092170f0,DAT_091f5700);
    plVar5 = &DAT_09192770;
LAB_07372578:
    uVar10 = *(undefined8 *)(*(long *)(*plVar5 + 0xb8) + 0x38);
    uVar12 = DAT_091d2c90;
    goto LAB_07372080;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_092097e0,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = &DAT_09192760;
    goto LAB_07371fa0;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_092097d8,0);
  if ((uVar4 & 1) != 0) {
    uVar7 = thunk_FUN_03f9944c(DAT_09192720);
    MaxSdkBase_ErrorInfo___ctor(uVar7,plVar5);
    plVar5 = &DAT_09192760;
    goto LAB_07372020;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_092097d0,0);
  if ((uVar4 & 1) != 0) {
    puVar13 = &DAT_091d2c80;
    uVar10 = *(undefined8 *)(*(long *)(DAT_09192760 + 0xb8) + 0x38);
    goto LAB_07372208;
  }
  uVar4 = System_String__op_Equality(uVar6,DAT_092097c0,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = System_String__op_Equality(uVar6,DAT_092097c8,0);
    if ((uVar4 & 1) != 0) {
      uVar11 = thunk_FUN_03f9944c(DAT_09192720);
      MaxSdkBase_ErrorInfo___ctor(uVar11,plVar5);
      plVar5 = &DAT_09192760;
      goto LAB_073724a4;
    }
    uVar4 = System_String__op_Equality(uVar6,DAT_092097b0,0);
    if ((uVar4 & 1) != 0) {
      plVar5 = &DAT_09192760;
LAB_073724ec:
      puVar13 = &DAT_091d2c80;
      uVar10 = *(undefined8 *)(*(long *)(*plVar5 + 0xb8) + 0x20);
      goto LAB_07372208;
    }
    uVar4 = System_String__op_Equality(uVar6,DAT_092097e8,0);
    if ((uVar4 & 1) == 0) {
      uVar4 = System_String__op_Equality(uVar6,DAT_09209b90,0);
      if ((uVar4 & 1) != 0) {
        plVar5 = &DAT_09192780;
        goto LAB_07371fa0;
      }
      uVar4 = System_String__op_Equality(uVar6,DAT_09209b88,0);
      if ((uVar4 & 1) != 0) {
        uVar7 = thunk_FUN_03f9944c(DAT_09192720);
        MaxSdkBase_ErrorInfo___ctor(uVar7,plVar5);
        plVar5 = &DAT_09192780;
        goto LAB_07372020;
      }
      uVar4 = System_String__op_Equality(uVar6,DAT_09209b70,0);
      if ((uVar4 & 1) != 0) {
        plVar5 = &DAT_09192780;
        goto LAB_073720c8;
      }
      uVar4 = System_String__op_Equality(uVar6,DAT_09209b80,0);
      if ((uVar4 & 1) != 0) {
        puVar13 = &DAT_091d2c80;
        uVar10 = *(undefined8 *)(*(long *)(DAT_09192780 + 0xb8) + 0x48);
        goto LAB_07372208;
      }
      uVar4 = System_String__op_Equality(uVar6,DAT_09209b60,0);
      if ((uVar4 & 1) != 0) {
        plVar5 = &DAT_09192780;
        goto LAB_073724ec;
      }
      uVar4 = System_String__op_Equality(uVar6,DAT_09209ba0,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = System_String__op_Equality(uVar6,DAT_09209ba8,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = MaxSdkUtils__GetStringFromDictionary(plVar5,DAT_092170f0,DAT_091f5700);
          plVar5 = &DAT_09192780;
          goto LAB_07372578;
        }
        uVar4 = System_String__op_Equality(uVar6,DAT_09209b78,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = System_String__op_Equality(uVar6,DAT_09209b98,0);
          if ((uVar4 & 1) != 0) {
            local_60 = 0;
            local_58 = 0;
            if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            local_60 = MaxSdkUtils__GetStringFromDictionary(plVar5,DAT_09221b48,DAT_091f5700);
            thunk_FUN_03f5d7b8(&local_60,local_60);
            uVar3 = MaxSdkUtils__GetIntFromDictionary(plVar5,DAT_09221b40,0);
            local_58 = CONCAT44(local_58._4_4_,uVar3);
            FUN_04c00174(*(undefined8 *)(*(long *)(DAT_09192780 + 0xb8) + 0x40),uVar9,local_60,
                         local_58,uVar7,uVar6,uVar1 & 1,DAT_091d2ca8);
            return;
          }
          goto LAB_07372970;
        }
        uVar11 = thunk_FUN_03f9944c(DAT_09192720);
        MaxSdkBase_ErrorInfo___ctor(uVar11,plVar5);
        plVar5 = &DAT_09192780;
        goto LAB_073724a4;
      }
      plVar5 = &DAT_09192780;
    }
    else {
      plVar5 = &DAT_09192760;
    }
LAB_073721b8:
    puVar13 = &DAT_091d2c80;
    uVar10 = *(undefined8 *)(*(long *)(*plVar5 + 0xb8) + 0x28);
  }
  else {
    plVar5 = &DAT_09192760;
LAB_073720c8:
    puVar13 = &DAT_091d2c80;
    uVar10 = *(undefined8 *)(*(long *)(*plVar5 + 0xb8) + 0x10);
  }
LAB_07372208:
  FUN_04bff184(uVar10,uVar9,uVar7,uVar6,uVar1 & 1,*puVar13);
  return;
}


// rea decompile_all
// name: AppsFlyerSDK.DeepLinkEventsArgs$$.ctor
// address: 0x405a57c
// body: available
// range: 0x405a57c-0x405aa37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x405aa28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405aa2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405aa30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x405aa34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppsFlyerSDK_DeepLinkEventsArgs___ctor(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long *local_48;
  
  if ((DAT_09515c04 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814e8);
    FUN_03f5c2a4(&DAT_0919fb80);
    FUN_03f5c2a4(&DAT_0919fba0);
    FUN_03f5c2a4(&DAT_0919fb58);
    FUN_03f5c2a4(&DAT_0919fbb0);
    FUN_03f5c2a4(&DAT_0919fbc8);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_09184198);
    FUN_03f5c2a4(&DAT_092084b0);
    FUN_03f5c2a4(&DAT_0920e3b8);
    FUN_03f5c2a4(&DAT_09202260);
    FUN_03f5c2a4(&DAT_0921a3d0);
    FUN_03f5c2a4(&DAT_0921da98);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_09208418);
    FUN_03f5c2a4(&DAT_09203cb8);
    FUN_03f5c2a4(&DAT_0921b0c8);
    FUN_03f5c2a4(&DAT_09223380);
    DAT_09515c04 = 1;
  }
  local_48 = (long *)0x0;
  if (*(int *)(DAT_09184198 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_EventArgs___ctor(param_1,0);
  if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = AppsFlyerSDK_AppsFlyer__CallbackStringToDictionary(param_2);
  lVar7 = DAT_091f5700;
  if (lVar2 != 0) {
    uVar3 = FUN_06fd8648(lVar2,DAT_09223380,DAT_0919fb80);
    lVar6 = lVar7;
    if (((uVar3 & 1) != 0) && (lVar4 = FUN_06fd83d4(lVar2,DAT_09223380,DAT_0919fbb0), lVar4 != 0)) {
      plVar5 = (long *)FUN_06fd83d4(lVar2,DAT_09223380,DAT_0919fbb0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    *(long *)(param_1 + 0x20) = lVar6;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x20),lVar6);
    uVar3 = FUN_06fd8648(lVar2,DAT_0921b0c8,DAT_0919fb80);
    if (((uVar3 & 1) != 0) && (lVar4 = FUN_06fd83d4(lVar2,DAT_0921b0c8,DAT_0919fbb0), lVar4 != 0)) {
      plVar5 = (long *)FUN_06fd83d4(lVar2,DAT_0921b0c8,DAT_0919fbb0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    bVar1 = FUN_06fd9fbc(lVar2,DAT_0921a3d0,&local_48,DAT_0919fba0);
    plVar5 = local_48;
    if ((bVar1 & local_48 != (long *)0x0) != 0) {
      lVar4 = *local_48;
      if ((*(byte *)(lVar4 + 0x130) < *(byte *)(DAT_09176b80 + 0x130)) ||
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09176b80 + 0x130) * 8 + -8) !=
          DAT_09176b80)) {
        if (lVar4 == DAT_09535468) {
          if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar8 = AppsFlyerSDK_AppsFlyer__CallbackStringToDictionary(plVar5);
          *(undefined8 *)(param_1 + 0x10) = uVar8;
          thunk_FUN_03f5d7b8();
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x10) = local_48;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),local_48);
      }
    }
    uVar3 = FUN_06fd8648(lVar2,DAT_0921da98,DAT_0919fb80);
    if ((uVar3 & 1) != 0) {
      plVar5 = (long *)(param_1 + 0x10);
      lVar4 = *plVar5;
      if (lVar4 == 0) {
        lVar4 = thunk_FUN_03f9944c(DAT_09176b80);
        FUN_06fd76bc(lVar4,DAT_0919fb58);
        *plVar5 = lVar4;
        thunk_FUN_03f5d7b8(plVar5,lVar4);
        lVar4 = *plVar5;
      }
      uVar8 = FUN_06fd83d4(lVar2,DAT_0921da98,DAT_0919fbb0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06fd8440(lVar4,DAT_0921da98,uVar8,DAT_0919fbc8);
    }
    if (lVar6 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = System_String__ToUpperInvariant(lVar6,0);
    }
    uVar3 = System_String__op_Equality(uVar8,DAT_09202260,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = System_String__op_Equality(uVar8,DAT_092084b0,0);
      if ((uVar3 & 1) == 0) {
        uVar9 = 2;
      }
      else {
        uVar9 = 1;
      }
      *(undefined4 *)(param_1 + 0x18) = uVar9;
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    uVar8 = 0;
    if (lVar7 != 0) {
      uVar8 = System_String__ToUpperInvariant(lVar7,0);
    }
    uVar3 = System_String__op_Equality(uVar8,DAT_0920e3b8,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = System_String__op_Equality(uVar8,DAT_09208418,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = System_String__op_Equality(uVar8,DAT_09203cb8,0);
        if ((uVar3 & 1) == 0) {
          uVar9 = 3;
        }
        else {
          uVar9 = 2;
        }
      }
      else {
        uVar9 = 1;
      }
      *(undefined4 *)(param_1 + 0x28) = uVar9;
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: AppsFlyerSDK.AppsFlyerRPCClient$$ParseResponse
// address: 0x406a7bc
// body: available
// range: 0x406a7bc-0x406acab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x406a9b8 to 0x6fd83d4 FUN_06fd83d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x406aa24 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x406aa70 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x406ab54 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x406ac2c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AppsFlyerSDK_AppsFlyerRPCClient__ParseResponse(undefined8 param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if ((DAT_09515c21 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fb80);
    FUN_03f5c2a4(&DAT_0919fbb0);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_09221a28);
    FUN_03f5c2a4(&DAT_09218e80);
    FUN_03f5c2a4(&DAT_0921d180);
    FUN_03f5c2a4(&DAT_0921a200);
    FUN_03f5c2a4(&DAT_0921b0c8);
    DAT_09515c21 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(param_2,0);
  if ((uVar1 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181510);
    uVar4 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09201318);
    AppsFlyerSDK_AppsFlyerRPCException___ctor(uVar4,0xffffffff,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091bffb8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar6);
  }
  if ((param_2 != 0) &&
     (plVar2 = (long *)AFMiniJSON_Json_Parser__Parse(param_2), plVar2 != (long *)0x0)) {
    if ((*(byte *)(DAT_09176b80 + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09176b80 + 0x130) * 8 + -8) ==
        DAT_09176b80)) {
      if (param_3 != (long *)0x0) {
        uVar1 = FUN_06fd8648(plVar2,DAT_0921d180,DAT_0919fb80);
        if ((uVar1 & 1) == 0) {
          plVar3 = (long *)0x0;
        }
        else {
          plVar3 = (long *)FUN_06fd83d4(plVar2,DAT_0921d180,DAT_0919fbb0);
        }
        uVar1 = (**(code **)(*param_3 + 0x138))(param_3,plVar3,*(undefined8 *)(*param_3 + 0x140));
        if ((uVar1 & 1) == 0) {
          uVar4 = thunk_FUN_03fc39d4(&DAT_091f61f0);
          uVar6 = thunk_FUN_03fc39d4(&DAT_0920b420);
          if (plVar3 == (long *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          }
          uVar4 = System_String__Concat(uVar6,param_3,uVar4,uVar7,0);
          goto LAB_0406a9e8;
        }
      }
      uVar1 = FUN_06fd8648(plVar2,DAT_0921b0c8,DAT_0919fb80);
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_06fd8648(plVar2,DAT_09221a28,DAT_0919fb80);
        if ((uVar1 & 1) != 0) {
          plVar2 = (long *)FUN_06fd83d4(plVar2,DAT_09221a28,DAT_0919fbb0);
          if (plVar2 != (long *)0x0) {
            if ((*(byte *)(DAT_09176b80 + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
               (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09176b80 + 0x130) * 8 + -8
                         ) == DAT_09176b80)) {
              uVar1 = FUN_06fd8648(plVar2,DAT_0921a200,DAT_0919fb80);
              if ((uVar1 & 1) != 0) {
                uVar4 = FUN_06fd83d4(plVar2,DAT_0921a200,DAT_0919fbb0);
                return uVar4;
              }
            }
          }
        }
        return 0;
      }
      plVar2 = (long *)FUN_06fd83d4(plVar2,DAT_0921b0c8,DAT_0919fbb0);
      if (plVar2 != (long *)0x0) {
        if ((*(byte *)(DAT_09176b80 + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09176b80 + 0x130) * 8 + -8) ==
            DAT_09176b80)) {
          uVar1 = FUN_06fd8648(plVar2,DAT_09218e80,DAT_0919fb80);
          if ((uVar1 & 1) == 0) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar4 = FUN_06fd83d4(plVar2,DAT_09218e80,DAT_0919fbb0);
            puVar5 = (undefined4 *)FUN_039aef84(uVar4,DAT_09535440);
            uVar8 = *puVar5;
          }
          uVar4 = thunk_FUN_03fc39d4(&DAT_0921f540);
          uVar6 = thunk_FUN_03fc39d4(&DAT_0919fb80);
          uVar1 = FUN_06fd8648(plVar2,uVar4,uVar6);
          if ((uVar1 & 1) == 0) {
            plVar3 = (long *)thunk_FUN_03fc39d4(&DAT_09212348);
          }
          else {
            uVar4 = thunk_FUN_03fc39d4(&DAT_0921f540);
            uVar6 = thunk_FUN_03fc39d4(&DAT_0919fbb0);
            plVar3 = (long *)FUN_06fd83d4(plVar2,uVar4,uVar6);
            if (plVar3 != (long *)0x0) {
              if (*plVar3 != DAT_09535468) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(plVar3);
              }
            }
          }
          uVar4 = thunk_FUN_03fc39d4(&DAT_0921a640);
          uVar6 = thunk_FUN_03fc39d4(&DAT_0919fb80);
          uVar1 = FUN_06fd8648(plVar2,uVar4,uVar6);
          if ((uVar1 & 1) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = thunk_FUN_03fc39d4(&DAT_0921a640);
            uVar6 = thunk_FUN_03fc39d4(&DAT_0919fbb0);
            uVar4 = FUN_06fd83d4(plVar2,uVar4,uVar6);
          }
          goto LAB_0406ab1c;
        }
      }
      plVar3 = (long *)thunk_FUN_03fc39d4(&DAT_09212348);
      uVar4 = 0;
      uVar8 = 0xffffffff;
LAB_0406ab1c:
      thunk_FUN_03fc39d4(&DAT_09181510);
      uVar6 = thunk_FUN_03f9944c();
      AppsFlyerSDK_AppsFlyerRPCException___ctor(uVar6,uVar8,plVar3,uVar4);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091bffb8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar4);
    }
  }
  uVar4 = thunk_FUN_03fc39d4(&DAT_092076b8);
  uVar4 = System_String__Concat(uVar4,param_2,0);
LAB_0406a9e8:
  thunk_FUN_03fc39d4(&DAT_09181510);
  uVar6 = thunk_FUN_03f9944c();
  AppsFlyerSDK_AppsFlyerRPCException___ctor(uVar6,0xffffffff,uVar4,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091bffb8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar4);
}


// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayController.GraphBotConsoleLog$$OnCookingBotVerboseLog
// address: 0x44c5540
// body: available
// range: 0x44c5540-0x44c58d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c58c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c58cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c58d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayController_GraphBotConsoleLog__OnCookingBotVerboseLog
               (long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  if ((DAT_0951827a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cf0);
    FUN_03f5c2a4(&DAT_09182d08);
    FUN_03f5c2a4(&DAT_09182d10);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091f6cb8);
    FUN_03f5c2a4(&DAT_09213ba8);
    FUN_03f5c2a4(&DAT_091f6cb0);
    DAT_0951827a = 1;
  }
  if (param_2 == 0) {
    return;
  }
  plVar1 = (long *)FUN_03f5c394(DAT_09180318,4);
  local_54 = *(undefined4 *)(param_2 + 0x10);
  lVar2 = FUN_03f5c42c(DAT_09182d08,&local_54);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_044c58c4:
    uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar2;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
    lVar2 = *(long *)(param_2 + 0x18);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_044c58c4;
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
      plVar1[5] = lVar2;
      thunk_FUN_03f5d7b8(plVar1 + 5,lVar2);
      local_58 = *(undefined4 *)(param_2 + 100);
      lVar2 = FUN_03f5c42c(DAT_09182cf0,&local_58);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_044c58c4;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar2;
        thunk_FUN_03f5d7b8(plVar1 + 6,lVar2);
        local_5c = *(undefined4 *)(param_2 + 0x60);
        lVar2 = FUN_03f5c42c(DAT_09182cf0,&local_5c);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
        goto LAB_044c58c4;
        if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
          plVar1[7] = lVar2;
          thunk_FUN_03f5d7b8(plVar1 + 7,lVar2);
          uVar4 = System_String__Format(DAT_09213ba8,plVar1,0);
          local_60 = *(undefined4 *)(param_2 + 0x38);
          uVar5 = FUN_03f5c42c(DAT_09535420,&local_60);
          local_64 = *(undefined4 *)(param_2 + 0x48);
          uVar6 = FUN_03f5c42c(DAT_09535450,&local_64);
          local_68 = *(undefined4 *)(param_2 + 0x84);
          uVar7 = FUN_03f5c42c(DAT_09535450,&local_68);
          uVar5 = System_String__Format(DAT_091f6cb0,uVar5,uVar6,uVar7,0);
          local_6c = *(undefined4 *)(param_2 + 0x6c);
          uVar6 = FUN_03f5c42c(DAT_09182d10,&local_6c);
          local_70 = *(undefined4 *)(param_2 + 0x88);
          uVar7 = FUN_03f5c42c(DAT_09535420,&local_70);
          local_74 = *(undefined4 *)(param_2 + 0x8c);
          uVar8 = FUN_03f5c42c(DAT_09535420,&local_74);
          uVar6 = System_String__Format(DAT_091f6cb8,uVar6,uVar7,uVar8,0);
          uVar4 = System_String__Concat(uVar4,uVar5,uVar6,0);
          if ((*(int *)(param_2 + 0x10) != 0xb) && (*(int *)(param_2 + 0x10) != 7)) {
            uVar5 = *(undefined8 *)(param_1 + 0x10);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Debug__Log(uVar4,uVar5,0);
            return;
          }
          uVar5 = *(undefined8 *)(param_1 + 0x10);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarning(uVar4,uVar5,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}


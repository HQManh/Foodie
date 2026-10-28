// rea decompile_all
// name: Datpt.Cook_Order.LevelControlCookOrder$$CheckCanTakeItemMoving
// address: 0x41a71d0
// body: available
// range: 0x41a71d0-0x41a746b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a7458 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41a745c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41a7460 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41a7464 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41a7468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_LevelControlCookOrder__CheckCanTakeItemMoving
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long *local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  
  if ((DAT_095168f6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3590);
    FUN_03f5c2a4(&DAT_091a35a8);
    FUN_03f5c2a4(&DAT_091a35b0);
    FUN_03f5c2a4(&DAT_091a3598);
    FUN_03f5c2a4(&DAT_091a35b8);
    FUN_03f5c2a4(&DAT_091a35a0);
    FUN_03f5c2a4(&DAT_091aded8);
    FUN_03f5c2a4(&DAT_091adef0);
    DAT_095168f6 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (long *)0x0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = (long *)0x0;
  if (*(char *)(param_4 + 0x101) == '\0') {
    return;
  }
  if (*(long *)(param_4 + 0x148) != 0) {
    FUN_057e185c(&local_b8,*(long *)(param_4 + 0x148),DAT_091adef0);
    local_70 = local_a8;
    puStack_78 = puStack_b0;
    local_80 = local_b8;
    local_b8 = 0;
    puStack_b0 = &local_80;
    while (uVar2 = FUN_071bd28c(&local_80,DAT_091a35b0), plVar1 = local_70, (uVar2 & 1) != 0) {
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = (**(code **)(*local_70 + 0x458))(local_70,param_5,*(undefined8 *)(*local_70 + 0x460));
      if ((uVar2 & 1) != 0) {
        lVar3 = (**(code **)(*plVar1 + 0x308))(plVar1,*(undefined8 *)(*plVar1 + 0x310));
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = UnityEngine_Transform__get_position(lVar3,0);
        uVar4 = UnityEngine_Component__get_transform(plVar1,0);
        Datpt_Cook_Order_LevelControlCookOrder__SpawnLoopRotateCircle
                  (uVar5,param_2,param_3,param_4,uVar4);
      }
    }
    FUN_071bd288(&local_80,DAT_091a35a8);
    if (*(long *)(param_4 + 0x150) != 0) {
      FUN_057e185c(&local_b8,*(long *)(param_4 + 0x150),DAT_091aded8);
      local_90 = local_a8;
      puStack_98 = puStack_b0;
      local_a0 = local_b8;
      local_b8 = 0;
      puStack_b0 = &local_a0;
      while( true ) {
        uVar2 = FUN_071bd28c(&local_a0,DAT_091a3598);
        plVar1 = local_90;
        if ((uVar2 & 1) == 0) {
          FUN_071bd288(&local_a0,DAT_091a3590);
          return;
        }
        if (local_90 == (long *)0x0) break;
        uVar2 = (**(code **)(*local_90 + 0x2e8))
                          (local_90,param_5,*(undefined8 *)(*local_90 + 0x2f0));
        if ((uVar2 & 1) != 0) {
          lVar3 = (**(code **)(*plVar1 + 0x268))(plVar1,*(undefined8 *)(*plVar1 + 0x270));
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar5 = UnityEngine_Transform__get_position(lVar3,0);
          uVar4 = UnityEngine_Component__get_transform(plVar1,0);
          Datpt_Cook_Order_LevelControlCookOrder__SpawnLoopRotateCircle
                    (uVar5,param_2,param_3,param_4,uVar4);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


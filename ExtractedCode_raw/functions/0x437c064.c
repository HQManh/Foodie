// rea decompile_all
// name: CakeOrder.InGame.UITimeCounterSecond$$Update
// address: 0x437c064
// body: available
// range: 0x437c064-0x437c25f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437c25c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UITimeCounterSecond__Update(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  uint local_34;
  
  if ((DAT_09517945 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f9670);
    DAT_09517945 = 1;
  }
  local_34 = 0;
  uVar3 = CakeOrder_BaseUI_UIElementAbstract__get_IsShowing(param_1,0);
  if ((uVar3 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x68);
    uVar1 = *(uint *)(param_1 + 0x70);
    if (lVar6 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    }
    lVar6 = *(long *)(param_1 + 0x60);
    if (lVar6 == 0) {
      local_34 = 0;
    }
    else {
      local_34 = (**(code **)(lVar6 + 0x18))
                           (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    }
    if (*(int *)(param_1 + 0x58) == 2) {
      local_34 = local_34 & ((int)local_34 >> 0x1f ^ 0xffffffffU);
    }
    else if (*(int *)(param_1 + 0x58) == 1) {
      local_34 = iVar2 - local_34 & ((int)(iVar2 - local_34) >> 0x1f ^ 0xffffffffU);
    }
    else {
      local_34 = 0;
    }
    *(uint *)(param_1 + 0x70) = local_34;
    if (local_34 != uVar1) {
      plVar7 = *(long **)(param_1 + 0x48);
      local_34 = local_34 / 0x3c;
      uVar4 = System_Int32__ToString(&local_34,DAT_091f9670,0);
      if (*(long *)(param_1 + 0x50) != 0) {
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x20);
        local_34 = *(int *)(param_1 + 0x70) % 0x3c;
        uVar5 = System_Int32__ToString(&local_34,DAT_091f9670,0);
        uVar4 = System_String__Concat(uVar4,uVar8,uVar5,0);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x558))(plVar7,uVar4,*(undefined8 *)(*plVar7 + 0x560));
          if (*(int *)(param_1 + 0x58) == 2) {
            if (iVar2 < 1) {
              return;
            }
            if (*(long *)(param_1 + 0x50) != 0) {
              if (*(int *)(param_1 + 0x70) < iVar2 - *(int *)(*(long *)(param_1 + 0x50) + 0x10)) {
                return;
              }
              goto LAB_0437c234;
            }
          }
          else {
            if (*(int *)(param_1 + 0x58) != 1) {
              return;
            }
            if (*(long *)(param_1 + 0x50) != 0) {
              if (*(int *)(*(long *)(param_1 + 0x50) + 0x10) < *(int *)(param_1 + 0x70)) {
                return;
              }
LAB_0437c234:
              DG_Tweening_TweenExtensions__Restart(0xbf800000,*(undefined8 *)(param_1 + 0x78),1,0);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}


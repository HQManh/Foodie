// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.SimpleBBQOrder$$ResetOrder
// address: 0x41bb298
// body: available
// range: 0x41bb298-0x41bb66b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41bb650 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41bb654 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41bb658 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41bb65c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41bb660 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41bb664 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41bb668 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_SimpleBBQOrder__ResetOrder(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_0951696f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2b10);
    FUN_03f5c2a4(&DAT_091a4388);
    FUN_03f5c2a4(&DAT_091a35d8);
    FUN_03f5c2a4(&DAT_091a2b18);
    FUN_03f5c2a4(&DAT_091a4390);
    FUN_03f5c2a4(&DAT_091a35e0);
    FUN_03f5c2a4(&DAT_091a2b20);
    FUN_03f5c2a4(&DAT_091a35e8);
    FUN_03f5c2a4(&DAT_091a4398);
    FUN_03f5c2a4(&DAT_091acd58);
    FUN_03f5c2a4(&DAT_091ac7e8);
    FUN_03f5c2a4(&DAT_091b0198);
    FUN_03f5c2a4(&DAT_091b01a0);
    FUN_03f5c2a4(&DAT_091adf18);
    FUN_03f5c2a4(&DAT_091ac7f8);
    DAT_0951696f = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  Datpt_Cook_Order_Order__ResetOrder(param_1,0);
  lVar5 = *(long *)(param_1 + 0x88);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0579a6a8(&local_d0,*(long *)(param_1 + 0x70),DAT_091ac7f8);
      local_70 = local_c0;
      puStack_78 = puStack_c8;
      local_80 = local_d0;
      local_d0 = 0;
      puStack_c8 = &local_80;
      while (uVar2 = FUN_071aef5c(&local_80,DAT_091a2b18), uVar4 = local_70, (uVar2 & 1) != 0) {
        plVar3 = (long *)Datpt_Cook_Order_Level_SimpleBBQ_LevelSimpleBBQ__get_LevelSimpleBBQIns();
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar3 + 0x348))
                  (plVar3,uVar4 & 0xffffffff,0xffffffff,*(undefined8 *)(*plVar3 + 0x350));
      }
      FUN_071aef58(&local_80,DAT_091a2b10);
      if (*(long *)(param_1 + 0x78) != 0) {
        FUN_0579a6a8(&local_d0,*(long *)(param_1 + 0x78),DAT_091ac7f8);
        local_70 = local_c0;
        puStack_78 = puStack_c8;
        local_80 = local_d0;
        local_d0 = 0;
        puStack_c8 = &local_80;
        while (uVar2 = FUN_071aef5c(&local_80,DAT_091a2b18), uVar4 = local_70, (uVar2 & 1) != 0) {
          plVar3 = (long *)Datpt_Cook_Order_Level_SimpleBBQ_LevelSimpleBBQ__get_LevelSimpleBBQIns();
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          (**(code **)(*plVar3 + 0x348))
                    (plVar3,uVar4 & 0xffffffff,0xffffffff,*(undefined8 *)(*plVar3 + 0x350));
        }
        FUN_071aef58(&local_80,DAT_091a2b10);
        lVar5 = *(long *)(param_1 + 0x70);
        if (lVar5 != 0) {
          *(undefined4 *)(lVar5 + 0x18) = 0;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          lVar5 = *(long *)(param_1 + 0x80);
          if (lVar5 != 0) {
            iVar1 = *(int *)(lVar5 + 0x18);
            *(undefined4 *)(lVar5 + 0x18) = 0;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (0 < iVar1) {
              System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
            }
            lVar5 = *(long *)(param_1 + 0x78);
            if (lVar5 != 0) {
              *(undefined4 *)(lVar5 + 0x18) = 0;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (*(long *)(param_1 + 0x58) != 0) {
                FUN_057e185c(&local_d0,*(long *)(param_1 + 0x58),DAT_091b01a0);
                local_90 = local_c0;
                puStack_98 = puStack_c8;
                local_a0 = local_d0;
                local_d0 = 0;
                puStack_c8 = &local_a0;
                while (uVar2 = FUN_071bd28c(&local_a0,DAT_091a4390), uVar4 = local_90,
                      (uVar2 & 1) != 0) {
                  if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar5 = UnityEngine_Component__get_gameObject(local_90,0);
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  UnityEngine_GameObject__SetActive(lVar5,0,0);
                  Datpt_Cook_Order_Level_SimpleBBQ_SkewerOnOrder__Reset(uVar4);
                }
                FUN_071bd288(&local_a0,DAT_091a4388);
                if (*(long *)(param_1 + 0x68) != 0) {
                  FUN_057e185c(&local_b8,*(long *)(param_1 + 0x68),DAT_091adf18);
                  local_d0 = 0;
                  puStack_c8 = &local_b8;
                  while (uVar4 = FUN_071bd28c(&local_b8,DAT_091a35e0), (uVar4 & 1) != 0) {
                    if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    if (*(long *)(local_a8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    UnityEngine_GameObject__SetActive(*(long *)(local_a8 + 0x18),0,0);
                  }
                  FUN_071bd288(&local_b8,DAT_091a35d8);
                  if (*(long *)(param_1 + 0x30) != 0) {
                    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x30),0,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


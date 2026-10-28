// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorStuckAlert$$DebugState
// address: 0x40eb05c
// body: available
// range: 0x40eb05c-0x40eb557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40eb4e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eb538 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eb53c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eb540 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eb544 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eb548 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eb554 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorStuckAlert__DebugState(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  uint local_88;
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  
  if ((DAT_095160a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3308);
    FUN_03f5c2a4(&DAT_091a3310);
    FUN_03f5c2a4(&DAT_091a3318);
    FUN_03f5c2a4(&DAT_0917b4f8);
    FUN_03f5c2a4(&DAT_091ad988);
    FUN_03f5c2a4(&DAT_091ad990);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_092236f8);
    FUN_03f5c2a4(&DAT_0921e058);
    FUN_03f5c2a4(&DAT_09220040);
    FUN_03f5c2a4(&DAT_0921fd10);
    DAT_095160a5 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(lVar3,0);
  plVar4 = (long *)FUN_03f5c394(DAT_09180318,4);
  local_54[0] = *(undefined1 *)(param_1 + 0x1c);
  lVar5 = FUN_03f5c42c(DAT_09535400,local_54);
  if (plVar4 == (long *)0x0) goto LAB_040eb544;
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_040eb54c:
    uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar5;
    thunk_FUN_03f5d7b8(plVar4 + 4,lVar5);
    local_58[0] = *(undefined1 *)(param_1 + 0x1d);
    lVar5 = FUN_03f5c42c(DAT_09535400,local_58);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_040eb54c;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = lVar5;
      thunk_FUN_03f5d7b8(plVar4 + 5,lVar5);
      if (*(long *)(param_1 + 0x30) == 0) {
LAB_040eb544:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18));
      lVar5 = FUN_03f5c42c(DAT_09535420,&local_a0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
      goto LAB_040eb54c;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = lVar5;
        thunk_FUN_03f5d7b8(plVar4 + 6,lVar5);
        local_84[0] = *(undefined1 *)(param_1 + 0x1e);
        lVar5 = FUN_03f5c42c(DAT_09535400,local_84);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_040eb54c;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
          plVar4[7] = lVar5;
          thunk_FUN_03f5d7b8(plVar4 + 7,lVar5);
          uVar7 = System_String__Format(DAT_092236f8,plVar4,0);
          local_88 = *(uint *)(param_1 + 0x18);
          uVar8 = FUN_03f5c42c(DAT_09535450,&local_88);
          uVar8 = System_String__Format(DAT_0921fd10,uVar8,0);
          uVar13 = **(undefined8 **)(DAT_091881a0 + 0xb8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar9 = UnityEngine_Object__op_Implicit(uVar13,0);
          uVar13 = DAT_0921e058;
          if ((uVar9 & 1) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = AnhPD_FoodOrder_ConveyorStuckAlert__IsKitchenAboutToFree();
          }
          local_88 = CONCAT31(local_88._1_3_,uVar2) & 0xffffff01;
          uVar10 = FUN_03f5c42c(DAT_09535400,&local_88);
          uVar13 = System_String__Format(uVar13,uVar10,0);
          uVar7 = System_String__Concat(uVar7,uVar8,uVar13,0);
          if (lVar3 != 0) {
            System_Text_StringBuilder__Append(lVar3,uVar7,0);
            if (*(long *)(param_1 + 0x20) != 0) {
              FUN_057e185c(&local_a0,*(long *)(param_1 + 0x20),DAT_091ad988);
              puStack_78 = puStack_98;
              local_80 = local_a0;
              local_70 = local_90;
              local_a0 = 0;
              lVar5 = 0;
              puStack_98 = &local_80;
              while (uVar9 = FUN_071bd28c(&local_80,DAT_091a3310), lVar6 = local_70,
                    (uVar9 & 1) != 0) {
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar9 = UnityEngine_Object__op_Implicit(lVar6,0);
                lVar1 = lVar3;
                if ((uVar9 & 1) == 0) {
                  lVar1 = lVar5;
                }
                lVar5 = lVar3;
                puVar11 = &DAT_09220040;
                if ((uVar9 & 1) == 0) {
LAB_040eb4b8:
                  uVar7 = *puVar11;
                }
                else {
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  plVar4 = *(long **)(lVar6 + 0x90);
                  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar5 = *plVar4;
                  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar9 != 0) {
                    piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == DAT_0917b4f8) {
                        puVar11 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
                        goto LAB_040eb49c;
                      }
                      uVar9 = uVar9 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b4f8,0);
LAB_040eb49c:
                  lVar6 = (*(code *)*puVar11)(plVar4,0,puVar11[1]);
                  lVar5 = lVar1;
                  if (lVar6 != 0) {
                    puVar11 = (undefined8 *)(lVar6 + 0x10);
                    goto LAB_040eb4b8;
                  }
                  uVar7 = 0;
                }
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550(0,uVar7);
                }
                lVar5 = System_Text_StringBuilder__Append(lVar5,uVar7,0);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                System_Text_StringBuilder__Append(lVar5,0x20,0);
                lVar5 = lVar1;
              }
              FUN_071bd288(&local_80,DAT_091a3308);
              plVar4 = (long *)System_Text_StringBuilder__Append(lVar3,0x5d,0);
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                return;
              }
            }
          }
          goto LAB_040eb544;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}


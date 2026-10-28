// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorPickup$$HasRoomFor
// address: 0x40e6090
// body: available
// range: 0x40e6090-0x40e64a7 inclusive
// range: 0x40e64ac-0x40e6537 inclusive
// range: 0x40e653c-0x40e653f inclusive
// range: 0x40e657c-0x40e663b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e64a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e6534 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e653c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e6620 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e6624 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e662c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e6630 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e6638 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040e6628) */
/* WARNING: Removing unreachable block (ram,0x040e652c) */
/* WARNING: Removing unreachable block (ram,0x040e6530) */
/* WARNING: Removing unreachable block (ram,0x040e65f8) */

ulong AnhPD_FoodOrder_ConveyorPickup__HasRoomFor(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  long local_a0;
  long *plStack_98;
  long local_90;
  long *local_88;
  long local_80;
  long *plStack_78;
  long local_70;
  
  if ((DAT_09516092 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3308);
    FUN_03f5c2a4(&DAT_091a3310);
    FUN_03f5c2a4(&DAT_091a3318);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5a0);
    FUN_03f5c2a4(&DAT_0917ac50);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091ad978);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091ad988);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516092 = 1;
  }
  lVar6 = DAT_09188ad0;
  local_80 = 0;
  plStack_78 = (long *)0x0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  local_70 = 0;
  local_88 = (long *)0x0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar3 & 1) != 0) {
    uVar10 = **(undefined8 **)(DAT_091881a0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar10,0);
    if ((uVar3 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x38);
      if (lVar6 == 0) {
LAB_040e6630:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar12 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar12) {
        System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar12,0);
        lVar6 = *(long *)(param_1 + 0x38);
      }
      AnhPD_FoodOrder_ConveyorPickup__CollectBatch(param_2,lVar6);
      if (param_2 == (long *)0x0) goto LAB_040e6630;
      uVar3 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
      if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x040e65cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
        return uVar3;
      }
      if ((**(long **)(DAT_091881a0 + 0xb8) == 0) || (lVar6 = *(long *)(param_1 + 0x40), lVar6 == 0)
         ) goto LAB_040e6630;
      iVar12 = *(int *)(lVar6 + 0x18);
      lVar8 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar12) {
        System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar12,0);
      }
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_040e6630;
      FUN_057e185c(&local_a0,*(long *)(param_1 + 0x38),DAT_091ad988);
      plStack_78 = plStack_98;
      local_80 = local_a0;
      local_70 = local_90;
      plStack_98 = &local_80;
      local_a0 = 0;
      while (uVar3 = FUN_071bd28c(&local_80,DAT_091a3310), lVar6 = local_a0, (uVar3 & 1) != 0) {
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar11 = *(long **)(local_70 + 0x90);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar11;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917a5a0) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_040e633c;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a5a0,0);
LAB_040e633c:
        plVar11 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
joined_r0x040e6354:
        local_88 = plVar11;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar11;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_040e63a4;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_040e63a4:
        uVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
        plVar11 = local_88;
        if ((uVar3 & 1) != 0) {
          if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *local_88;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917ac50) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_040e6408;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917ac50,0);
LAB_040e6408:
          lVar6 = (*(code *)*puVar4)(plVar11,puVar4[1]);
          plVar11 = local_88;
          if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x18))) {
            iVar12 = 0;
            do {
              lVar1 = DAT_091b0570;
              lVar5 = *(long *)(param_1 + 0x40);
              if (lVar5 == 0) {
LAB_040e6534:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar7 = *(long *)(lVar5 + 0x10);
              uVar10 = *(undefined8 *)(lVar6 + 0x10);
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar7 == 0) goto LAB_040e6534;
              uVar2 = *(uint *)(lVar5 + 0x18);
              if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
                *puVar4 = uVar10;
                thunk_FUN_03f5d7b8(puVar4);
              }
              else {
                FUN_057e0c68(lVar5,uVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
              }
              iVar12 = iVar12 + 1;
              plVar11 = local_88;
            } while (iVar12 < *(int *)(lVar6 + 0x18));
          }
          goto joined_r0x040e6354;
        }
        if (local_88 != (long *)0x0) {
          lVar6 = *local_88;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09185a58) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_040e6514;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185a58,0);
LAB_040e6514:
          (*(code *)*puVar4)(plVar11,puVar4[1]);
        }
      }
      FUN_071bd288(plStack_98,DAT_091a3308);
      if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548(lVar6);
      }
      if (lVar8 == 0) goto LAB_040e6630;
      uVar2 = AnhPD_FoodOrder_LevelInfo__HasHomeForAll
                        (lVar8,*(undefined8 *)(param_1 + 0x40),(undefined1 *)(param_1 + 0x58),
                         *(undefined8 *)(param_1 + 0x48),param_3 & 1,0);
      goto LAB_040e6580;
    }
  }
  uVar2 = 1;
LAB_040e6580:
  return (ulong)(uVar2 & 1);
}


// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$CountCellsFreeableBySaveMe
// address: 0x4237ff0
// body: available
// range: 0x4237ff0-0x42382a3 inclusive
// range: 0x42382a8-0x4238327 inclusive
// range: 0x4238364-0x4238433 inclusive
// range: 0x4238444-0x423845b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42382a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4238324 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4238444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423844c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4238450 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4238458 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04238320) */
/* WARNING: Removing unreachable block (ram,0x0423838c) */

uint AnhPD_FoodOrder_GridIngController__CountCellsFreeableBySaveMe(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
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
  
  if ((DAT_09516def & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1320);
    FUN_03f5c2a4(&DAT_091a6c78);
    FUN_03f5c2a4(&DAT_091a6c80);
    FUN_03f5c2a4(&DAT_091a6c88);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4a8);
    FUN_03f5c2a4(&DAT_0917ab58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bea90);
    DAT_09516def = 1;
  }
  local_80 = 0;
  plStack_78 = (long *)0x0;
  local_70 = 0;
  local_88 = (long *)0x0;
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar10 = **(undefined8 **)(DAT_091881a0 + 0xb8);
    lVar4 = FUN_07069b58(*(long *)(param_1 + 0xa8),DAT_091a1320);
    if (lVar4 != 0) {
      FUN_06554ac8(&local_a0,lVar4,DAT_091bea90);
      iVar12 = 0;
      local_70 = local_90;
      plStack_78 = plStack_98;
      local_80 = local_a0;
      local_a0 = 0;
      plStack_98 = &local_80;
      while (uVar5 = FUN_04f9b95c(&local_80,DAT_091a6c80), lVar1 = local_70, lVar4 = local_a0,
            (uVar5 & 1) != 0) {
        if (local_70 != 0) {
          plVar11 = *(long **)(local_70 + 0x30);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = *plVar11;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_0917a4a8) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_042381ac;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a4a8,0);
LAB_042381ac:
          plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
          do {
            local_88 = plVar11;
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *plVar11;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == DAT_09185b10) {
                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_04238214;
                }
                uVar5 = uVar5 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_04238214:
            uVar5 = (*(code *)*puVar6)(plVar11,puVar6[1]);
            plVar11 = local_88;
            if ((uVar5 & 1) == 0) goto LAB_042382b8;
            if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *local_88;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == DAT_0917ab58) {
                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_04238278;
                }
                uVar5 = uVar5 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917ab58,0);
LAB_04238278:
            uVar7 = (*(code *)*puVar6)(plVar11,puVar6[1]);
            uVar5 = AnhPD_FoodOrder_GridIngController__IsSaveMeCollectable(lVar1,uVar7,uVar10);
            plVar11 = local_88;
          } while ((uVar5 & 1) == 0);
          iVar12 = iVar12 + 1;
LAB_042382b8:
          plVar11 = local_88;
          if (local_88 != (long *)0x0) {
            lVar4 = *local_88;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == DAT_09185a58) {
                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_04238310;
                }
                uVar5 = uVar5 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185a58,0);
LAB_04238310:
            (*(code *)*puVar6)(plVar11,puVar6[1]);
          }
        }
      }
      FUN_04f9b958(plStack_98,DAT_091a6c78);
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548(lVar4);
      }
      iVar3 = *(int *)(param_1 + 0x6c);
      uVar10 = *(undefined8 *)(param_1 + 0x60);
      iVar9 = iVar12;
      if (iVar3 <= iVar12) {
        iVar9 = iVar3;
      }
      if (0 < iVar3) {
        iVar12 = iVar9;
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar10,0);
      if ((uVar5 & 1) == 0) {
        iVar9 = -1;
      }
      else {
        if ((*(long *)(param_1 + 0x60) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x60),0), lVar4 == 0))
        goto LAB_04238444;
        uVar2 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
        iVar9 = (uVar2 & 1) - 1;
      }
      iVar3 = AnhPD_FoodOrder_GridIngController__CountFreeCells(param_1,0x7fffffff);
      uVar2 = iVar9 + iVar3 + iVar12;
      return uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    }
  }
LAB_04238444:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


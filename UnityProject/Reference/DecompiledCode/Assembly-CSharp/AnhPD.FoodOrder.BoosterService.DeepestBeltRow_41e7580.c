// rea decompile_all
// name: AnhPD.FoodOrder.BoosterService$$DeepestBeltRow
// address: 0x41e7580
// body: available
// range: 0x41e7580-0x41e789f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e77fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e7890 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e7894 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e789c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041e7898) */

undefined4 AnhPD_FoodOrder_BoosterService__DeepestBeltRow(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  int *piVar10;
  
  if ((DAT_09516b0d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b0d = 1;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  iVar2 = UnityEngine_Time__get_frameCount(0);
  if (iVar1 != iVar2) {
    uVar3 = UnityEngine_Time__get_frameCount(0);
    piVar10 = (int *)(param_1 + 0x4c);
    *piVar10 = -1;
    *(undefined4 *)(param_1 + 0x48) = uVar3;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar9,0);
      if ((uVar4 & 1) == 0) goto LAB_041e7874;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar6 != 0)) {
        lVar6 = *(long *)(lVar6 + 0x1a0);
        if (lVar6 == 0) goto LAB_041e7874;
        plVar8 = *(long **)(lVar6 + 0x20);
        if (plVar8 != (long *)0x0) {
          lVar6 = *plVar8;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917a3f0) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_041e76c8;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a3f0,0);
LAB_041e76c8:
          plVar8 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
          do {
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar8;
            uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_041e7744;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_041e7744:
            uVar4 = (*(code *)*puVar5)(plVar8,puVar5[1]);
            if ((uVar4 & 1) == 0) {
              if (plVar8 == (long *)0x0) goto LAB_041e7874;
              lVar6 = *plVar8;
              uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar4 == 0) goto LAB_041e7848;
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              goto LAB_041e7830;
            }
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar8;
            uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_0917aa98) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_041e77a8;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917aa98,0);
LAB_041e77a8:
            lVar6 = (*(code *)*puVar5)(plVar8,puVar5[1]);
            if (lVar6 != 0) {
              uVar9 = *(undefined8 *)(lVar6 + 0x10);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = UnityEngine_Object__op_Implicit(uVar9,0);
              if (((uVar4 & 1) != 0) && (*piVar10 < *(int *)(lVar6 + 0x24))) {
                *piVar10 = *(int *)(lVar6 + 0x24);
              }
            }
          } while( true );
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_041e7874;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_041e7830:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_041e7864;
    }
  }
LAB_041e7848:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_041e7864:
  (*(code *)*puVar5)(plVar8,puVar5[1]);
LAB_041e7874:
  return *(undefined4 *)(param_1 + 0x4c);
}


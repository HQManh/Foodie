// rea decompile_all
// name: AnhPD.FoodOrder.IngCellFinder$$FindNearest
// address: 0x4241dc0
// body: available
// range: 0x4241dc0-0x4242033 inclusive
// range: 0x4242078-0x4242113 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4242014 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4242018 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4242020 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4242024 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4242028 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4242110 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04242110) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long AnhPD_FoodOrder_IngCellFinder__FindNearest
               (float param_1,float param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_09516e39 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a7c8);
    FUN_03f5c2a4(&DAT_0917aec0);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09516e39 = 1;
  }
  if ((*(long *)(param_3 + 0x10) == 0) ||
     (plVar1 = (long *)AnhPD_FoodOrder_IngGridLayout__EnabledCells(), plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *plVar1;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_0917a7c8) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04241e9c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917a7c8,0);
LAB_04241e9c:
  plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
  if (plVar1 != (long *)0x0) {
    fVar8 = 3.4028235e+38;
    lVar4 = 0;
LAB_04241ee0:
    do {
      lVar5 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185b10) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04241f2c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185b10,0);
LAB_04241f2c:
      uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      if ((uVar6 & 1) == 0) {
        if (plVar1 == (long *)0x0) {
          return lVar4;
        }
        lVar5 = *plVar1;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_042420bc;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_042420a4;
      }
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917aec0) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04241f90;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917aec0,0);
LAB_04241f90:
      uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      lVar5 = *(long *)(param_3 + 0x18);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar3,uVar3);
      }
      lVar5 = (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),uVar3,*(undefined8 *)(lVar5 + 0x28));
      if ((param_4 != 0) &&
         (uVar6 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),lVar5,*(undefined8 *)(param_4 + 0x28)),
         (uVar6 & 1) == 0)) {
LAB_04241ffc:
        if (plVar1 == (long *)0x0) break;
        goto LAB_04241ee0;
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar9 = *(float *)(lVar5 + 0x18) - param_1;
      fVar10 = *(float *)(lVar5 + 0x1c) - param_2;
      fVar9 = fVar9 * fVar9 + fVar10 * fVar10;
      if (fVar8 <= fVar9) goto LAB_04241ffc;
      fVar8 = fVar9;
      lVar4 = lVar5;
    } while (plVar1 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_042420a4:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_042420d8;
    }
  }
LAB_042420bc:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185a58,0);
LAB_042420d8:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return lVar4;
}


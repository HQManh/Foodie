// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$SetColumns
// address: 0x40dbcec
// body: available
// range: 0x40dbcec-0x40dbfef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40dbf48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dbfdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dbfe0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dbfe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dbfec to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040dbfe8) */

void AnhPD_FoodOrder_ConveyorGrid__SetColumns(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_0951603c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3e8);
    FUN_03f5c2a4(&DAT_0917aa90);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091abe10);
    FUN_03f5c2a4(&DAT_091abe18);
    DAT_0951603c = 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = *(int *)(lVar7 + 0x18);
  *(undefined4 *)(lVar7 + 0x18) = 0;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  if (0 < iVar1) {
    System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
  }
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917a3e8) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_040dbde8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a3e8,0);
LAB_040dbde8:
    plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
joined_r0x040dbe00:
    do {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_040dbe6c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_040dbe6c:
      uVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto LAB_040dbfc0;
        lVar7 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 == 0) goto LAB_040dbf94;
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_040dbf7c;
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917aa90) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_040dbed0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917aa90,0);
LAB_040dbed0:
      lVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      lVar7 = DAT_091abe10;
    } while (lVar5 == 0);
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 != 0) {
      lVar8 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          plVar9 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
          *plVar9 = lVar5;
          thunk_FUN_03f5d7b8(plVar9);
        }
        else {
          FUN_057e0c68(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        goto joined_r0x040dbe00;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_040dbfc0;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_040dbf7c:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_040dbfb0;
    }
  }
LAB_040dbf94:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_040dbfb0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_040dbfc0:
  AnhPD_FoodOrder_ConveyorGrid__RemapSlotColumns(param_1);
  return;
}


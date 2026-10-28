// rea decompile_all
// name: AnhPD.FoodOrder.BurgerPieceTable$$InterleaveFillings
// address: 0x4139ccc
// body: available
// range: 0x4139ccc-0x4139fb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4139fb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4139fb4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_BurgerPieceTable__InterleaveFillings(long *param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_09516384 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_0917b408);
    FUN_03f5c2a4(&DAT_0917b5a0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091b2ab0);
    FUN_03f5c2a4(&DAT_091b2ac0);
    DAT_09516384 = 1;
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (param_1 == (long *)0x0) {
      return;
    }
    lVar9 = *param_1;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_0917b408) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04139da8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b408,0);
LAB_04139da8:
    iVar4 = (*(code *)*puVar7)(param_1,puVar7[1]);
    if (iVar4 == 0) {
      return;
    }
    if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(*(long *)(DAT_091820c0 + 0xb8) + 0x28));
    iVar4 = 0;
    lVar9 = lVar8 + 0x20;
    do {
      lVar10 = *param_1;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917b408) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_04139e4c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b408,0);
LAB_04139e4c:
      iVar5 = (*(code *)*puVar7)(param_1,puVar7[1]);
      if (iVar5 <= iVar4) {
        if (lVar8 != 0) {
          uVar6 = 0;
          bVar2 = false;
          goto LAB_04139ef8;
        }
        break;
      }
      lVar10 = *param_1;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917b5a0) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_04139eac;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b5a0,0);
LAB_04139eac:
      uVar6 = (*(code *)*puVar7)(param_1,iVar4,puVar7[1]);
      if (-1 < (int)uVar6) {
        if (lVar8 == 0) break;
        if ((int)uVar6 < *(int *)(lVar8 + 0x18)) {
          *(int *)(lVar9 + (ulong)uVar6 * 4) = *(int *)(lVar9 + (ulong)uVar6 * 4) + 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while( true );
  }
LAB_04139fb0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_04139ef8:
  while ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar6) {
    uVar6 = 0;
    bVar3 = !bVar2;
    bVar2 = false;
    if (bVar3) {
      return;
    }
  }
  if (*(uint *)(lVar8 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  iVar4 = *(int *)(lVar8 + (long)(int)uVar6 * 4 + 0x20);
  if (0 < iVar4) {
    *(int *)(lVar9 + (long)(int)uVar6 * 4) = iVar4 + -1;
    lVar10 = DAT_091b2ab0;
    lVar11 = *(long *)(param_2 + 0x10);
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_04139fb0;
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
      *(uint *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = uVar6;
    }
    else {
      FUN_05799adc(param_2,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
      ;
    }
    bVar2 = true;
  }
  uVar6 = uVar6 + 1;
  goto LAB_04139ef8;
}


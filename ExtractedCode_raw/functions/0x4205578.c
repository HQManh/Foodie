// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView$$GetNeighbors
// address: 0x4205578
// body: available
// range: 0x4205578-0x420577f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420575c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x420577c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineView__GetNeighbors(long param_1,uint param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  if ((DAT_09516c50 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adca8);
    DAT_09516c50 = 1;
  }
  if (param_3 == 0) {
LAB_0420575c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
  if (((-1 < (int)param_2) && (lVar9 = *(long *)(param_1 + 0x148), lVar9 != 0)) &&
     ((int)param_2 < (int)*(uint *)(lVar9 + 0x18))) {
    if (*(uint *)(lVar9 + 0x18) <= param_2) {
LAB_0420577c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar12 = lVar9 + (ulong)param_2 * 8;
    if (-1 < *(int *)(lVar12 + 0x20)) {
      iVar3 = *(int *)(lVar12 + 0x20);
      iVar4 = *(int *)(lVar12 + 0x24);
      lVar12 = 0;
      uVar11 = 0;
      do {
        if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar11) {
          return;
        }
        if (param_2 != uVar11) {
          if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_0420577c;
          iVar5 = *(int *)(lVar9 + lVar12 + 0x20);
          if (-1 < iVar5) {
            if (DAT_09516086 == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_09516086 = '\x01';
            }
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar9 = *(long *)(param_1 + 0x148);
            iVar7 = iVar5 - iVar3;
            iVar1 = -iVar7;
            if (-1 < iVar7) {
              iVar1 = iVar7;
            }
            if (lVar9 == 0) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_0420577c;
            iVar7 = *(int *)(lVar9 + lVar12 + 0x24);
            if (DAT_09516086 == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_09516086 = '\x01';
            }
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar9 = DAT_091adc88;
            iVar8 = iVar7 - iVar4;
            iVar2 = -iVar8;
            if (-1 < iVar8) {
              iVar2 = iVar8;
            }
            if (((iVar5 == iVar3) && (iVar2 == 1)) || ((iVar1 == 1 && (iVar7 == iVar4)))) {
              lVar10 = *(long *)(param_3 + 0x10);
              *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
              if (lVar10 == 0) break;
              uVar6 = *(uint *)(param_3 + 0x18);
              if (uVar6 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(param_3 + 0x18) = uVar6 + 1;
                *(int *)(lVar10 + (long)(int)uVar6 * 4 + 0x20) = (int)uVar11;
              }
              else {
                FUN_057971a8(param_3,uVar11 & 0xffffffff,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        lVar9 = *(long *)(param_1 + 0x148);
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar9 != 0);
      goto LAB_0420575c;
    }
  }
  return;
}


// rea decompile_all
// name: AnhPD.FoodOrder.OrderBoard$$SetPreviewOrders
// address: 0x4226420
// body: available
// range: 0x4226420-0x4226677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4226654 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4226674 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderBoard__SetPreviewOrders(long param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  uint uVar9;
  
  if ((DAT_09516d5f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a82b8);
    FUN_03f5c2a4(&DAT_0917b380);
    FUN_03f5c2a4(&DAT_0917b520);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_09180340);
    DAT_09516d5f = 1;
  }
  *(long *)(param_1 + 0x90) = param_2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x90),param_2);
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_053d74ac(*(long *)(param_1 + 0x60),DAT_091a82b8);
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
    AnhPD_FoodOrder_OrderBoard__UncoverItems(param_1);
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x18);
    }
    lVar3 = FUN_03f5c394(DAT_09180340,uVar2);
    plVar8 = (long *)(param_1 + 0x98);
    *plVar8 = lVar3;
    thunk_FUN_03f5d7b8(plVar8,lVar3);
    lVar3 = *plVar8;
    if (lVar3 != 0) {
      uVar9 = 0;
      do {
        if (*(int *)(lVar3 + 0x18) <= (int)uVar9) {
          return;
        }
        if (param_3 == (long *)0x0) {
          uVar2 = 0;
        }
        else {
          lVar5 = *param_3;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917b380) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_042265a0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917b380,0);
LAB_042265a0:
          iVar1 = (*(code *)*puVar4)(param_3,puVar4[1]);
          if ((int)uVar9 < iVar1) {
            lVar5 = *param_3;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_0917b520) {
                  puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_04226618;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917b520,0);
LAB_04226618:
            uVar2 = (*(code *)*puVar4)(param_3,uVar9,puVar4[1]);
          }
          else {
            uVar2 = 0;
          }
          if (lVar3 == 0) break;
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar5 = lVar3 + (long)(int)uVar9 * 4;
        lVar3 = *plVar8;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(lVar5 + 0x20) = uVar2;
      } while (lVar3 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


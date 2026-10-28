// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$PickPeek
// address: 0x422d4cc
// body: available
// range: 0x422d4cc-0x422d647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422d644 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_OrderIngredientList__PickPeek(undefined8 param_1,long *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 local_88 [9];
  
  if ((DAT_09516d93 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b388);
    FUN_03f5c2a4(&DAT_0917b528);
    DAT_09516d93 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar10 = 0;
  iVar9 = 0;
  iVar11 = -1;
  do {
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917b388) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0422d580;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b388,0);
LAB_0422d580:
    iVar2 = (*(code *)*puVar4)(param_2,puVar4[1]);
    if (iVar2 <= iVar9) {
      iVar9 = -(uint)(iVar10 != 1);
      if (-1 < iVar11) {
        iVar9 = iVar11;
      }
      return iVar9;
    }
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917b528) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0422d5e0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b528,0);
LAB_0422d5e0:
    uVar5 = (*(code *)*puVar4)(local_88,param_2,iVar9,puVar4[1]);
    uVar3 = AnhPD_FoodOrder_OrderIngredientList__CanShow(uVar5,local_88[0]);
    bVar1 = iVar9 == param_3;
    iVar9 = iVar9 + 1;
    iVar2 = iVar10;
    if ((uVar3 & 1 & (uint)bVar1) == 0) {
      iVar2 = iVar11;
    }
    iVar10 = iVar10 + (uVar3 & 1);
    iVar11 = iVar2;
  } while( true );
}


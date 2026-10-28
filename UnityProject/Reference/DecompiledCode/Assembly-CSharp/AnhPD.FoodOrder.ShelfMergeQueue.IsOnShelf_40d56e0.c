// rea decompile_all
// name: AnhPD.FoodOrder.ShelfMergeQueue$$IsOnShelf
// address: 0x40d56e0
// body: available
// range: 0x40d56e0-0x40d588b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d5888 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_ShelfMergeQueue__IsOnShelf(undefined8 param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  
  if ((DAT_09516001 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b3b8);
    FUN_03f5c2a4(&DAT_0917b550);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516001 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_1,0);
  if ((uVar2 & 1) == 0) {
LAB_040d5868:
    bVar8 = false;
  }
  else {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar7 = 0;
    do {
      lVar5 = *param_2;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b3b8) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_040d57c0;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b3b8,0);
LAB_040d57c0:
      iVar1 = (*(code *)*puVar3)(param_2,puVar3[1]);
      bVar8 = iVar7 < iVar1;
      if (iVar1 <= iVar7) goto LAB_040d5868;
      lVar5 = *param_2;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b550) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_040d5824;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b550,0);
LAB_040d5824:
      uVar4 = (*(code *)*puVar3)(param_2,iVar7,puVar3[1]);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar4,param_1,0);
      iVar7 = iVar7 + 1;
    } while ((uVar2 & 1) == 0);
  }
  return bVar8;
}


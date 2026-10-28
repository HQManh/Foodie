// rea decompile_all
// name: System.Array.SorterObjectArray$$PickPivotAndPartition
// address: 0x75de4f4
// body: available
// range: 0x75de4f4-0x75de71f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75de718 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75de71c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Array_SorterObjectArray__PickPivotAndPartition(long *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  uint uVar9;
  long *plVar10;
  undefined8 uVar11;
  
  if ((DAT_09521eb7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185800);
    DAT_09521eb7 = 1;
  }
  iVar2 = param_3 - param_2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  uVar9 = param_2 + (iVar2 >> 1);
  System_Array_SorterObjectArray__SwapIfGreaterWithItems(param_1,param_2,uVar9);
  System_Array_SorterObjectArray__SwapIfGreaterWithItems(param_1,param_2,param_3);
  System_Array_SorterObjectArray__SwapIfGreaterWithItems(param_1,uVar9,param_3);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= uVar9) {
LAB_075de71c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar1 = param_3 - 1;
    uVar8 = *(undefined8 *)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
    System_Array_SorterObjectArray__Swap(param_1,uVar9,uVar1);
    uVar9 = uVar1;
    if ((int)uVar1 <= (int)param_2) {
LAB_075de6ec:
      System_Array_SorterObjectArray__Swap(param_1,param_2,uVar1);
      return param_2;
    }
    while (lVar4 = *param_1, lVar4 != 0) {
      param_2 = param_2 + 1;
      if (*(uint *)(lVar4 + 0x18) <= param_2) goto LAB_075de71c;
      plVar10 = (long *)param_1[2];
      if (plVar10 == (long *)0x0) break;
      lVar5 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      uVar11 = *(undefined8 *)(lVar4 + (long)(int)param_2 * 8 + 0x20);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185800) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_075de62c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185800,0);
LAB_075de62c:
      iVar2 = (*(code *)*puVar3)(plVar10,uVar11,uVar8,puVar3[1]);
      if (-1 < iVar2) {
        do {
          lVar4 = *param_1;
          if (lVar4 == 0) goto LAB_075de718;
          uVar9 = uVar9 - 1;
          if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_075de71c;
          plVar10 = (long *)param_1[2];
          if (plVar10 == (long *)0x0) goto LAB_075de718;
          lVar5 = *plVar10;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          uVar11 = *(undefined8 *)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185800) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_075de6b8;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185800,0);
LAB_075de6b8:
          iVar2 = (*(code *)*puVar3)(plVar10,uVar8,uVar11,puVar3[1]);
        } while (iVar2 < 0);
        if ((int)uVar9 <= (int)param_2) goto LAB_075de6ec;
        System_Array_SorterObjectArray__Swap(param_1,param_2,uVar9);
      }
    }
  }
LAB_075de718:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


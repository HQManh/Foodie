// rea decompile_all
// name: System.Array.SorterGenericArray$$PickPivotAndPartition
// address: 0x75df300
// body: available
// range: 0x75df300-0x75df51b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75df518 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Array_SorterGenericArray__PickPivotAndPartition(long *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  
  if ((DAT_09521ebe & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185800);
    DAT_09521ebe = 1;
  }
  iVar8 = param_3 - param_2;
  if (iVar8 < 0) {
    iVar8 = iVar8 + 1;
  }
  iVar8 = param_2 + (iVar8 >> 1);
  System_Array_SorterGenericArray__SwapIfGreaterWithItems(param_1,param_2,iVar8);
  System_Array_SorterGenericArray__SwapIfGreaterWithItems(param_1,param_2,param_3);
  System_Array_SorterGenericArray__SwapIfGreaterWithItems(param_1,iVar8,param_3);
  if (*param_1 != 0) {
    uVar2 = System_Array__GetValue(*param_1,iVar8,0);
    param_3 = param_3 + -1;
    System_Array_SorterGenericArray__Swap(param_1,iVar8,param_3);
    iVar8 = param_3;
    if (param_3 <= param_2) {
LAB_075df4ec:
      System_Array_SorterGenericArray__Swap(param_1,param_2,param_3);
      return param_2;
    }
    while (*param_1 != 0) {
      param_2 = param_2 + 1;
      plVar9 = (long *)param_1[2];
      uVar3 = System_Array__GetValue(*param_1,param_2,0);
      if (plVar9 == (long *)0x0) break;
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185800) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_075df430;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185800,0);
LAB_075df430:
      iVar1 = (*(code *)*puVar4)(plVar9,uVar3,uVar2,puVar4[1]);
      if (-1 < iVar1) {
        do {
          if (*param_1 == 0) goto LAB_075df518;
          iVar8 = iVar8 + -1;
          plVar9 = (long *)param_1[2];
          uVar3 = System_Array__GetValue(*param_1,iVar8,0);
          if (plVar9 == (long *)0x0) goto LAB_075df518;
          lVar5 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185800) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_075df4b8;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185800,0);
LAB_075df4b8:
          iVar1 = (*(code *)*puVar4)(plVar9,uVar2,uVar3,puVar4[1]);
        } while (iVar1 < 0);
        if (iVar8 <= param_2) goto LAB_075df4ec;
        System_Array_SorterGenericArray__Swap(param_1,param_2,iVar8);
      }
    }
  }
LAB_075df518:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


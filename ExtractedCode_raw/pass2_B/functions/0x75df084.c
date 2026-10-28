// rea decompile_all
// name: System.Array.SorterGenericArray$$InsertionSort
// address: 0x75df084
// body: available
// range: 0x75df084-0x75df263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75df260 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array_SorterGenericArray__InsertionSort(long *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  
  if ((DAT_09521ec0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185800);
    DAT_09521ec0 = 1;
  }
  iVar10 = param_2;
  if (param_2 < param_3) {
    do {
      if (*param_1 == 0) {
LAB_075df260:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = iVar10 + 1;
      uVar3 = System_Array__GetValue(*param_1,iVar1,0);
      if (param_1[1] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = System_Array__GetValue(param_1[1],iVar1,0);
      }
      for (; param_2 <= iVar10; iVar10 = iVar10 + -1) {
        if (*param_1 == 0) goto LAB_075df260;
        plVar11 = (long *)param_1[2];
        uVar5 = System_Array__GetValue(*param_1,iVar10,0);
        if (plVar11 == (long *)0x0) goto LAB_075df260;
        lVar7 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185800) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_075df190;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185800,0);
LAB_075df190:
        iVar2 = (*(code *)*puVar6)(plVar11,uVar3,uVar5,puVar6[1]);
        if (-1 < iVar2) break;
        lVar7 = *param_1;
        if (lVar7 == 0) goto LAB_075df260;
        uVar5 = System_Array__GetValue(lVar7,iVar10,0);
        System_Array__SetValue(lVar7,uVar5,iVar10 + 1,0);
        lVar7 = param_1[1];
        if (lVar7 != 0) {
          uVar5 = System_Array__GetValue(lVar7,iVar10,0);
          System_Array__SetValue(lVar7,uVar5,iVar10 + 1,0);
        }
      }
      if (*param_1 == 0) goto LAB_075df260;
      System_Array__SetValue(*param_1,uVar3,iVar10 + 1,0);
      if (param_1[1] != 0) {
        System_Array__SetValue(param_1[1],uVar4,iVar10 + 1,0);
      }
      iVar10 = iVar1;
    } while (iVar1 != param_3);
  }
  return;
}


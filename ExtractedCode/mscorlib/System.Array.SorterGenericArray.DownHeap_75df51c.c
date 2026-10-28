// rea decompile_all
// name: System.Array.SorterGenericArray$$DownHeap
// address: 0x75df51c
// body: available
// range: 0x75df51c-0x75df7db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75df7b4 to 0x75d9b54 System.Array$$SetValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75df7d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array_SorterGenericArray__DownHeap(long *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined8 local_70;
  
  if ((DAT_09521ebf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185800);
    DAT_09521ebf = 1;
  }
  if (*param_1 != 0) {
    iVar2 = param_4 + -1;
    uVar6 = System_Array__GetValue(*param_1,iVar2 + param_2,0);
    if (param_1[1] == 0) {
      local_70 = 0;
    }
    else {
      local_70 = System_Array__GetValue(param_1[1],iVar2 + param_2,0);
    }
    iVar1 = param_3;
    if (param_3 < 0) {
      iVar1 = param_3 + 1;
    }
    while (uVar3 = param_2, (int)uVar3 <= iVar1 >> 1) {
      param_2 = uVar3 * 2;
      if ((int)param_2 < param_3) {
        if (*param_1 == 0) goto LAB_075df7d8;
        plVar13 = (long *)param_1[2];
        uVar7 = System_Array__GetValue(*param_1,param_2 + param_4 + -1,0);
        if ((*param_1 == 0) ||
           (uVar8 = System_Array__GetValue(*param_1,param_2 + param_4,0), plVar13 == (long *)0x0))
        goto LAB_075df7d8;
        lVar10 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185800) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_075df66c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185800,0);
LAB_075df66c:
        uVar4 = (*(code *)*puVar9)(plVar13,uVar7,uVar8,puVar9[1]);
        param_2 = param_2 | uVar4 >> 0x1f;
      }
      if (*param_1 == 0) goto LAB_075df7d8;
      plVar13 = (long *)param_1[2];
      uVar7 = System_Array__GetValue(*param_1,iVar2 + param_2,0);
      if (plVar13 == (long *)0x0) goto LAB_075df7d8;
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_09185800) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_075df6f0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185800,0);
LAB_075df6f0:
      iVar5 = (*(code *)*puVar9)(plVar13,uVar6,uVar7,puVar9[1]);
      if (-1 < iVar5) break;
      lVar10 = *param_1;
      if (lVar10 == 0) goto LAB_075df7d8;
      uVar7 = System_Array__GetValue(lVar10,iVar2 + param_2,0);
      System_Array__SetValue(lVar10,uVar7,iVar2 + uVar3,0);
      lVar10 = param_1[1];
      if (lVar10 != 0) {
        uVar7 = System_Array__GetValue(lVar10,iVar2 + param_2,0);
        System_Array__SetValue(lVar10,uVar7,iVar2 + uVar3,0);
      }
    }
    if (*param_1 != 0) {
      System_Array__SetValue(*param_1,uVar6,iVar2 + uVar3,0);
      if (param_1[1] == 0) {
        return;
      }
      System_Array__SetValue(param_1[1],local_70,iVar2 + uVar3,0);
      return;
    }
  }
LAB_075df7d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


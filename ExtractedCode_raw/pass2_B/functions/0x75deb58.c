// rea decompile_all
// name: System.Array.SorterGenericArray$$SwapIfGreaterWithItems
// address: 0x75deb58
// body: available
// range: 0x75deb58-0x75ded27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ded0c to 0x75d9b54 System.Array$$SetValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75ded24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array_SorterGenericArray__SwapIfGreaterWithItems(long *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_09521ebd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185800);
    DAT_09521ebd = 1;
  }
  if (param_2 == param_3) {
    return;
  }
  if (*param_1 != 0) {
    plVar8 = (long *)param_1[2];
    uVar2 = System_Array__GetValue(*param_1,param_2,0);
    if ((*param_1 != 0) &&
       (uVar3 = System_Array__GetValue(*param_1,param_3,0), plVar8 != (long *)0x0)) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185800) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_075dec2c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185800,0);
LAB_075dec2c:
      iVar1 = (*(code *)*puVar4)(plVar8,uVar2,uVar3,puVar4[1]);
      if (iVar1 < 1) {
        return;
      }
      if (*param_1 != 0) {
        uVar2 = System_Array__GetValue(*param_1,param_2,0);
        lVar5 = *param_1;
        if (lVar5 != 0) {
          uVar3 = System_Array__GetValue(lVar5,param_3,0);
          System_Array__SetValue(lVar5,uVar3,param_2,0);
          if (*param_1 != 0) {
            System_Array__SetValue(*param_1,uVar2,param_3,0);
            if (param_1[1] == 0) {
              return;
            }
            uVar2 = System_Array__GetValue(param_1[1],param_2,0);
            lVar5 = param_1[1];
            if (lVar5 != 0) {
              uVar3 = System_Array__GetValue(lVar5,param_3,0);
              System_Array__SetValue(lVar5,uVar3,param_2,0);
              if (param_1[1] != 0) {
                System_Array__SetValue(param_1[1],uVar2,param_3,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


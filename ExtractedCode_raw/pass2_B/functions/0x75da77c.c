// rea decompile_all
// name: System.Array$$System.Collections.IStructuralEquatable.Equals
// address: 0x75da77c
// body: available
// range: 0x75da77c-0x75da8ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75da8fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Array__System_Collections_IStructuralEquatable_Equals
               (long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_09521e9d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185b30);
    DAT_09521e9d = 1;
  }
  if (param_2 != (long *)0x0) {
    if (param_1 == param_2) {
LAB_075da8e0:
      uVar3 = 1;
      goto LAB_075da8e4;
    }
    if ((*(byte *)(DAT_09535478 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8) ==
        DAT_09535478)) {
      iVar1 = System_Array__get_Length(param_2);
      iVar2 = System_Array__get_Length(param_1);
      if (iVar1 == iVar2) {
        iVar1 = System_Array__get_Length(param_2);
        if (0 < iVar1) {
          iVar1 = 0;
          do {
            uVar4 = System_Array__GetValue(param_1,iVar1);
            uVar5 = System_Array__GetValue(param_2,iVar1);
            if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *param_3;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_09185b30) {
                  puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_075da8a4;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(param_3,DAT_09185b30,0);
LAB_075da8a4:
            uVar3 = (*(code *)*puVar6)(param_3,uVar4,uVar5,puVar6[1]);
            if ((uVar3 & 1) == 0) break;
            iVar1 = iVar1 + 1;
            iVar2 = System_Array__get_Length(param_2);
          } while (iVar1 < iVar2);
          goto LAB_075da8e4;
        }
        goto LAB_075da8e0;
      }
    }
  }
  uVar3 = 0;
LAB_075da8e4:
  return uVar3 & 1;
}


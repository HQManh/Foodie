// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectReader$$NextRectangleMap
// address: 0x74c3388
// body: available
// range: 0x74c3388-0x74c3453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c3440 to 0x75db010 System.Array$$Copy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c344c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c3450 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectReader__NextRectangleMap
               (undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  if (param_2 != 0) {
    uVar8 = *(uint *)(param_2 + 0x80);
    uVar4 = uVar8;
    while( true ) {
      uVar7 = uVar4;
      uVar8 = uVar8 - 1;
      uVar4 = uVar7 - 1;
      if ((int)uVar4 < 0) {
        return;
      }
      lVar5 = *(long *)(param_2 + 0xb8);
      if (lVar5 == 0) break;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 <= uVar4) goto LAB_074c344c;
      lVar9 = *(long *)(param_2 + 0x88);
      if (lVar9 == 0) break;
      if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_074c344c;
      lVar1 = lVar5 + (ulong)uVar8 * 4;
      iVar3 = *(int *)(lVar1 + 0x20);
      if (iVar3 < *(int *)(lVar9 + (ulong)uVar8 * 4 + 0x20) + -1) {
        *(int *)(lVar1 + 0x20) = iVar3 + 1;
        uVar8 = *(uint *)(param_2 + 0x80);
        uVar6 = (ulong)uVar8;
        if (((int)uVar4 < (int)(uVar8 - 1)) && ((int)uVar7 < (int)uVar8)) {
          lVar9 = (long)(int)uVar7;
          do {
            if (uVar2 <= (uint)lVar9) {
LAB_074c344c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            *(undefined4 *)(lVar5 + 0x20 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
            uVar6 = (ulong)*(int *)(param_2 + 0x80);
          } while (lVar9 < (long)uVar6);
        }
        System_Array__Copy(lVar5,*(undefined8 *)(param_2 + 0xa8),uVar6,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


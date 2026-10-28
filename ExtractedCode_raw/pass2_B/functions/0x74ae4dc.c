// rea decompile_all
// name: System.Runtime.Serialization.ObjectIDGenerator$$FindElement
// address: 0x74ae4dc
// body: available
// range: 0x74ae4dc-0x74ae5a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ae5a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ae5a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Runtime_Serialization_ObjectIDGenerator__FindElement
               (long param_1,long param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  long lVar10;
  long *plVar11;
  
  uVar8 = System_Runtime_CompilerServices_RuntimeHelpers__GetHashCode(param_2,0);
  iVar3 = *(int *)(param_1 + 0x14);
  uVar1 = uVar8 & 0x7fffffff;
  iVar7 = iVar3 + -2;
  iVar5 = 0;
  if (iVar7 != 0) {
    iVar5 = (int)uVar1 / iVar7;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  do {
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = (int)(uVar8 & 0x7fffffff) / iVar3;
    }
    uVar4 = (uVar8 - iVar6 * iVar3) * 4;
    if (uVar4 != 0x7ffffffc) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar6 = uVar4 + 4;
      plVar11 = (long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
      uVar2 = uVar4;
      if (uVar4 <= *(uint *)(lVar10 + 0x18)) {
        uVar2 = *(uint *)(lVar10 + 0x18);
      }
      do {
        if (uVar2 == uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*plVar11 == 0) {
          uVar9 = 0;
LAB_074ae58c:
          *param_3 = uVar9;
          return uVar4;
        }
        if (*plVar11 == param_2) {
          uVar9 = 1;
          goto LAB_074ae58c;
        }
        uVar4 = uVar4 + 1;
        plVar11 = plVar11 + 1;
      } while ((int)uVar4 < iVar6);
    }
    uVar8 = (uVar1 - iVar5 * iVar7) + 1 + uVar8;
  } while( true );
}


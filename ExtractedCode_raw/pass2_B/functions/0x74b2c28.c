// rea decompile_all
// name: System.Runtime.Serialization.ObjectHolderListEnumerator$$MoveNext
// address: 0x74b2c28
// body: available
// range: 0x74b2c28-0x74b2cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b2cc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b2cd0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b2cd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Runtime_Serialization_ObjectHolderListEnumerator__MoveNext(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar6 = *(uint *)(param_1 + 0x24);
    lVar5 = *(long *)(param_1 + 0x18);
    do {
      uVar6 = uVar6 + 1;
      if (lVar5 == 0) {
LAB_074b2cc4:
        *(uint *)(param_1 + 0x24) = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar6) goto LAB_074b2c90;
      lVar7 = *(long *)(lVar5 + 0x10);
      if (lVar7 == 0) goto LAB_074b2cc4;
      if (*(uint *)(lVar7 + 0x18) <= uVar6) {
        *(uint *)(param_1 + 0x24) = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar7 = *(long *)(lVar7 + (long)(int)uVar6 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_074b2cc4;
      uVar2 = *(uint *)(lVar7 + 0x50);
      uVar3 = uVar2 >> 0xe & 1;
      if ((uVar2 & 6) == 0) {
        uVar3 = 1;
      }
      if (((uVar2 & 1) != 0) || (uVar3 == 0)) goto LAB_074b2c90;
    } while( true );
  }
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  *(int *)(param_1 + 0x24) = iVar1;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  bVar4 = iVar1 == *(int *)(*(long *)(param_1 + 0x18) + 0x18);
LAB_074b2cb8:
  return !bVar4;
LAB_074b2c90:
  bVar4 = uVar6 == *(uint *)(lVar5 + 0x18);
  *(uint *)(param_1 + 0x24) = uVar6;
  goto LAB_074b2cb8;
}


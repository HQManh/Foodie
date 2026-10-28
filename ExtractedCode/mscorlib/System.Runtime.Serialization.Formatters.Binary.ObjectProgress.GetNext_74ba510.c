// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectProgress$$GetNext
// address: 0x74ba510
// body: available
// range: 0x74ba510-0x74ba66f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ba668 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ba66c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Serialization_Formatters_Binary_ObjectProgress__GetNext
          (long param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  *param_2 = 0;
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  uVar1 = *(uint *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x30) == 2) {
    if (uVar1 != *(uint *)(param_1 + 0x48)) {
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      *param_2 = *(undefined4 *)(param_1 + 0x4c);
      *param_3 = uVar2;
      thunk_FUN_03f5d7b8(param_3);
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
LAB_074ba648:
      *(int *)(param_1 + 0x14) = iVar3 + 1;
      return 1;
    }
  }
  else if ((uVar1 != *(uint *)(param_1 + 0x5c)) || (*(char *)(param_1 + 0x10) != '\0')) {
    lVar5 = *(long *)(param_1 + 0x60);
    if (lVar5 != 0) {
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        lVar4 = *(long *)(param_1 + 0x68);
        *param_2 = *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20);
        if (lVar4 == 0) goto LAB_074ba668;
        if (*(uint *)(param_1 + 0x14) < *(uint *)(lVar4 + 0x18)) {
          *param_3 = *(undefined8 *)(lVar4 + (long)(int)*(uint *)(param_1 + 0x14) * 8 + 0x20);
          thunk_FUN_03f5d7b8(param_3);
          uVar1 = *(uint *)(param_1 + 0x14);
          if (uVar1 == 0) {
            *(undefined1 *)(param_1 + 0x10) = 0;
          }
          lVar5 = *(long *)(param_1 + 0x70);
          if (lVar5 == 0) goto LAB_074ba668;
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28));
            lVar5 = *(long *)(param_1 + 0x78);
            if (lVar5 == 0) goto LAB_074ba668;
            if (*(uint *)(param_1 + 0x14) < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(param_1 + 0x40) =
                   *(undefined8 *)(lVar5 + (long)(int)*(uint *)(param_1 + 0x14) * 8 + 0x20);
              thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40));
              iVar3 = *(int *)(param_1 + 0x14);
              goto LAB_074ba648;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
LAB_074ba668:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return 0;
}


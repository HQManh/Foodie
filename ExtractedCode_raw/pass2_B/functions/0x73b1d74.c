// rea decompile_all
// name: MessagePack.Internal.AutomataDictionary.AutomataNode$$SearchNext
// address: 0x73b1d74
// body: available
// range: 0x73b1d74-0x73b1e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b1e94 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b1e98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_Internal_AutomataDictionary_AutomataNode__SearchNext(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_09520be7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181960);
    FUN_03f5c2a4(&DAT_091e5cc8);
    DAT_09520be7 = 1;
  }
  if (*(int *)(DAT_09181960 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = MessagePack_Internal_AutomataKeyGen__GetKey(param_2);
  uVar1 = *(uint *)(param_1 + 0x38);
  if ((int)uVar1 < 4) {
    if (0 < (int)uVar1) {
      lVar6 = *(long *)(param_1 + 0x30);
      if (lVar6 == 0) goto LAB_073b1e98;
      lVar3 = 0;
      lVar5 = 0x20;
      do {
        if (-lVar3 == (ulong)*(uint *)(lVar6 + 0x18)) goto LAB_073b1e94;
        if (*(long *)(lVar6 + lVar5) == lVar2) {
          lVar2 = *(long *)(param_1 + 0x28);
          if (lVar2 == 0) goto LAB_073b1e98;
          if (*(uint *)(lVar2 + 0x18) <= (uint)-(int)lVar3) goto LAB_073b1e94;
          puVar4 = (undefined8 *)(lVar2 + lVar5);
          goto LAB_073b1e80;
        }
        lVar3 = lVar3 + -1;
        lVar5 = lVar5 + 8;
      } while (-lVar3 != (ulong)uVar1);
    }
  }
  else {
    uVar1 = MessagePack_Internal_AutomataDictionary_AutomataNode__BinarySearch
                      (*(undefined8 *)(param_1 + 0x30),0);
    if (-1 < (int)uVar1) {
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 != 0) {
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          puVar4 = (undefined8 *)(lVar2 + (ulong)uVar1 * 8 + 0x20);
LAB_073b1e80:
          return *puVar4;
        }
LAB_073b1e94:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
LAB_073b1e98:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0;
}


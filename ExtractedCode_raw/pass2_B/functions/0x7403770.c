// rea decompile_all
// name: Mono.Security.Protocol.Ntlm.Type2Message$$GetBytes
// address: 0x7403770
// body: available
// range: 0x7403770-0x7403827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7403820 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7403824 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Security_Protocol_Ntlm_Type2Message__GetBytes(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  lVar1 = Mono_Security_Protocol_Ntlm_MessageBase__PrepareMessage(param_1,0x28);
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    uVar3 = (uint)uVar4;
    if ((((uVar3 < 0x11) || (*(char *)(lVar1 + 0x30) = (char)uVar4, uVar3 == 0x11)) ||
        (*(char *)(lVar1 + 0x31) = (char)((ulong)uVar4 >> 8), uVar3 < 0x15)) ||
       (((*(char *)(lVar1 + 0x34) = (char)*(undefined4 *)(param_1 + 0x14), uVar3 == 0x15 ||
         (*(char *)(lVar1 + 0x35) = (char)((uint)*(undefined4 *)(param_1 + 0x14) >> 8), uVar3 < 0x17
         )) || (*(char *)(lVar1 + 0x36) = (char)*(undefined2 *)(param_1 + 0x16), uVar3 == 0x17)))) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined1 *)(lVar1 + 0x37) = *(undefined1 *)(param_1 + 0x17);
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      System_Buffer__BlockCopy(lVar2,0,lVar1,0x18,*(undefined4 *)(lVar2 + 0x18),0);
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


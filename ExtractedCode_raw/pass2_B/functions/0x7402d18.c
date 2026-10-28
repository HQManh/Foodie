// rea decompile_all
// name: Mono.Security.Protocol.Ntlm.MessageBase$$CheckHeader
// address: 0x7402d18
// body: available
// range: 0x7402d18-0x7402e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7402e24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7402e28 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Mono_Security_Protocol_Ntlm_MessageBase__CheckHeader(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint local_34;
  
  if ((DAT_09520e98 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188118);
    DAT_09520e98 = 1;
  }
  uVar5 = 0xffffffff;
  lVar3 = DAT_09188118;
  while( true ) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar3 = DAT_09188118;
    }
    lVar4 = **(long **)(lVar3 + 0xb8);
    if (lVar4 == 0) break;
    uVar1 = uVar5 + 1;
    if (*(int *)(lVar4 + 0x18) <= (int)uVar1) {
      local_34 = 0;
      Mono_Security_BitConverterLE__UIntFromBytes(&local_34,param_2,8);
      return (ulong)local_34 == (long)*(int *)(param_1 + 0x10);
    }
    if (param_2 == 0) break;
    if (*(uint *)(param_2 + 0x18) <= uVar1) {
LAB_07402e28:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    cVar2 = *(char *)(param_2 + (int)uVar1 + 0x20);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar4 = **(long **)(DAT_09188118 + 0xb8);
      lVar3 = DAT_09188118;
      if (lVar4 == 0) break;
    }
    uVar5 = uVar5 + 1;
    if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_07402e28;
    if (cVar2 != *(char *)(lVar4 + (int)uVar1 + 0x20)) {
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


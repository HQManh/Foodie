// rea decompile_all
// name: Mono.Security.Protocol.Ntlm.MessageBase$$Decode
// address: 0x7402b80
// body: available
// range: 0x7402b80-0x7402d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7402bfc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7402c88 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7402d14 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Protocol_Ntlm_MessageBase__Decode(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_0921f540);
    System_ArgumentNullException___ctor(uVar3,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091d3428);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  if (0xb < *(int *)(param_2 + 0x18)) {
    uVar1 = Mono_Security_Protocol_Ntlm_MessageBase__CheckHeader();
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar3 = thunk_FUN_03fc39d4(&DAT_092053a0);
    local_28 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_28);
    uVar3 = System_String__Format(uVar3,uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921f540);
    System_ArgumentException___ctor(uVar4,uVar3,uVar5,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091d3428);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar3);
  }
  uVar3 = thunk_FUN_03fc39d4(&DAT_09207e48);
  FUN_039b1d98(param_2);
  local_24 = (undefined4)*(undefined8 *)(param_2 + 0x18);
  uVar4 = FUN_03f5c42c(DAT_09535420,&local_24);
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar5 = thunk_FUN_03f9944c();
  uVar2 = thunk_FUN_03fc39d4(&DAT_0921f540);
  System_ArgumentOutOfRangeException___ctor(uVar5,uVar2,uVar4,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091d3428);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar3);
}


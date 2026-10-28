// rea decompile_all
// name: Mono.Security.Protocol.Ntlm.Type1Message$$Decode
// address: 0x7403124
// body: available
// range: 0x7403124-0x740322b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7403228 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Protocol_Ntlm_Type1Message__Decode(long param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined2 local_34 [2];
  undefined2 local_28 [2];
  undefined2 local_24 [2];
  
  Mono_Security_Protocol_Ntlm_MessageBase__Decode();
  local_38 = 0;
  Mono_Security_BitConverterLE__UIntFromBytes(&local_38,param_2,0xc);
  local_34[0] = 0;
  *(undefined4 *)(param_1 + 0x14) = local_38;
  Mono_Security_BitConverterLE__UShortFromBytes(local_34,param_2,0x10);
  uVar1 = local_34[0];
  local_28[0] = 0;
  Mono_Security_BitConverterLE__UShortFromBytes(local_28,param_2,0x14);
  uVar2 = local_28[0];
  plVar3 = (long *)System_Text_Encoding__get_ASCII(0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x378))
                      (plVar3,param_2,uVar2,uVar1,*(undefined8 *)(*plVar3 + 0x380));
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    thunk_FUN_03f5d7b8();
    local_24[0] = 0;
    Mono_Security_BitConverterLE__UShortFromBytes(local_24,param_2,0x18);
    uVar1 = local_24[0];
    plVar3 = (long *)System_Text_Encoding__get_ASCII(0);
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x378))
                        (plVar3,param_2,0x20,uVar1,*(undefined8 *)(*plVar3 + 0x380));
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


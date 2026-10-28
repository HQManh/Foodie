// rea decompile_all
// name: Mono.Security.Protocol.Ntlm.Type2Message$$Decode
// address: 0x74035d8
// body: available
// range: 0x74035d8-0x740376f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740376c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Protocol_Ntlm_Type2Message__Decode(long param_1,long param_2)

{
  short sVar1;
  undefined2 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_3c;
  short local_38 [2];
  undefined2 local_34 [2];
  short local_28 [2];
  undefined2 local_24 [2];
  
  if ((DAT_09520ea3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520ea3 = 1;
  }
  Mono_Security_Protocol_Ntlm_MessageBase__Decode(param_1,param_2);
  local_3c = 0;
  Mono_Security_BitConverterLE__UIntFromBytes(&local_3c,param_2,0x14);
  *(undefined4 *)(param_1 + 0x14) = local_3c;
  System_Buffer__BlockCopy(param_2,0x18,*(undefined8 *)(param_1 + 0x18),0,8,0);
  local_38[0] = 0;
  Mono_Security_BitConverterLE__UShortFromBytes(local_38,param_2,0xc);
  sVar1 = local_38[0];
  local_34[0] = 0;
  Mono_Security_BitConverterLE__UShortFromBytes(local_34,param_2,0x10);
  uVar2 = local_34[0];
  if (sVar1 != 0) {
    if ((*(byte *)(param_1 + 0x14) >> 1 & 1) == 0) {
      plVar3 = (long *)System_Text_Encoding__get_Unicode();
    }
    else {
      plVar3 = (long *)System_Text_Encoding__get_ASCII(0);
    }
    if (plVar3 == (long *)0x0) goto LAB_0740376c;
    uVar4 = (**(code **)(*plVar3 + 0x378))
                      (plVar3,param_2,uVar2,sVar1,*(undefined8 *)(*plVar3 + 0x380));
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    thunk_FUN_03f5d7b8();
  }
  if (param_2 != 0) {
    if (0x2f < *(int *)(param_2 + 0x18)) {
      local_28[0] = 0;
      Mono_Security_BitConverterLE__UShortFromBytes(local_28,param_2,0x28);
      sVar1 = local_28[0];
      local_24[0] = 0;
      Mono_Security_BitConverterLE__UShortFromBytes(local_24,param_2,0x2c);
      uVar2 = local_24[0];
      if (sVar1 != 0) {
        uVar4 = FUN_03f5c394(DAT_0917fc88,sVar1);
        puVar5 = (undefined8 *)(param_1 + 0x28);
        *puVar5 = uVar4;
        thunk_FUN_03f5d7b8(puVar5,uVar4);
        System_Buffer__BlockCopy(param_2,uVar2,*puVar5,0,sVar1,0);
      }
    }
    return;
  }
LAB_0740376c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


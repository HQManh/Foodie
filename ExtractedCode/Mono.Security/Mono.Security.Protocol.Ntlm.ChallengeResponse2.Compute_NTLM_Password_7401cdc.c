// rea decompile_all
// name: Mono.Security.Protocol.Ntlm.ChallengeResponse2$$Compute_NTLM_Password
// address: 0x7401cdc
// body: available
// range: 0x7401cdc-0x7401ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7401ddc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Mono_Security_Protocol_Ntlm_ChallengeResponse2__Compute_NTLM_Password(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_09520e8e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520e8e = 1;
  }
  uVar1 = FUN_03f5c394(DAT_0917fc88,0x15);
  lVar2 = Mono_Security_Cryptography_MD4__Create(0);
  if (param_1 == 0) {
    lVar4 = FUN_03f5c394(DAT_0917fc88,0);
  }
  else {
    plVar3 = (long *)System_Text_Encoding__get_Unicode(0);
    if (plVar3 == (long *)0x0) goto LAB_07401ddc;
    lVar4 = (**(code **)(*plVar3 + 600))(plVar3,param_1,*(undefined8 *)(*plVar3 + 0x260));
  }
  if (lVar2 != 0) {
    lVar2 = System_Security_Cryptography_HashAlgorithm__ComputeHash(lVar2,lVar4,0);
    System_Buffer__BlockCopy(lVar2,0,uVar1,0,0x10,0);
    if ((lVar4 != 0) && (System_Array__Clear(lVar4,0,*(undefined4 *)(lVar4 + 0x18),0), lVar2 != 0))
    {
      System_Array__Clear(lVar2,0,*(undefined4 *)(lVar2 + 0x18),0);
      return uVar1;
    }
  }
LAB_07401ddc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


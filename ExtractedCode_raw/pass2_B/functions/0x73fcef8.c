// rea decompile_all
// name: Mono.Security.X509.X509Certificate$$VerifySignature
// address: 0x73fcef8
// body: available
// range: 0x73fcef8-0x73fd01f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fd01c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Mono_Security_X509_X509Certificate__VerifySignature(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_09520e55 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188d80);
    FUN_03f5c2a4(&DAT_09189a30);
    FUN_03f5c2a4(&DAT_091f97d0);
    DAT_09520e55 = 1;
  }
  uVar1 = System_String__op_Equality(param_1[0xe],DAT_091f97d0,0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_09189a30);
  System_Security_Cryptography_RSAPKCS1SignatureDeformatter___ctor(plVar2,param_2,0);
  lVar5 = param_1[0xe];
  if (*(int *)(DAT_09188d80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = Mono_Security_Cryptography_PKCS1__HashNameFromOid(lVar5,1,0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 400));
    uVar3 = Mono_Security_X509_X509Certificate__get_Hash(param_1);
    uVar4 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
                    /* WARNING: Could not recover jumptable at 0x073fd018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x198))(plVar2,uVar3,uVar4,*(undefined8 *)(*plVar2 + 0x1a0));
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


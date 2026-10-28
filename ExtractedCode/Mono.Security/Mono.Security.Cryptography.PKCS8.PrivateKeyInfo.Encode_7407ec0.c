// rea decompile_all
// name: Mono.Security.Cryptography.PKCS8.PrivateKeyInfo$$Encode
// address: 0x7407ec0
// body: available
// range: 0x7407ec0-0x74080b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74080b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__Encode(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_09520ece & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520ece = 1;
  }
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x1e8))(&local_a0,param_1,1,*(undefined8 *)(*param_1 + 0x1f0));
    plVar1 = (long *)thunk_FUN_03f9944c(DAT_09180e18);
    Mono_Security_ASN1___ctor(plVar1,0x30,0);
    uVar2 = FUN_03f5c394(DAT_0917fc88,1);
    uVar3 = thunk_FUN_03f9944c(DAT_09180e18);
    Mono_Security_ASN1___ctor(uVar3,2,uVar2,0);
    if (plVar1 != (long *)0x0) {
      Mono_Security_ASN1__Add(plVar1,uVar3,0);
      uVar2 = Mono_Security_ASN1Convert__FromUnsignedBigInteger(uStack_98,0);
      Mono_Security_ASN1__Add(plVar1,uVar2,0);
      uVar2 = Mono_Security_ASN1Convert__FromUnsignedBigInteger(local_a0,0);
      Mono_Security_ASN1__Add(plVar1,uVar2,0);
      uVar2 = Mono_Security_ASN1Convert__FromUnsignedBigInteger(uStack_68,0);
      Mono_Security_ASN1__Add(plVar1,uVar2,0);
      uVar2 = Mono_Security_ASN1Convert__FromUnsignedBigInteger(local_90,0);
      Mono_Security_ASN1__Add(plVar1,uVar2,0);
      uVar2 = Mono_Security_ASN1Convert__FromUnsignedBigInteger(uStack_88,0);
      Mono_Security_ASN1__Add(plVar1,uVar2,0);
      uVar2 = Mono_Security_ASN1Convert__FromUnsignedBigInteger(local_80,0);
      Mono_Security_ASN1__Add(plVar1,uVar2,0);
      uVar2 = Mono_Security_ASN1Convert__FromUnsignedBigInteger(uStack_78,0);
      Mono_Security_ASN1__Add(plVar1,uVar2,0);
      uVar2 = Mono_Security_ASN1Convert__FromUnsignedBigInteger(local_70,0);
      Mono_Security_ASN1__Add(plVar1,uVar2,0);
      (**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(*plVar1 + 0x180));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


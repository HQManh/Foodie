// rea decompile_all
// name: Mono.Security.Interface.MonoTlsSettings$$.ctor
// address: 0x7404c70
// body: available
// range: 0x7404c70-0x7404df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7404df0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Interface_MonoTlsSettings___ctor(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if ((DAT_09520eb2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0918d138);
    DAT_09520eb2 = 1;
  }
  *(undefined1 *)(param_1 + 0x71) = 1;
  *(undefined1 *)(param_1 + 0x76) = 1;
  System_Object___ctor(param_1,0);
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    thunk_FUN_03f5d7b8();
    *(undefined2 *)(param_1 + 0x71) = *(undefined2 *)(param_2 + 0x71);
    *(undefined2 *)(param_1 + 0x73) = *(undefined2 *)(param_2 + 0x73);
    *(undefined2 *)(param_1 + 0x75) = *(undefined2 *)(param_2 + 0x75);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    thunk_FUN_03f5d7b8();
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    uVar1 = *(undefined1 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined1 *)(param_1 + 0x48) = uVar1;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50));
    lVar3 = *(long *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
    if (lVar3 != 0) {
      uVar2 = thunk_FUN_03f9944c(DAT_0918d138);
      System_Security_Cryptography_X509Certificates_X509CertificateCollection___ctor(uVar2,lVar3,0);
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar2);
    }
    if (*(long *)(param_2 + 0x40) != 0) {
      uVar2 = FUN_03f5c394(DAT_091805f8,*(undefined4 *)(*(long *)(param_2 + 0x40) + 0x18));
      puVar4 = (undefined8 *)(param_1 + 0x40);
      *puVar4 = uVar2;
      thunk_FUN_03f5d7b8(puVar4,uVar2);
      if (*(long *)(param_2 + 0x40) == 0) goto LAB_07404df0;
      System_Array__CopyTo(*(long *)(param_2 + 0x40),*puVar4,0,0);
    }
    *(undefined1 *)(param_1 + 0x70) = 1;
    return;
  }
LAB_07404df0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


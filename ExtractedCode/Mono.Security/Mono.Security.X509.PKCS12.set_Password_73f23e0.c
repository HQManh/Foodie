// rea decompile_all
// name: Mono.Security.X509.PKCS12$$set_Password
// address: 0x73f23e0
// body: available
// range: 0x73f23e0-0x73f25cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f2518 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73f25cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_PKCS12__set_Password(long param_1,long param_2)

{
  short sVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  
  if ((DAT_09520e21 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09188d90);
    DAT_09520e21 = 1;
  }
  plVar5 = (long *)(param_1 + 0x10);
  lVar2 = *plVar5;
  if (lVar2 != 0) {
    System_Array__Clear(lVar2,0,*(undefined4 *)(lVar2 + 0x18),0);
  }
  *plVar5 = 0;
  thunk_FUN_03f5d7b8(plVar5,0);
  if (param_2 == 0) {
    return;
  }
  iVar6 = *(int *)(param_2 + 0x10);
  if (iVar6 < 1) {
    lVar2 = FUN_03f5c394(DAT_0917fc88,2);
    *plVar5 = lVar2;
    thunk_FUN_03f5d7b8(plVar5);
    return;
  }
  if (*(int *)(DAT_09188d90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09520eab == '\0') {
    FUN_03f5c2a4(&DAT_09188d90);
    DAT_09520eab = '\x01';
  }
  if (*(int *)(DAT_09188d90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (iVar6 < **(int **)(DAT_09188d90 + 0xb8)) {
    sVar1 = System_String__get_Chars(param_2,iVar6 + -1,0);
    uVar4 = (uint)(sVar1 != 0);
  }
  else {
    if (*(int *)(DAT_09188d90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09520eab == '\0') {
      FUN_03f5c2a4(&DAT_09188d90);
      DAT_09520eab = '\x01';
    }
    if (*(int *)(DAT_09188d90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar6 = **(int **)(DAT_09188d90 + 0xb8);
    uVar4 = 0;
  }
  lVar2 = FUN_03f5c394(DAT_0917fc88,(iVar6 + uVar4) * 2);
  *plVar5 = lVar2;
  thunk_FUN_03f5d7b8(plVar5,lVar2);
  plVar3 = (long *)System_Text_Encoding__get_BigEndianUnicode(0);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x073f25c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x268))
              (plVar3,param_2,0,iVar6,*plVar5,0,*(undefined8 *)(*plVar3 + 0x270));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


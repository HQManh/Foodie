// rea decompile_all
// name: System.Security.Cryptography.DSACryptoServiceProvider$$ExportParameters
// address: 0x7472fe8
// body: available
// range: 0x7472fe8-0x7473093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7473040 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7473090 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_DSACryptoServiceProvider__ExportParameters
               (undefined8 *param_1,long param_2,uint param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (((param_3 & 1) != 0) && (*(char *)(param_2 + 0x2a) == '\0')) {
    uVar2 = thunk_FUN_03fc39d4(&DAT_091fdd48);
    uVar2 = Locale__GetText(uVar2,0);
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar3 = thunk_FUN_03f9944c();
    System_Security_Cryptography_CryptographicException___ctor(uVar3,uVar2,0);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091c71e8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar2);
  }
  plVar1 = *(long **)(param_2 + 0x30);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x1e8))(&local_60,plVar1,param_3 & 1,*(undefined8 *)(*plVar1 + 0x1f0));
    param_1[1] = uStack_58;
    *param_1 = local_60;
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[5] = uStack_38;
    param_1[4] = local_40;
    param_1[7] = uStack_28;
    param_1[6] = uStack_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


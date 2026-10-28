// rea decompile_all
// name: System.Security.Cryptography.CryptoStream$$CheckWriteArguments
// address: 0x745a388
// body: available
// range: 0x745a388-0x745a4bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x745a474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745a4bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_CryptoStream__CheckWriteArguments
               (long *param_1,long param_2,int param_3,int param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  if ((uVar1 & 1) == 0) {
    thunk_FUN_03fc39d4(&DAT_09188920);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0920dba8);
    System_NotSupportedException___ctor(uVar4,uVar5,0);
  }
  else {
    if (param_3 < 0) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      puVar2 = &DAT_092202d8;
    }
    else {
      if (-1 < param_4) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
          return;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar4 = thunk_FUN_03f9944c();
        uVar5 = thunk_FUN_03fc39d4(&DAT_09209710);
        System_ArgumentException___ctor(uVar4,uVar5,0);
        goto LAB_0745a4a8;
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      puVar2 = &DAT_09219b28;
    }
    uVar5 = thunk_FUN_03fc39d4(puVar2);
    uVar3 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar3,0);
  }
LAB_0745a4a8:
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c6bb8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}


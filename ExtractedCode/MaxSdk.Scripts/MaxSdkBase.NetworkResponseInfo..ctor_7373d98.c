// rea decompile_all
// name: MaxSdkBase.NetworkResponseInfo$$.ctor
// address: 0x7373d98
// body: available
// range: 0x7373d98-0x7373ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7373fc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7373ff0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MaxSdkBase_NetworkResponseInfo___ctor(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_09520944 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fb58);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_09192720);
    FUN_03f5c2a4(&DAT_09187f38);
    FUN_03f5c2a4(&DAT_09192738);
    FUN_03f5c2a4(&DAT_0921d8e8);
    FUN_03f5c2a4(&DAT_09219d40);
    FUN_03f5c2a4(&DAT_092170e8);
    FUN_03f5c2a4(&DAT_0921e238);
    FUN_03f5c2a4(&DAT_0921f450);
    FUN_03f5c2a4(&DAT_0921b0c8);
    DAT_09520944 = 1;
  }
  System_Object___ctor(param_1,0);
  if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = MaxSdkUtils__GetDictionaryFromDictionary(param_2,DAT_0921f450,0);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = thunk_FUN_03f9944c(DAT_09192738);
    MaxSdkBase_MediatedNetworkInfo___ctor(uVar4,lVar3);
  }
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar4);
    uVar4 = thunk_FUN_03f9944c(DAT_09176b80);
    FUN_06fd76bc(uVar4,DAT_0919fb58);
    if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = MaxSdkUtils__GetDictionaryFromDictionary(param_2,DAT_09219d40,uVar4);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar4);
    bVar1 = MaxSdkUtils__GetBoolFromDictionary(param_2,DAT_0921d8e8,0);
    uVar4 = DAT_0921e238;
    *(byte *)(param_1 + 0x28) = bVar1 & 1;
    uVar5 = MaxSdkUtils__GetLongFromDictionary(param_2,uVar4,0);
    uVar4 = DAT_092170e8;
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    uVar2 = MaxSdkUtils__GetIntFromDictionary(param_2,uVar4,0);
    uVar4 = DAT_0921b0c8;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    lVar3 = MaxSdkUtils__GetDictionaryFromDictionary(param_2,uVar4,0);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = thunk_FUN_03f9944c(DAT_09192720);
      MaxSdkBase_ErrorInfo___ctor(uVar4,lVar3);
    }
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


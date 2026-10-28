// rea decompile_all
// name: MaxSdkBase.ErrorInfo$$.ctor
// address: 0x737458c
// body: available
// range: 0x737458c-0x73747d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MaxSdkBase_ErrorInfo___ctor(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_0952094b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fb58);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_09187f38);
    FUN_03f5c2a4(&DAT_09192758);
    FUN_03f5c2a4(&DAT_0921f458);
    FUN_03f5c2a4(&DAT_0921b0d8);
    FUN_03f5c2a4(&DAT_0921b0d0);
    FUN_03f5c2a4(&DAT_0921f460);
    FUN_03f5c2a4(&DAT_092256e0);
    FUN_03f5c2a4(&DAT_0921e238);
    FUN_03f5c2a4(&DAT_092170e0);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_0952094b = 1;
  }
  System_Object___ctor(param_1,0);
  if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = MaxSdkUtils__GetIntFromDictionary(param_2,DAT_0921b0d0,0xffffffff);
  uVar3 = DAT_0921b0d8;
  uVar2 = DAT_091f5700;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar2 = MaxSdkUtils__GetStringFromDictionary(param_2,uVar3,uVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  thunk_FUN_03f5d7b8();
  uVar1 = MaxSdkUtils__GetIntFromDictionary(param_2,DAT_0921f458,0xffffffff);
  uVar3 = DAT_0921f460;
  uVar2 = DAT_091f5700;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar2 = MaxSdkUtils__GetStringFromDictionary(param_2,uVar3,uVar2);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  thunk_FUN_03f5d7b8();
  uVar2 = MaxSdkUtils__GetStringFromDictionary(param_2,DAT_092170e0,DAT_091f5700);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  thunk_FUN_03f5d7b8();
  uVar2 = thunk_FUN_03f9944c(DAT_09176b80);
  FUN_06fd76bc(uVar2,DAT_0919fb58);
  uVar2 = MaxSdkUtils__GetDictionaryFromDictionary(param_2,DAT_092256e0,uVar2);
  uVar3 = thunk_FUN_03f9944c(DAT_09192758);
  MaxSdkBase_WaterfallInfo___ctor(uVar3,uVar2);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar3);
  uVar2 = MaxSdkUtils__GetLongFromDictionary(param_2,DAT_0921e238,0);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  return;
}


// rea decompile_all
// name: Newtonsoft.Json.Utilities.Base64Encoder$$FlushAsync
// address: 0x7686138
// body: available
// range: 0x7686138-0x7686267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Utilities_Base64Encoder__FlushAsync(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_28;
  
  local_28 = param_2;
  if ((DAT_0952254e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091817a0);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09182b88);
    DAT_0952254e = 1;
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_28,0);
  uVar4 = local_28;
  if ((uVar3 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 < 1) {
      if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = *(undefined8 *)(*(long *)(DAT_091817a0 + 0xb8) + 0x10);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Convert__ToBase64CharArray(uVar5,0,iVar1,uVar4,0,0);
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar4 = Newtonsoft_Json_Utilities_Base64Encoder__WriteCharsAsync
                        (param_1,*(undefined8 *)(param_1 + 0x10),0,uVar2,local_28);
    }
  }
  else {
    if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = Newtonsoft_Json_Utilities_AsyncUtils__FromCanceled(uVar4);
  }
  return uVar4;
}


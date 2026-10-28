// rea decompile_all
// name: System.Security.Cryptography.CryptoStream$$FlushAsync
// address: 0x7459a44
// body: available
// range: 0x7459a44-0x7459bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7459b04 to 0x757dbfc System.IO.Stream$$FlushAsync (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Security_Cryptography_CryptoStream__FlushAsync(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_28;
  
  local_28 = param_2;
  if ((DAT_09521142 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09171388);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_09521142 = 1;
  }
  uVar1 = System_Object__GetType(param_1,0);
  uVar2 = DAT_09171388;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  uVar3 = System_Type__op_Inequality(uVar1,uVar2,0);
  if ((uVar3 & 1) != 0) {
    uVar2 = System_IO_Stream__FlushAsync(param_1,param_2,0);
    return uVar2;
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_28,0);
  uVar2 = local_28;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095175b2 == '\0') {
      FUN_03f5c2a4(&DAT_0918b8c8);
      DAT_095175b2 = '\x01';
    }
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = *(undefined8 *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x30);
  }
  else {
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Threading_Tasks_Task__FromCanceled(uVar2,0);
  }
  return uVar2;
}


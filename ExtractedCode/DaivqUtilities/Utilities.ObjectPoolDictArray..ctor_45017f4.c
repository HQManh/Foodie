// rea decompile_all
// name: Utilities.ObjectPoolDictArray$$.ctor
// address: 0x45017f4
// body: available
// range: 0x45017f4-0x4501937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4501934 to 0x5a8f324 FUN_05a8f324 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_ObjectPoolDictArray___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_095184a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d200);
    FUN_03f5c2a4(&DAT_0919d698);
    FUN_03f5c2a4(&DAT_09176418);
    FUN_03f5c2a4(&DAT_09176328);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_091b4c80);
    DAT_095184a1 = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(uVar1,DAT_091adc70);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09176328);
  FUN_06eef750(uVar1,DAT_0919d200);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09176418);
  FUN_06eef750(uVar1,DAT_0919d698);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar1);
  FUN_05a8f324(param_1,DAT_091b4c80);
  return;
}


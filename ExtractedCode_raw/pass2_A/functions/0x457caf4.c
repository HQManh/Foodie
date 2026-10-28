// rea decompile_all
// name: EssentialSystemR1.OnlineTimeCheck$$OpenCheatPanelInternal
// address: 0x457caf4
// body: available
// range: 0x457caf4-0x457cbf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x457cbf4 to 0x457bb8c EssentialSystemR1.OnlineTimeCheck$$SetCheatPanelInteractionBlocked (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void EssentialSystemR1_OnlineTimeCheck__OpenCheatPanelInternal(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if ((DAT_0951891b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09188c20);
    DAT_0951891b = 1;
  }
  if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09517209 == '\0') {
    FUN_03f5c2a4(&DAT_09188c20);
    DAT_09517209 = '\x01';
  }
  if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(long *)(DAT_09188c20 + 0xb8) + 8);
  uVar4 = EssentialSystemR1_OnlineTimeCheck__get_BaseNow();
  uVar4 = EssentialSystemR1_OnlineTimeCheck__AddClamped(uVar4,*(undefined8 *)(param_1 + 0x50));
  lVar2 = DAT_09183548;
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  iVar1 = *(int *)(lVar2 + 0xe4);
  *(undefined4 *)(param_1 + 0x60) = 2;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_DateTime__get_Year((undefined8 *)(param_1 + 0x58),0);
  *(undefined4 *)(param_1 + 100) = uVar3;
  EssentialSystemR1_OnlineTimeCheck__SyncDatePartText(param_1);
  EssentialSystemR1_OnlineTimeCheck__SyncDaySlider(param_1);
  *(undefined1 *)(param_1 + 0x48) = 1;
  EssentialSystemR1_OnlineTimeCheck__SetCheatPanelInteractionBlocked(param_1,1);
  return;
}


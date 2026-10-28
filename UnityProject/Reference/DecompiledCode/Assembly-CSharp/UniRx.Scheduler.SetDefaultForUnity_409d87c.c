// rea decompile_all
// name: UniRx.Scheduler$$SetDefaultForUnity
// address: 0x409d87c
// body: available
// range: 0x409d87c-0x409da17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x409da14 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Scheduler__SetDefaultForUnity(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((DAT_09515db9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a698);
    DAT_09515db9 = 1;
  }
  if (*(int *)(DAT_0918a698 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = *(undefined8 *)(*(long *)(DAT_0918a698 + 0xb8) + 8);
  if (DAT_09515ed8 == '\0') {
    FUN_03f5c2a4(&DAT_09194290);
    DAT_09515ed8 = '\x01';
  }
  **(undefined8 **)(DAT_09194290 + 0xb8) = uVar2;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09194290 + 0xb8),uVar2);
  uVar2 = *(undefined8 *)(*(long *)(DAT_0918a698 + 0xb8) + 8);
  if (DAT_09515ed9 == '\0') {
    FUN_03f5c2a4(&DAT_09194290);
    DAT_09515ed9 = '\x01';
  }
  puVar1 = (undefined8 *)(*(long *)(DAT_09194290 + 0xb8) + 8);
  *puVar1 = uVar2;
  thunk_FUN_03f5d7b8(puVar1,uVar2);
  uVar2 = **(undefined8 **)(DAT_0918a698 + 0xb8);
  if (DAT_09515eda == '\0') {
    FUN_03f5c2a4(&DAT_09194290);
    DAT_09515eda = '\x01';
  }
  puVar1 = (undefined8 *)(*(long *)(DAT_09194290 + 0xb8) + 0x10);
  *puVar1 = uVar2;
  thunk_FUN_03f5d7b8(puVar1,uVar2);
  uVar2 = UniRx_Scheduler__get_MainThread();
  if (DAT_09515edb == '\0') {
    FUN_03f5c2a4(&DAT_09194290);
    DAT_09515edb = '\x01';
  }
  puVar1 = (undefined8 *)(*(long *)(DAT_09194290 + 0xb8) + 0x18);
  *puVar1 = uVar2;
  thunk_FUN_03f5d7b8(puVar1,uVar2);
  uVar2 = *(undefined8 *)(*(long *)(DAT_0918a698 + 0xb8) + 0x10);
  if (DAT_09515edc == '\0') {
    FUN_03f5c2a4(&DAT_09194290);
    DAT_09515edc = '\x01';
  }
  puVar1 = (undefined8 *)(*(long *)(DAT_09194290 + 0xb8) + 0x20);
  *puVar1 = uVar2;
  thunk_FUN_03f5d7b8(puVar1,uVar2);
  return;
}


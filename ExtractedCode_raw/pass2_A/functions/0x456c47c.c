// rea decompile_all
// name: DG.Tweening.Plugins.Core.PluginsManager$$PurgeAll
// address: 0x456c47c
// body: available
// range: 0x456c47c-0x456c61f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456c610 to 0x6fd85dc FUN_06fd85dc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Core_PluginsManager__PurgeAll(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((DAT_09518876 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a0c68);
    FUN_03f5c2a4(&DAT_09189318);
    DAT_09518876 = 1;
  }
  **(undefined8 **)(DAT_09189318 + 0xb8) = 0;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09189318 + 0xb8),0);
  puVar1 = (undefined8 *)(*(long *)(DAT_09189318 + 0xb8) + 0x10);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  puVar1 = (undefined8 *)(*(long *)(DAT_09189318 + 0xb8) + 0x18);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  puVar1 = (undefined8 *)(*(long *)(DAT_09189318 + 0xb8) + 0x20);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  puVar1 = (undefined8 *)(*(long *)(DAT_09189318 + 0xb8) + 0x28);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  puVar1 = (undefined8 *)(*(long *)(DAT_09189318 + 0xb8) + 0x30);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  puVar1 = (undefined8 *)(*(long *)(DAT_09189318 + 0xb8) + 0x38);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  puVar1 = (undefined8 *)(*(long *)(DAT_09189318 + 0xb8) + 0x40);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  puVar1 = (undefined8 *)(*(long *)(DAT_09189318 + 0xb8) + 0x48);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  puVar1 = (undefined8 *)(*(long *)(DAT_09189318 + 0xb8) + 0x50);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  puVar1 = (undefined8 *)(*(long *)(DAT_09189318 + 0xb8) + 0x58);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  puVar1 = (undefined8 *)(*(long *)(DAT_09189318 + 0xb8) + 0x60);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  puVar1 = (undefined8 *)(*(long *)(DAT_09189318 + 0xb8) + 0x68);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  puVar1 = (undefined8 *)(*(long *)(DAT_09189318 + 0xb8) + 0x70);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  puVar1 = (undefined8 *)(*(long *)(DAT_09189318 + 0xb8) + 0x78);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  lVar2 = *(long *)(*(long *)(DAT_09189318 + 0xb8) + 0x80);
  if (lVar2 != 0) {
    FUN_06fd85dc(lVar2,DAT_091a0c68);
    return;
  }
  return;
}


// rea decompile_all
// name: _GAME.Utils.SaveFile$$CheckClearedData
// address: 0x7746d74
// body: available
// range: 0x7746d74-0x7746f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _GAME_Utils_SaveFile__CheckClearedData(void)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((DAT_09522b27 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091c9328);
    FUN_03f5c2a4(&DAT_0918a588);
    FUN_03f5c2a4(&DAT_09202d18);
    FUN_03f5c2a4(&DAT_09214160);
    DAT_09522b27 = 1;
  }
  uVar2 = UnityEngine_PlayerPrefs__HasKey(DAT_09202d18,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_0918a588 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = _GAME_Utils_SaveFile__get_Dir();
    System_IO_Directory__CreateDirectory(uVar3,0);
    goto LAB_07746f1c;
  }
  if (*(int *)(DAT_0918a588 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = _GAME_Utils_SaveFile__get_Dir();
  uVar4 = System_IO_Directory__Exists(uVar3,0);
  if ((uVar4 & 1) == 0) {
LAB_07746eb0:
    bVar1 = false;
  }
  else {
    if (*(int *)(DAT_0918a588 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = _GAME_Utils_SaveFile__get_Dir();
    uVar3 = System_IO_Directory__EnumerateFileSystemEntries(uVar3,0);
    uVar4 = FUN_04ab3c44(uVar3,DAT_091c9328);
    if ((uVar4 & 1) == 0) goto LAB_07746eb0;
    if (*(int *)(DAT_0918a588 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = _GAME_Utils_SaveFile__get_Dir();
    System_IO_Directory__Delete(uVar3,1,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(DAT_09214160,0);
    bVar1 = true;
  }
  if (*(int *)(DAT_0918a588 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = _GAME_Utils_SaveFile__get_Dir();
  System_IO_Directory__CreateDirectory(uVar3,0);
  UnityEngine_PlayerPrefs__SetInt(DAT_09202d18,1,0);
  UnityEngine_PlayerPrefs__Save(0);
  if (bVar1) {
    if (*(int *)(DAT_0918a588 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = **(long **)(DAT_0918a588 + 0xb8);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
    }
  }
LAB_07746f1c:
  return (uVar2 ^ 0xffffffff) & 1;
}


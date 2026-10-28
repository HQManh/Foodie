// rea decompile_all
// name: _GAME.Device.HInput$$get_PrimaryDown
// address: 0x774a4b0
// body: available
// range: 0x774a4b0-0x774a55f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _GAME_Device_HInput__get_PrimaryDown(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined1 auStack_b4 [68];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  local_30 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = UnityEngine_Input__GetMouseButtonDown(0,0);
  if ((uVar4 & 1) == 0) {
    iVar2 = UnityEngine_Input__get_touchCount(0);
    if (iVar2 < 1) {
      bVar1 = false;
    }
    else {
      iVar2 = 0;
      do {
        UnityEngine_Input__GetTouch(auStack_b4,iVar2,0);
        memcpy(&local_70,auStack_b4,0x44);
        iVar3 = UnityEngine_Touch__get_phase(&local_70,0);
        bVar1 = iVar3 == 0;
        if (iVar3 == 0) {
          return true;
        }
        iVar2 = iVar2 + 1;
        iVar3 = UnityEngine_Input__get_touchCount(0);
      } while (iVar2 < iVar3);
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


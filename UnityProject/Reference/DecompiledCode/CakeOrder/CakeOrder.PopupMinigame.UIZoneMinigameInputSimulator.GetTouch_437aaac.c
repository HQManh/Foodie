// rea decompile_all
// name: CakeOrder.PopupMinigame.UIZoneMinigameInputSimulator$$GetTouch
// address: 0x437aaac
// body: available
// range: 0x437aaac-0x437abaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_UIZoneMinigameInputSimulator__GetTouch
               (void *param_1,undefined1 param_2 [16],undefined4 param_3,long param_4,
               undefined4 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_d4 [68];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  if ((DAT_09517939 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189ca0);
    DAT_09517939 = 1;
  }
  local_50 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  UnityEngine_Input__GetTouch(auStack_d4,param_5,0);
  memcpy(&local_90,auStack_d4,0x44);
  uVar4 = UnityEngine_Touch__get_position(&local_90,0);
  uVar3 = *(undefined8 *)(param_4 + 0x20);
  uVar1 = UnityEngine_Camera__get_main(0);
  if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189ca0);
  }
  uVar2 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                    (uVar4,param_3,uVar3,uVar1,0);
  if ((uVar2 & 1) == 0) {
    UnityEngine_Touch__set_phase(&local_90,4,0);
  }
  memcpy(param_1,&local_90,0x44);
  return;
}


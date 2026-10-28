// rea decompile_all
// name: CakeOrder.UI.UIFameRewardPreview$$OnDestroy
// address: 0x42b6b04
// body: available
// range: 0x42b6b04-0x42b6d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIFameRewardPreview__OnDestroy(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_095172d8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf680);
    FUN_03f5c2a4(&DAT_091bf690);
    FUN_03f5c2a4(&DAT_091bf6a0);
    FUN_03f5c2a4(&DAT_091bf6a8);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091979d0);
    FUN_03f5c2a4(&DAT_09197948);
    FUN_03f5c2a4(&DAT_09197760);
    FUN_03f5c2a4(&DAT_091977b8);
    DAT_095172d8 = 1;
  }
  uVar1 = FUN_0640f598(param_1 + 0x58,DAT_09197760);
  if ((uVar1 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = uVar3;
    uStack_48 = uVar4;
    local_40 = uVar2;
    FUN_04b71ee0(&local_50,DAT_091bf680);
  }
  uVar1 = FUN_0640f598(param_1 + 0x70,DAT_091979d0);
  if ((uVar1 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = uVar3;
    uStack_48 = uVar4;
    local_40 = uVar2;
    FUN_04b71ee0(&local_50,DAT_091bf6a8);
  }
  uVar1 = FUN_0640f598(param_1 + 0x88,DAT_09197948);
  if ((uVar1 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = uVar3;
    uStack_48 = uVar4;
    local_40 = uVar2;
    FUN_04b71ee0(&local_50,DAT_091bf6a0);
  }
  uVar1 = FUN_0640f598(param_1 + 0xa0,DAT_091977b8);
  if ((uVar1 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = uVar3;
    uStack_48 = uVar4;
    local_40 = uVar2;
    FUN_04b71ee0(&local_50,DAT_091bf690);
  }
  return;
}


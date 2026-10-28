// rea decompile_all
// name: _GAME.GameItem.GameItemManager$$ClaimReward
// address: 0x7749754
// body: available
// range: 0x7749754-0x774987b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameItem_GameItemManager__ClaimReward(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_09522b52 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ee00);
    FUN_03f5c2a4(&DAT_091a6480);
    FUN_03f5c2a4(&DAT_091a6488);
    FUN_03f5c2a4(&DAT_091a6490);
    FUN_03f5c2a4(&DAT_091a96b0);
    FUN_03f5c2a4(&DAT_091a96b8);
    FUN_03f5c2a4(&DAT_0918a440);
    DAT_09522b52 = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  if (param_1 != 0) {
    FUN_06f2d6f4(&local_60,param_1,DAT_0919ee00);
    while (uVar3 = FUN_0726063c(&local_60,DAT_091a6488), (uVar3 & 1) != 0) {
      uVar1 = (undefined4)local_50;
      uVar2 = local_50._4_4_;
      lVar4 = thunk_FUN_03f9944c(DAT_0918a440);
      System_Object___ctor(lVar4,0);
      *(undefined4 *)(lVar4 + 0x10) = uVar1;
      *(undefined4 *)(lVar4 + 0x14) = uVar2;
      _GAME_GameItem_GameItemManager__ClaimReward(lVar4,param_2);
    }
    FUN_07260744(&local_60,DAT_091a6480);
  }
  return;
}


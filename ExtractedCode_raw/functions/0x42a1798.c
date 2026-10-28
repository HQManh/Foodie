// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder$$LoadWinLogoAsync
// address: 0x42a1798
// body: available
// range: 0x42a1798-0x42a187f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder__LoadWinLogoAsync(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_0951722a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919a038);
    FUN_03f5c2a4(&DAT_0919a030);
    FUN_03f5c2a4(&DAT_0919a058);
    DAT_0951722a = 1;
  }
  local_60 = 0;
  uStack_38 = 0;
  local_40 = 0;
  local_48 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  thunk_FUN_03f5d7b8((ulong)&local_60 | 8,0);
  local_40 = param_2;
  thunk_FUN_03f5d7b8(&local_40,param_2);
  local_60 = CONCAT44(local_60._4_4_,0xffffffff);
  if (*(long *)(DAT_0919a030 + 0x38) == 0) {
    FUN_03f95ac8();
  }
  CakeOrder_InGame_UIInLevelCakeOrder_<LoadWinLogoAsync>d__101__MoveNext(&local_60);
  FUN_042b05c0(&local_78,(ulong)&local_60 | 8,DAT_0919a058);
  param_1[1] = uStack_70;
  *param_1 = local_78;
  param_1[2] = local_68;
  return;
}


// rea decompile_all
// name: AnhPD.FoodOrder.IngCellFinder$$PlaceClaims
// address: 0x4240f68
// body: available
// range: 0x4240f68-0x424110f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x424110c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngCellFinder__PlaceClaims(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulong local_80;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  
  if ((DAT_09516e2d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a2098);
    FUN_03f5c2a4(&DAT_091a20a0);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091a20a8);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091aac08);
    DAT_09516e2d = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_057e185c(&local_b8,*(long *)(param_1 + 0x30),DAT_091b05a8);
    local_60 = local_a8;
    puStack_68 = puStack_b0;
    local_70 = local_b8;
    local_b8 = 0;
    puStack_b0 = &local_70;
    while (uVar1 = FUN_071bd28c(&local_70,DAT_091a45a0), (uVar1 & 1) != 0) {
      AnhPD_FoodOrder_IngCellFinder__TryPlaceInDraft(local_60,param_2,param_3);
    }
    FUN_071bd288(&local_70,DAT_091a4598);
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_05706288(&local_a0,*(long *)(param_1 + 0x40),DAT_091aac08);
      local_b8 = 0;
      puStack_b0 = &local_a0;
      while (uVar1 = FUN_0718b194(&local_a0,DAT_091a20a0), (uVar1 & 1) != 0) {
        AnhPD_FoodOrder_IngCellFinder__TryPlaceInDraft
                  (local_88,local_80 & 0xffffffff,param_2,param_3);
      }
      FUN_0718b190(&local_a0,DAT_091a2098);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


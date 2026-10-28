// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleBurger$$get_Pieces
// address: 0x413b25c
// body: available
// range: 0x413b25c-0x413b407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413b404 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleBurger__get_Pieces(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_34;
  
  if ((DAT_09516390 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_091a5288);
    FUN_03f5c2a4(&DAT_091a5290);
    FUN_03f5c2a4(&DAT_091a5298);
    FUN_03f5c2a4(&DAT_091b2ac8);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516390 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_34 = 0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_PieceSet__One(&local_90,0,0);
  uStack_58 = uStack_88;
  local_60 = local_90;
  local_50 = local_80;
  if (*(long *)(param_2 + 0x100) != 0) {
    FUN_0579a6a8(&local_78,*(long *)(param_2 + 0x100),DAT_091b2ac8);
    while (uVar2 = FUN_071aef5c(&local_78,DAT_091a5290), uVar3 = local_68, (uVar2 & 1) != 0) {
      if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = AnhPD_FoodOrder_BurgerPieceTable__TryGetPiece(uVar3 & 0xffffffff,&local_34);
      uVar1 = local_34;
      if ((uVar3 & 1) != 0) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceSet__Add(&local_90,&local_60,uVar1,1,0);
        uStack_58 = uStack_88;
        local_60 = local_90;
        local_50 = local_80;
      }
    }
    FUN_071aef58(&local_78,DAT_091a5288);
    param_1[1] = uStack_58;
    *param_1 = local_60;
    param_1[2] = local_50;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


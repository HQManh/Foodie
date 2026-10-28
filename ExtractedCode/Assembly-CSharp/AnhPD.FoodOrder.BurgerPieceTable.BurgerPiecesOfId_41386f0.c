// rea decompile_all
// name: AnhPD.FoodOrder.BurgerPieceTable$$BurgerPiecesOfId
// address: 0x41386f0
// body: available
// range: 0x41386f0-0x41388cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41388c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41388cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_BurgerPieceTable__BurgerPiecesOfId(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09516386 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_091a1720);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516386 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_7c = 0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_PieceSet__One(&local_98,0,0);
  uStack_58 = uStack_90;
  local_60 = local_98;
  local_50 = local_88;
  lVar2 = AnhPD_FoodOrder_FlexibleId__Parts(param_2,0);
  if (lVar2 != 0) {
    FUN_05797d74(&local_78,lVar2,DAT_091adcc0);
    while( true ) {
      uVar3 = FUN_071ad7a4(&local_78,DAT_091a34d8);
      uVar4 = local_68;
      if ((uVar3 & 1) == 0) {
        FUN_071ad7a0(&local_78,DAT_091a34d0);
        param_1[1] = uStack_58;
        *param_1 = local_60;
        param_1[2] = local_50;
        return;
      }
      if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(DAT_091820c0 + 0xb8) + 8);
      if (lVar2 == 0) break;
      uVar4 = FUN_06f32264(lVar2,uVar4 & 0xffffffff,&local_7c,DAT_091a1720);
      uVar1 = local_7c;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceSet__Add(&local_98,&local_60,uVar1,1,0);
        uStack_58 = uStack_90;
        local_60 = local_98;
        local_50 = local_88;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: AnhPD.FoodOrder.BurgerPieceTable$$ChickenPiecesOfId
// address: 0x4138934
// body: available
// range: 0x4138934-0x4138bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4138bb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_BurgerPieceTable__ChickenPiecesOfId(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_34;
  
  if ((DAT_0951637d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_09218c08);
    DAT_0951637d = 1;
  }
  local_34 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_40 = 0;
  uVar3 = System_String__IsNullOrEmpty(param_2,0);
  if ((uVar3 & 1) == 0) {
    if (param_2 == 0) {
LAB_04138bb8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = System_String__StartsWith(param_2,DAT_09218c08,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = AnhPD_FoodOrder_FlexibleId__Parts(param_2,0);
      if (lVar4 == 0) goto LAB_04138bb8;
      if (3 < *(int *)(lVar4 + 0x18)) {
        uVar1 = FUN_05796eb0(lVar4,0,DAT_091add20);
        if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091820c0);
        }
        uVar3 = AnhPD_FoodOrder_BurgerPieceTable__TryGetChickenPiece(uVar1,&local_34);
        uVar1 = local_34;
        if ((uVar3 & 1) != 0) {
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          AnhPD_FoodOrder_PieceSet__One(&local_68,uVar1,0);
          uStack_48 = uStack_60;
          local_50 = local_68;
          local_40 = local_58;
          iVar2 = FUN_05796eb0(lVar4,1,DAT_091add20);
          if (0 < iVar2) {
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            AnhPD_FoodOrder_PieceSet__Add(&local_68,&local_50,0xe,1,0);
            uStack_48 = uStack_60;
            local_50 = local_68;
            local_40 = local_58;
          }
          iVar2 = FUN_05796eb0(lVar4,2,DAT_091add20);
          if (0 < iVar2) {
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            AnhPD_FoodOrder_PieceSet__Add(&local_68,&local_50,0x10,1,0);
            uStack_48 = uStack_60;
            local_50 = local_68;
            local_40 = local_58;
          }
          iVar2 = FUN_05796eb0(lVar4,3,DAT_091add20);
          if (0 < iVar2) {
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            AnhPD_FoodOrder_PieceSet__Add(&local_68,&local_50,0xf,1,0);
            local_40 = local_58;
            local_50 = local_68;
            uStack_48 = uStack_60;
          }
          goto LAB_04138b9c;
        }
      }
    }
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar5 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_48 = puVar5[1];
  local_50 = *puVar5;
  local_40 = puVar5[2];
LAB_04138b9c:
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[2] = local_40;
  return;
}


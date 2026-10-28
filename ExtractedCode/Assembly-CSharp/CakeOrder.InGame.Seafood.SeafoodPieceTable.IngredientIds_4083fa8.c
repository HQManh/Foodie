// rea decompile_all
// name: CakeOrder.InGame.Seafood.SeafoodPieceTable$$IngredientIds
// address: 0x4083fa8
// body: available
// range: 0x4083fa8-0x408413f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408413c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_InGame_Seafood_SeafoodPieceTable__IngredientIds(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09515c8b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a7b8);
    DAT_09515c8b = 1;
  }
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar5 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar5,DAT_091b0558);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_60,param_1,0);
  uVar6 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_60,0);
  uVar3 = local_40;
  do {
    if ((uVar6 & 1) == 0) {
      return lVar5;
    }
    local_40._4_4_ = (int)(uVar3 >> 0x20);
    bVar1 = 0 < local_40._4_4_;
    iVar9 = local_40._4_4_;
    local_40 = uVar3;
    if (bVar1) {
      do {
        if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar7 = CakeOrder_InGame_Seafood_SeafoodPieceTable__PreparedId(uVar3 & 0xffffffff);
        lVar4 = DAT_091b0570;
        if (lVar7 != 0) {
          if (lVar5 == 0) {
LAB_0408413c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_0408413c;
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = lVar7;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar5,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    uVar6 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_60,0);
    uVar3 = local_40;
  } while( true );
}


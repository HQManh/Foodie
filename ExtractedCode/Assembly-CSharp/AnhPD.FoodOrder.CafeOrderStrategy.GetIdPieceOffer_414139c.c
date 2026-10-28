// rea decompile_all
// name: AnhPD.FoodOrder.CafeOrderStrategy$$GetIdPieceOffer
// address: 0x414139c
// body: available
// range: 0x414139c-0x414157b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4141574 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4141578 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_CafeOrderStrategy__GetIdPieceOffer(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_48;
  
  if ((DAT_095163ca & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182240);
    FUN_03f5c2a4(&DAT_0919fc10);
    FUN_03f5c2a4(&DAT_09189150);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095163ca = 1;
  }
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (*(int *)(DAT_09182240 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(DAT_09182240 + 0xb8) + 0x98);
  if (lVar4 != 0) {
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar5 = 0;
      uVar3 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar1 = *(undefined4 *)(lVar4 + 0x20 + uVar5 * 4);
        if (*(int *)(DAT_09182240 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = AnhPD_FoodOrder_CafePieceTable__BaseIdOf(uVar1,0);
        AnhPD_FoodOrder_FlexiblePieceId__PiecesOf(&local_88,uVar2,param_2,0);
        uStack_68 = uStack_80;
        local_70 = local_88;
        local_60 = local_78;
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_70,0);
        if ((uVar3 & 1) == 0) {
          lVar4 = thunk_FUN_03f9944c(DAT_09189150);
          AnhPD_FoodOrder_PieceOffer___ctor(lVar4,0);
          if (lVar4 != 0) {
            *(undefined1 *)(lVar4 + 0x28) = 1;
            *(undefined8 *)(lVar4 + 0x18) = uStack_68;
            *(undefined8 *)(lVar4 + 0x10) = local_70;
            *(undefined8 *)(lVar4 + 0x20) = local_60;
            *(undefined4 *)(lVar4 + 0x2c) = 0;
            return lVar4;
          }
          goto LAB_04141578;
        }
        uVar3 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    lVar4 = AnhPD_FoodOrder_CafeOrderStrategy__get_IdOffers(param_1);
    if (param_2 == 0) {
      param_2 = **(long **)(DAT_09535468 + 0xb8);
    }
    if (lVar4 != 0) {
      uVar5 = FUN_06fd9fbc(lVar4,param_2,&local_48,DAT_0919fc10);
      if ((uVar5 & 1) == 0) {
        local_48 = 0;
      }
      return local_48;
    }
  }
LAB_04141578:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


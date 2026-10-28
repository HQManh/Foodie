// rea decompile_all
// name: AnhPD.FoodOrder.OrderStrategy$$TryGetOrderPieces
// address: 0x41d9360
// body: available
// range: 0x41d9360-0x41d94ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d94a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d94a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_OrderStrategy__TryGetOrderPieces
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long local_68;
  long lStack_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  if ((DAT_09516a99 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516a99 = 1;
  }
  local_50 = 0;
  local_48 = 0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar4 = *(long **)(DAT_09189158 + 0xb8);
  lVar7 = plVar4[1];
  lVar6 = *plVar4;
  param_3[2] = plVar4[2];
  param_3[1] = lVar7;
  *param_3 = lVar6;
  uVar3 = CakeOrder_InGame_OrderRecipeCodec__TryDecode(param_2,&local_50,0);
  lVar6 = local_48;
  if ((uVar3 & 1) == 0) {
    bVar2 = false;
  }
  else {
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < (int)*(ulong *)(local_48 + 0x18)) {
      uVar3 = 0;
      uVar5 = *(ulong *)(local_48 + 0x18) & 0xffffffff;
      lVar7 = local_48 + 0x20;
      do {
        if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar1 = *(uint *)(lVar7 + uVar3 * 4);
        if (uVar1 < 0x30) {
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          AnhPD_FoodOrder_PieceSet__Add(&local_68,param_3,uVar1,1);
          param_3[1] = lStack_60;
          *param_3 = local_68;
          param_3[2] = local_58;
        }
        uVar5 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    bVar2 = (param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0;
  }
  return bVar2;
}


// rea decompile_all
// name: AnhPD.FoodOrder.RecipeConfigSO$$CollectSpawnIdsOfPiece
// address: 0x40b80b0
// body: available
// range: 0x40b80b0-0x40b81db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b81d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_RecipeConfigSO__CollectSpawnIdsOfPiece
               (long param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_09515f30 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a86c0);
    FUN_03f5c2a4(&DAT_091b0570);
    DAT_09515f30 = 1;
  }
  local_28 = 0;
  local_38 = 0;
  if (param_3 != 0) {
    AnhPD_FoodOrder_RecipeConfigSO__BuildPieceIndex(param_1);
    uVar3 = AnhPD_FoodOrder_RecipeConfigSO__TryGetPreparedOfPiece(param_1,param_2,&local_28);
    if ((uVar3 & 1) == 0) {
      uVar3 = AnhPD_FoodOrder_RecipeConfigSO__TryGetRawOfPiece(param_1,param_2,&local_38);
      lVar2 = DAT_091b0570;
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(param_3 + 0x10);
        *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_040b81d8;
        uVar1 = *(uint *)(param_3 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(param_3 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = local_38;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(param_3,local_38,
                       *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    else {
      if (*(long *)(param_1 + 0x98) == 0) {
LAB_040b81d8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_053ebbdc(*(long *)(param_1 + 0x98),DAT_091a86c0);
      AnhPD_FoodOrder_RecipeConfigSO__CollectInputsOf(param_1,local_28,param_2,param_3);
    }
  }
  return;
}


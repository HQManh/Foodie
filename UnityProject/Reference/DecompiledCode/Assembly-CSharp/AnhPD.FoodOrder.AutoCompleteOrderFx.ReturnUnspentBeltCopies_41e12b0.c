// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$ReturnUnspentBeltCopies
// address: 0x41e12b0
// body: available
// range: 0x41e12b0-0x41e14f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e14e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e14ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e14f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e14f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AutoCompleteOrderFx__ReturnUnspentBeltCopies(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_09516ae0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4f70);
    FUN_03f5c2a4(&DAT_091a4f78);
    FUN_03f5c2a4(&DAT_091a4f80);
    FUN_03f5c2a4(&DAT_091a8920);
    FUN_03f5c2a4(&DAT_091a8918);
    FUN_03f5c2a4(&DAT_09179f50);
    FUN_03f5c2a4(&DAT_09186c48);
    FUN_03f5c2a4(&DAT_091adae8);
    FUN_03f5c2a4(&DAT_091b20f0);
    DAT_09516ae0 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_09179f50);
  FUN_053eb530(lVar4,DAT_091a8918);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_98,param_1,DAT_091b20f0);
  local_70 = local_88;
  uStack_78 = puStack_90;
  local_80 = local_98;
  local_98 = 0;
  puStack_90 = &local_80;
  while( true ) {
    do {
      do {
        uVar5 = FUN_071bd28c(&local_80,DAT_091a4f78);
        lVar3 = local_70;
        if ((uVar5 & 1) == 0) {
          FUN_071bd288(&local_80,DAT_091a4f70);
          return;
        }
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = AnhPD_FoodOrder_AutoCompleteOrderFx_Candidate__get_SourceId(local_70,0);
      } while ((lVar6 == 0) || (*(int *)(lVar3 + 0x48) < 1));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = FUN_053ec72c(lVar4,lVar3,DAT_091a8920);
    } while ((uVar5 & 1) == 0);
    uVar7 = AnhPD_FoodOrder_AutoCompleteOrderFx_Candidate__get_SourceId(lVar3,0);
    uVar1 = *(undefined4 *)(lVar3 + 0x48);
    uVar8 = thunk_FUN_03f9944c(DAT_09186c48);
    AnhPD_FoodOrder_IngredientState___ctor(uVar8,uVar7,uVar1,0);
    lVar3 = DAT_091adae8;
    if (param_2 == 0) break;
    lVar6 = *(long *)(param_2 + 0x10);
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar2 = *(uint *)(param_2 + 0x18);
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar2 + 1;
      puVar9 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
      *puVar9 = uVar8;
      thunk_FUN_03f5d7b8(puVar9,uVar8);
    }
    else {
      FUN_057e0c68(param_2,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


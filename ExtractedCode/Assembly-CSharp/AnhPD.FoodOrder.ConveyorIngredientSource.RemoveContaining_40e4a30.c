// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorIngredientSource$$RemoveContaining
// address: 0x40e4a30
// body: available
// range: 0x40e4a30-0x40e4c1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e4c1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_ConveyorIngredientSource__RemoveContaining(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_09516081 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091abdb0);
    FUN_03f5c2a4(&DAT_091abdc8);
    FUN_03f5c2a4(&DAT_091abd80);
    FUN_03f5c2a4(&DAT_091abde0);
    FUN_03f5c2a4(&DAT_0917bee0);
    FUN_03f5c2a4(&DAT_0917df80);
    FUN_03f5c2a4(&DAT_091b8b58);
    FUN_03f5c2a4(&DAT_091b8b80);
    FUN_03f5c2a4(&DAT_0917e328);
    FUN_03f5c2a4(&DAT_091e69c0);
    FUN_03f5c2a4(&DAT_0918ee08);
    DAT_09516081 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918ee08);
  AnhPD_FoodOrder_ConveyorIngredientSource_<>c__DisplayClass33_0___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x10),param_2);
    lVar5 = *param_1;
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x20) != 0)) {
      lVar3 = thunk_FUN_03f9944c(DAT_0917bee0);
      FUN_057e053c(lVar3,lVar5,DAT_091abd80);
      uVar4 = thunk_FUN_03f9944c(DAT_0917df80);
      FUN_05d78cfc(uVar4,lVar2,DAT_091e69c0,0);
      if (lVar3 == 0) goto LAB_040e4c1c;
      iVar1 = FUN_057e1520(lVar3,uVar4,DAT_091abdb0);
      if (-1 < iVar1) {
        uVar4 = FUN_057e0998(lVar3,iVar1,DAT_091abde0);
        FUN_057e251c(lVar3,iVar1,DAT_091abdc8);
        lVar2 = thunk_FUN_03f9944c(DAT_0917e328);
        FUN_05e2cb6c(lVar2,lVar3,DAT_091b8b58);
        *param_1 = lVar2;
        thunk_FUN_03f5d7b8(param_1,lVar2);
        return uVar4;
      }
    }
    return 0;
  }
LAB_040e4c1c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


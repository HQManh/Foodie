// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade.ShuffleBag$$Next
// address: 0x40af850
// body: available
// range: 0x40af850-0x40afa8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40afa8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_HomeCustomerParade_ShuffleBag__Next(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  
  if ((DAT_09515ee0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0578);
    FUN_03f5c2a4(&DAT_091b05d8);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_091b0620);
    DAT_09515ee0 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) goto LAB_040afa8c;
  if (*(int *)(lVar6 + 0x18) == 0) {
    FUN_057e0e78(lVar6,*(undefined8 *)(param_1 + 0x10),DAT_091b0578);
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 == 0) goto LAB_040afa8c;
    iVar7 = *(int *)(lVar6 + 0x18);
    if (0 < iVar7 + -1) {
      do {
        uVar1 = UnityEngine_Random__Range(0,iVar7,0);
        lVar6 = *(long *)(param_1 + 0x18);
        if (lVar6 == 0) goto LAB_040afa8c;
        uVar2 = FUN_057e0998(lVar6,uVar1,DAT_091b0610);
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_040afa8c;
        iVar7 = iVar7 + -1;
        uVar3 = FUN_057e0998(*(long *)(param_1 + 0x18),iVar7,DAT_091b0610);
        FUN_057e09ec(lVar6,iVar7,uVar2,DAT_091b0620);
        FUN_057e09ec(lVar6,uVar1,uVar3,DAT_091b0620);
      } while (1 < iVar7);
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 == 0) goto LAB_040afa8c;
    }
    iVar7 = *(int *)(lVar6 + 0x18) + -1;
    if (iVar7 != 0 && 0 < *(int *)(lVar6 + 0x18)) {
      uVar2 = FUN_057e0998(lVar6,iVar7,DAT_091b0610);
      uVar4 = System_String__op_Equality(uVar2,*(undefined8 *)(param_1 + 0x20),0);
      lVar6 = *(long *)(param_1 + 0x18);
      if ((uVar4 & 1) != 0) {
        if (lVar6 == 0) goto LAB_040afa8c;
        uVar2 = FUN_057e0998(lVar6,0,DAT_091b0610);
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_040afa8c;
        uVar3 = FUN_057e0998(*(long *)(param_1 + 0x18),iVar7,DAT_091b0610);
        FUN_057e09ec(lVar6,iVar7,uVar2,DAT_091b0620);
        FUN_057e09ec(lVar6,0,uVar3,DAT_091b0620);
        lVar6 = *(long *)(param_1 + 0x18);
      }
      if (lVar6 == 0) goto LAB_040afa8c;
    }
  }
  iVar7 = *(int *)(lVar6 + 0x18) + -1;
  uVar2 = FUN_057e0998(lVar6,iVar7,DAT_091b0610);
  puVar5 = (undefined8 *)(param_1 + 0x20);
  *puVar5 = uVar2;
  thunk_FUN_03f5d7b8(puVar5,uVar2);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_057e251c(*(long *)(param_1 + 0x18),iVar7,DAT_091b05d8);
    return *puVar5;
  }
LAB_040afa8c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


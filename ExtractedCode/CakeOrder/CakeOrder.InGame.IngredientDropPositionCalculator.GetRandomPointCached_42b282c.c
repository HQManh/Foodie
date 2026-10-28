// rea decompile_all
// name: CakeOrder.InGame.IngredientDropPositionCalculator$$GetRandomPointCached
// address: 0x42b282c
// body: available
// range: 0x42b282c-0x42b291b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b2918 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
CakeOrder_InGame_IngredientDropPositionCalculator__GetRandomPointCached
          (long param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar4;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 uVar5;
  undefined1 auVar3 [16];
  
  if ((DAT_095172b1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09212658);
    DAT_095172b1 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (1 < iVar1 - 2U) {
    if (iVar1 == 1) {
      if (*(long *)(param_1 + 0x70) != 0) {
        CakeOrder_InGame_VoronoiSpawner__GetRandomPointCached(*(long *)(param_1 + 0x70),param_2);
        uVar2 = extraout_s0_00;
        uVar4 = extraout_var_00;
        uVar5 = extraout_var_02;
        goto LAB_042b290c;
      }
      goto LAB_042b2918;
    }
    if (iVar1 != 0) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(DAT_09212658,0);
      if (DAT_09515ce8 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09515ce8 = '\x01';
      }
      uVar2 = **(undefined4 **)(DAT_0918cb68 + 0xb8);
      uVar4 = 0;
      uVar5 = 0;
      goto LAB_042b290c;
    }
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    CakeOrder_InGame_GridSpawner__GetRandomSpawnPoint(*(long *)(param_1 + 0x80),param_2);
    uVar2 = extraout_s0;
    uVar4 = extraout_var;
    uVar5 = extraout_var_01;
LAB_042b290c:
    auVar3._4_4_ = uVar4;
    auVar3._0_4_ = uVar2;
    auVar3._8_8_ = uVar5;
    return auVar3;
  }
LAB_042b2918:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


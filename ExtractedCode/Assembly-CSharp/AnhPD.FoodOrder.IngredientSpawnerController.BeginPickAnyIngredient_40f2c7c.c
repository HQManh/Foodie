// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$BeginPickAnyIngredient
// address: 0x40f2c7c
// body: available
// range: 0x40f2c7c-0x40f2e8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f2e88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_IngredientSpawnerController__BeginPickAnyIngredient
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  
  if ((DAT_095160f6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091cfe70);
    FUN_03f5c2a4(&DAT_091cfe58);
    FUN_03f5c2a4(&DAT_091abe40);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160f6 = 1;
  }
  if (*(char *)(param_4 + 0x7c) == '\0') {
    if (*(long *)(param_4 + 0x198) == 0) {
LAB_040f2e88:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(*(long *)(param_4 + 0x198) + 0x18) != 0) {
      uVar1 = UnityEngine_Camera__get_main(0);
      puVar5 = (undefined8 *)(param_4 + 0x80);
      *puVar5 = uVar1;
      thunk_FUN_03f5d7b8(puVar5,uVar1);
      uVar1 = *puVar5;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
      if ((uVar2 & 1) != 0) {
        *(undefined8 *)(param_4 + 0xa0) = param_5;
        *(undefined1 *)(param_4 + 0x7c) = 1;
        thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0xa0),param_5);
        if ((*(long *)(param_4 + 0x80) != 0) &&
           (lVar3 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x80),0), lVar3 != 0))
        {
          uVar6 = UnityEngine_Transform__get_position(lVar3,0);
          lVar3 = *(long *)(param_4 + 0x1b8);
          *(undefined4 *)(param_4 + 0x88) = uVar6;
          *(undefined4 *)(param_4 + 0x8c) = param_2;
          *(undefined4 *)(param_4 + 0x90) = param_3;
          if (lVar3 != 0) {
            *(undefined1 *)(lVar3 + 0x18) = 1;
            uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar1,param_4,DAT_091cfe70,0);
            *(undefined8 *)(lVar3 + 0x20) = uVar1;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20),uVar1);
            uVar1 = *(undefined8 *)(param_4 + 0x88);
            fVar11 = *(float *)(param_4 + 0x90);
            if (DAT_0951615d == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_0951615d = '\x01';
            }
            fVar8 = *(float *)(param_4 + 0x70);
            fVar7 = *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x2c);
            uVar10 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x24);
            fVar9 = (float)((ulong)uVar1 >> 0x20) + (float)((ulong)uVar10 >> 0x20) * fVar8;
            uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar4,param_4,DAT_091cfe58,0);
            AnhPD_FoodOrder_IngredientSpawnerController__MoveCameraTo
                      (CONCAT44(fVar9,(float)uVar1 + (float)uVar10 * fVar8),fVar9,
                       fVar11 + fVar7 * fVar8,param_4,uVar4);
            return 1;
          }
        }
        goto LAB_040f2e88;
      }
    }
  }
  return 0;
}


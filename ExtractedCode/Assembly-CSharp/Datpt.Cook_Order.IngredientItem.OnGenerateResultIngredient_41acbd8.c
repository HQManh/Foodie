// rea decompile_all
// name: Datpt.Cook_Order.IngredientItem$$OnGenerateResultIngredient
// address: 0x41acbd8
// body: available
// range: 0x41acbd8-0x41acd47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41acd44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_IngredientItem__OnGenerateResultIngredient
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  if ((DAT_095168c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d4ff8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095168c2 = 1;
  }
  if (0 < *(int *)(param_4 + 0xa0)) {
    iVar7 = 0;
    do {
      uVar6 = *(undefined8 *)(param_4 + 0x98);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar1 & 1) == 0) {
        lVar2 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins();
        uVar8 = *(undefined4 *)(param_4 + 0x88);
        lVar5 = UnityEngine_Component__get_transform(param_4,0);
        if ((lVar5 == 0) || (UnityEngine_Transform__get_position(lVar5,0), lVar2 == 0))
        goto LAB_041acd44;
        Datpt_Cook_Order_LevelControlCookOrder__GenerateNewIngredientCutted(lVar2,uVar8);
      }
      else {
        uVar6 = *(undefined8 *)(param_4 + 0x98);
        lVar2 = UnityEngine_Component__get_transform(param_4,0);
        if (lVar2 == 0) {
LAB_041acd44:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar8 = UnityEngine_Transform__get_position(lVar2,0);
        lVar2 = UnityEngine_Component__get_transform(param_4,0);
        if (lVar2 == 0) goto LAB_041acd44;
        uVar3 = UnityEngine_Transform__GetParent(lVar2,0);
        plVar4 = (long *)FUN_04c384b8(uVar8,param_2,param_3,uVar6,uVar3,DAT_091d4ff8);
        if (plVar4 == (long *)0x0) goto LAB_041acd44;
        (**(code **)(*plVar4 + 0x488))(plVar4,1,0,*(undefined8 *)(*plVar4 + 0x490));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_4 + 0xa0));
  }
  return;
}


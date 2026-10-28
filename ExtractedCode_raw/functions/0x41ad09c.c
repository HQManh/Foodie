// rea decompile_all
// name: Datpt.Cook_Order.IngredientItem$$OnCancelInterract
// address: 0x41ad09c
// body: available
// range: 0x41ad09c-0x41ad1fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ad1f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_IngredientItem__OnCancelInterract
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  
  if ((DAT_095168c4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095168c4 = 1;
  }
  lVar1 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins();
  uVar2 = UnityEngine_Component__get_transform(param_4,0);
  if (lVar1 != 0) {
    uVar8 = Datpt_Cook_Order_LevelControlCookOrder__GetNearestPosInSafeArea(lVar1,uVar2);
    if (DAT_09515ed5 == '\0') {
      FUN_03f5c2a4(&DAT_091898c0);
      DAT_09515ed5 = '\x01';
    }
    puVar5 = *(undefined4 **)(DAT_091898c0 + 0xb8);
    (**(code **)(*param_4 + 0x3c8))
              (uVar8,param_2,param_3,*puVar5,puVar5[1],puVar5[2],puVar5[3],0x3e4ccccd,param_4,
               *(undefined8 *)(*param_4 + 0x3d0));
    lVar1 = DAT_09188ad0;
    plVar6 = param_4 + 0x15;
    lVar7 = *plVar6;
    *(undefined1 *)(param_4 + 0x16) = 0;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(lVar7,0,0);
    if ((uVar3 & 1) != 0) {
      plVar4 = (long *)*plVar6;
      if (plVar4 == (long *)0x0) goto LAB_041ad1f8;
      (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    }
    param_4[0x15] = 0;
    thunk_FUN_03f5d7b8(plVar6,0);
    lVar1 = param_4[0x18];
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041ad1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
    return;
  }
LAB_041ad1f8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


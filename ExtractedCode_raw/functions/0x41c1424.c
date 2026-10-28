// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.SkewItem$$OnCancelInterract
// address: 0x41c1424
// body: available
// range: 0x41c1424-0x41c1607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c1600 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c1604 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_SkewItem__OnCancelInterract
               (undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 *puVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_0951699d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951699d = 1;
  }
  fVar6 = (float)UnityEngine_Random__get_insideUnitCircle(0);
  fVar8 = param_2;
  Datpt_Cook_Order_Level_SimpleBBQ_SkewItem__ResetSkewItem(param_4);
  lVar1 = Datpt_Cook_Order_ItemMovingBase__get_TF(param_4,0);
  if (lVar1 != 0) {
    fVar7 = (float)UnityEngine_Transform__get_position(lVar1,0);
    lVar1 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins(0);
    if (lVar1 != 0) {
      param_2 = param_2 + fVar8;
      fVar6 = fVar6 + fVar7;
      param_3 = param_3 + 0.0;
      uVar2 = Datpt_Cook_Order_LevelControlCookOrder__CheckIngredientInSafeArea
                        (fVar6,param_2,param_3,lVar1,0);
      if ((uVar2 & 1) == 0) {
        lVar1 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins(0);
        if (lVar1 == 0) goto LAB_041c1604;
        fVar6 = (float)Datpt_Cook_Order_LevelControlCookOrder__GetNearestPosInSafeArea
                                 (fVar6,param_2,param_3,lVar1,0);
        if (DAT_09515ed5 == '\0') {
          FUN_03f5c2a4(&DAT_091898c0);
          DAT_09515ed5 = '\x01';
        }
        lVar1 = *param_4;
      }
      else {
        if (DAT_09515ed5 == '\0') {
          FUN_03f5c2a4(&DAT_091898c0);
          DAT_09515ed5 = '\x01';
        }
        lVar1 = *param_4;
      }
      puVar4 = *(undefined4 **)(DAT_091898c0 + 0xb8);
      (**(code **)(lVar1 + 0x3c8))
                (fVar6,param_2,param_3,*puVar4,puVar4[1],puVar4[2],puVar4[3],0x3e4ccccd,param_4,
                 *(undefined8 *)(lVar1 + 0x3d0));
      plVar5 = param_4 + 0x1f;
      lVar1 = *plVar5;
      *(undefined1 *)((long)param_4 + 0x111) = 0;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(lVar1,0,0);
      if ((uVar2 & 1) != 0) {
        plVar3 = (long *)*plVar5;
        if (plVar3 == (long *)0x0) goto LAB_041c1604;
        (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
      }
      *plVar5 = 0;
      thunk_FUN_03f5d7b8(plVar5,0);
      return;
    }
  }
LAB_041c1604:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: TrungKien.UI.NewFearther.NewToolLevelPreview$$BuildLevelInitData
// address: 0x4084de8
// body: available
// range: 0x4084de8-0x408512f inclusive
// range: 0x4085230-0x4085233 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4085120 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4085124 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4085128 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408512c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4085230 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long TrungKien_UI_NewFearther_NewToolLevelPreview__BuildLevelInitData
               (long param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  if ((DAT_09515c8e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182250);
    FUN_03f5c2a4(&DAT_09183108);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515c8e = 1;
  }
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_1,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (param_1 == 0) goto LAB_04085230;
  if (param_2 == 0) {
    return 0;
  }
  lVar10 = *(long *)(param_1 + 0x30);
  if (lVar10 == 0) {
    return 0;
  }
  uVar2 = System_String__op_Inequality(param_2,*(undefined8 *)(lVar10 + 0x10),0);
  if (param_3 < 0) {
    return 0;
  }
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(lVar8,0,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (lVar8 == 0) goto LAB_04085230;
  uVar7 = *(undefined8 *)(lVar8 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  lVar3 = TrungKien_UI_NewFearther_NewToolLevelPreview__GetLevelDesign(param_2,param_3);
  uVar2 = System_String__IsNullOrEmpty(lVar3,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if ((lVar3 == 0) || (lVar3 = System_String__Split(lVar3,0x7e,0,0), lVar3 == 0)) goto LAB_04085230;
  if (*(long *)(lVar3 + 0x18) == 0) {
    uVar7 = 0;
LAB_04084fac:
    uVar9 = 0;
  }
  else {
    iVar6 = (int)*(long *)(lVar3 + 0x18);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar7 = *(undefined8 *)(lVar3 + 0x20);
    if (iVar6 < 3) goto LAB_04084fac;
    uVar9 = *(undefined8 *)(lVar3 + 0x30);
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09182250);
  CakeOrder_CakeLevelInitData___ctor(lVar3,0);
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(lVar10 + 0x20);
    *(long *)(lVar3 + 0x10) = param_2;
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x10),param_2);
    uVar5 = *(undefined8 *)(lVar10 + 0x48);
    *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(lVar10 + 0x18);
    *(undefined8 *)(lVar3 + 0x48) = uVar5;
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)(lVar10 + 0x60);
    *(int *)(lVar3 + 0x1c) = param_3;
    thunk_FUN_03f5d7b8();
    uVar5 = *(undefined8 *)(lVar8 + 0x28);
    lVar10 = thunk_FUN_03f9944c(DAT_09183108);
    CakeOrder_InGame_CustomerScheduleBuilder___ctor(lVar10,uVar5,0);
    uVar5 = *(undefined8 *)(lVar8 + 0x20);
    uVar2 = FUN_05a8f088(DAT_091b4b68);
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      lVar8 = FUN_039af8ec(DAT_091b4b60);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetAllCharacterIds(lVar8,0);
    }
    uVar2 = CookingGraph_CustomerOrderTranslator__TryParse(uVar7,uVar5,&local_48,&local_60,uVar4,0);
    if ((uVar2 & 1) != 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar7 = CakeOrder_InGame_CustomerScheduleBuilder__BuildAll(lVar10,lVar3,local_48,0);
      *(undefined8 *)(lVar3 + 0x98) = uVar7;
      thunk_FUN_03f5d7b8();
    }
    uVar2 = CookingGraph_IngredientQueueTranslator__TryParse(uVar9,uVar5,&local_58,&local_60,0);
    if ((uVar2 & 1) != 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar7 = CakeOrder_InGame_CustomerScheduleBuilder__BuildIngredientQueue
                        (lVar10,lVar3,local_58,0);
      *(undefined8 *)(lVar3 + 0xa0) = uVar7;
      thunk_FUN_03f5d7b8();
    }
    return lVar3;
  }
LAB_04085230:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


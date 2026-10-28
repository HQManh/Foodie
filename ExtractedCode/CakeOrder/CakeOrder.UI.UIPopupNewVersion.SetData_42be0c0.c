// rea decompile_all
// name: CakeOrder.UI.UIPopupNewVersion$$SetData
// address: 0x42be0c0
// body: available
// range: 0x42be0c0-0x42be3f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42be3e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42be3ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42be3f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIPopupNewVersion__SetData(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  
  if ((DAT_09517304 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_092185c0);
    FUN_03f5c2a4(&DAT_09226db8);
    FUN_03f5c2a4(&DAT_092185b0);
    FUN_03f5c2a4(&DAT_0921fce8);
    DAT_09517304 = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  *(long *)(param_1 + 0x120) = param_2;
  thunk_FUN_03f5d7b8(param_1 + 0x120,param_2);
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(param_1 + 0xd8) == 0) || (param_2 == 0)) goto LAB_042be3f0;
    lVar5 = *(long *)(*(long *)(param_1 + 0xd8) + 0x20);
    uVar3 = CakeOrder_Home_NewVersionPopupData__get_HasRewards(param_2,0);
    puVar1 = &DAT_092185b0;
    if ((uVar3 & 1) == 0) {
      puVar1 = &DAT_092185c0;
    }
    UnityEngine_Localization_Tables_TableEntryReference__op_Implicit(&local_78,*puVar1,0);
    if (lVar5 == 0) goto LAB_042be3f0;
    puStack_88 = puStack_70;
    local_90 = local_78;
    local_80 = local_68;
    UnityEngine_Localization_LocalizedReference__set_TableEntryReference(lVar5,&local_90,0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar3 & 1) != 0) {
    plVar6 = *(long **)(param_1 + 0xc0);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = CakeOrder_Localization_CakeLocalization__Tr(DAT_0921fce8,0);
    if (plVar6 == (long *)0x0) goto LAB_042be3f0;
    (**(code **)(*plVar6 + 0x558))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x560));
  }
  uVar4 = *(undefined8 *)(param_1 + 200);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar3 & 1) != 0) {
    plVar6 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(plVar6,0);
    if ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) goto LAB_042be3f0;
    FUN_057e185c(&local_78,*(long *)(param_2 + 0x18),DAT_091b05a8);
    puStack_58 = puStack_70;
    local_60 = local_78;
    local_50 = local_68;
    local_78 = 0;
    puStack_70 = &local_60;
    while (uVar3 = FUN_071bd28c(&local_60,DAT_091a45a0), uVar4 = local_50, (uVar3 & 1) != 0) {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar2 = System_Text_StringBuilder__get_Length(plVar6,0);
      if (0 < iVar2) {
        System_Text_StringBuilder__Append(plVar6,10,0);
      }
      lVar5 = System_Text_StringBuilder__Append(plVar6,DAT_09226db8,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Text_StringBuilder__Append(lVar5,uVar4,0);
    }
    FUN_071bd288(&local_60,DAT_091a4598);
    if (plVar6 == (long *)0x0) goto LAB_042be3f0;
    plVar7 = *(long **)(param_1 + 200);
    uVar4 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    if (plVar7 == (long *)0x0) goto LAB_042be3f0;
    (**(code **)(*plVar7 + 0x558))(plVar7,uVar4,*(undefined8 *)(*plVar7 + 0x560));
  }
  if (param_2 != 0) {
    CakeOrder_UI_UIPopupNewVersion__SetRewards(param_1,*(undefined8 *)(param_2 + 0x20));
    return;
  }
LAB_042be3f0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


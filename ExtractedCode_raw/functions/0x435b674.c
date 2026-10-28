// rea decompile_all
// name: CakeOrder.Home.Journey.UIJourneyChapterCard$$SetUp
// address: 0x435b674
// body: available
// range: 0x435b674-0x435b8db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435b8c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435b8cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435b8d8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIJourneyChapterCard__SetUp
               (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_48;
  undefined4 local_44;
  
  if ((DAT_09517806 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0921e730);
    DAT_09517806 = 1;
  }
  uVar8 = param_2[1];
  uVar7 = *param_2;
  uVar5 = param_2[2];
  *(undefined8 *)(param_1 + 0x70) = param_2[3];
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar8;
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  thunk_FUN_03f5d7b8(param_1 + 0x58,0);
  lVar2 = DAT_09188ad0;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x78) = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar1 & 1) != 0) {
    plVar6 = *(long **)(param_1 + 0x30);
    uVar1 = System_String__IsNullOrEmpty(param_3,0);
    if ((uVar1 & 1) != 0) {
      param_3 = *param_2;
    }
    if (plVar6 == (long *)0x0) goto LAB_0435b8c8;
    (**(code **)(*plVar6 + 0x558))(plVar6,param_3,*(undefined8 *)(*plVar6 + 0x560));
  }
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar1 & 1) == 0) {
LAB_0435b8a4:
    CakeOrder_Home_Journey_UIJourneyChapterCard__ApplyPreview(param_1,param_4);
    return;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x38),0), lVar2 != 0)) {
    UnityEngine_GameObject__SetActive(lVar2,1,0);
    plVar4 = *(long **)(param_1 + 0x38);
    plVar6 = (long *)FUN_03f5c394(DAT_09180318,2);
    local_44 = *(undefined4 *)(param_2 + 2);
    lVar2 = FUN_03f5c42c(DAT_09535420,&local_44);
    if (plVar6 != (long *)0x0) {
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0)) {
LAB_0435b8d0:
        uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,0);
      }
      if ((int)plVar6[3] != 0) {
        plVar6[4] = lVar2;
        thunk_FUN_03f5d7b8(plVar6 + 4,lVar2);
        local_48 = *(undefined4 *)((long)param_2 + 0x14);
        lVar2 = FUN_03f5c42c(DAT_09535420,&local_48);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
        goto LAB_0435b8d0;
        if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
          plVar6[5] = lVar2;
          thunk_FUN_03f5d7b8(plVar6 + 5,lVar2);
          if (*(int *)(DAT_09182278 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_0921e730,plVar6,0);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x558))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x560));
            goto LAB_0435b8a4;
          }
          goto LAB_0435b8c8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_0435b8c8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


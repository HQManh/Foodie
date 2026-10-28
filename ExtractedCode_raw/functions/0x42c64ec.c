// rea decompile_all
// name: CakeOrder.UI.UIItemUpgradeBuildingOptionCard$$UpdateStateImmediate
// address: 0x42c64ec
// body: available
// range: 0x42c64ec-0x42c67c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c67a8 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42c67c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIItemUpgradeBuildingOptionCard__UpdateStateImmediate(long param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(long *)(param_1 + 0xe0) != 0) {
    DG_Tweening_TweenExtensions__Kill(*(long *)(param_1 + 0xe0),0,0);
  }
  *(int *)(param_1 + 0x50) = param_2;
  if (param_2 == 2) {
    lVar3 = *(long *)(param_1 + 0x48);
    if ((lVar3 == 0) || (plVar1 = *(long **)(param_1 + 0x80), plVar1 == (long *)0x0))
    goto LAB_042c67c0;
    (**(code **)(*plVar1 + 0x2a8))
              (*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
               *(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),plVar1,
               *(undefined8 *)(*plVar1 + 0x2b0));
    lVar3 = *(long *)(param_1 + 0x48);
    if ((lVar3 == 0) || (plVar1 = *(long **)(param_1 + 0x88), plVar1 == (long *)0x0))
    goto LAB_042c67c0;
    uVar8 = *(undefined4 *)(lVar3 + 0x40);
    uVar9 = *(undefined4 *)(lVar3 + 0x44);
    lVar4 = *plVar1;
    uVar6 = *(undefined4 *)(lVar3 + 0x38);
    uVar7 = *(undefined4 *)(lVar3 + 0x3c);
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 0) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x48);
      if ((lVar3 == 0) || (plVar1 = *(long **)(param_1 + 0x80), plVar1 == (long *)0x0))
      goto LAB_042c67c0;
      (**(code **)(*plVar1 + 0x2a8))
                (*(undefined4 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x2c),
                 *(undefined4 *)(lVar3 + 0x30),*(undefined4 *)(lVar3 + 0x34),plVar1,
                 *(undefined8 *)(*plVar1 + 0x2b0));
      lVar3 = *(long *)(param_1 + 0x48);
      if ((lVar3 == 0) || (plVar1 = *(long **)(param_1 + 0x88), plVar1 == (long *)0x0))
      goto LAB_042c67c0;
      (**(code **)(*plVar1 + 0x2a8))
                (*(undefined4 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x5c),
                 *(undefined4 *)(lVar3 + 0x60),*(undefined4 *)(lVar3 + 100),plVar1,
                 *(undefined8 *)(*plVar1 + 0x2b0));
      lVar3 = *(long *)(param_1 + 0x48);
      if ((lVar3 == 0) || (plVar1 = *(long **)(param_1 + 0x90), plVar1 == (long *)0x0))
      goto LAB_042c67c0;
      uVar7 = *(undefined4 *)(lVar3 + 0x80);
      uVar6 = *(undefined4 *)(lVar3 + 0x84);
      uVar9 = *(undefined4 *)(lVar3 + 0x78);
      uVar8 = *(undefined4 *)(lVar3 + 0x7c);
      plVar5 = *(long **)(param_1 + 0x98);
      (**(code **)(*plVar1 + 0x2a8))
                (uVar9,uVar8,uVar7,uVar6,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
      if (plVar5 == (long *)0x0) goto LAB_042c67c0;
      (**(code **)(*plVar5 + 0x2a8))
                (uVar9,uVar8,uVar7,uVar6,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
      Utilities_GraphicExtension__SetA(0,*(undefined8 *)(param_1 + 0x70),0);
      Utilities_GraphicExtension__SetA(0x3f800000,*(undefined8 *)(param_1 + 0x78),0);
      if ((*(long *)(param_1 + 0x90) == 0) ||
         (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x90),0), lVar3 == 0))
      goto LAB_042c67c0;
      UnityEngine_GameObject__SetActive(lVar3,0,0);
      if ((*(long *)(param_1 + 0x98) == 0) ||
         (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x98),0), lVar3 == 0))
      goto LAB_042c67c0;
      uVar2 = 1;
      goto LAB_042c6794;
    }
    lVar3 = *(long *)(param_1 + 0x48);
    if ((lVar3 == 0) || (plVar1 = *(long **)(param_1 + 0x80), plVar1 == (long *)0x0))
    goto LAB_042c67c0;
    (**(code **)(*plVar1 + 0x2a8))
              (*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
               *(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),plVar1,
               *(undefined8 *)(*plVar1 + 0x2b0));
    lVar3 = *(long *)(param_1 + 0x48);
    if ((lVar3 == 0) || (plVar1 = *(long **)(param_1 + 0x88), plVar1 == (long *)0x0))
    goto LAB_042c67c0;
    uVar8 = *(undefined4 *)(lVar3 + 0x50);
    uVar9 = *(undefined4 *)(lVar3 + 0x54);
    lVar4 = *plVar1;
    uVar6 = *(undefined4 *)(lVar3 + 0x48);
    uVar7 = *(undefined4 *)(lVar3 + 0x4c);
  }
  (**(code **)(lVar4 + 0x2a8))(uVar6,uVar7,uVar8,uVar9,plVar1,*(undefined8 *)(lVar4 + 0x2b0));
  lVar3 = *(long *)(param_1 + 0x48);
  if ((lVar3 != 0) && (plVar1 = *(long **)(param_1 + 0x90), plVar1 != (long *)0x0)) {
    uVar7 = *(undefined4 *)(lVar3 + 0x70);
    uVar6 = *(undefined4 *)(lVar3 + 0x74);
    uVar9 = *(undefined4 *)(lVar3 + 0x68);
    uVar8 = *(undefined4 *)(lVar3 + 0x6c);
    plVar5 = *(long **)(param_1 + 0x98);
    (**(code **)(*plVar1 + 0x2a8))(uVar9,uVar8,uVar7,uVar6,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x2a8))
                (uVar9,uVar8,uVar7,uVar6,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
      Utilities_GraphicExtension__SetA(0,*(undefined8 *)(param_1 + 0x78),0);
      Utilities_GraphicExtension__SetA(0x3f800000,*(undefined8 *)(param_1 + 0x70),0);
      if ((*(long *)(param_1 + 0x90) != 0) &&
         (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x90),0), lVar3 != 0)) {
        UnityEngine_GameObject__SetActive(lVar3,1,0);
        if ((*(long *)(param_1 + 0x98) != 0) &&
           (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x98),0), lVar3 != 0))
        {
          uVar2 = 0;
LAB_042c6794:
          UnityEngine_GameObject__SetActive(lVar3,uVar2,0);
          return;
        }
      }
    }
  }
LAB_042c67c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


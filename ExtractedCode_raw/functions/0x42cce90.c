// rea decompile_all
// name: CakeOrder.BaseUI.UIPopupBlurBackdrop$$DeactivateChildren
// address: 0x42cce90
// body: available
// range: 0x42cce90-0x42ccfff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ccffc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UIPopupBlurBackdrop__DeactivateChildren(long param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  
  if ((DAT_0951737b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091acd50);
    DAT_0951737b = 1;
  }
  if (0 < param_3) {
    if (param_2 == 0) {
LAB_042ccffc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar8 = 0;
    do {
      lVar3 = UnityEngine_Transform__GetChild(param_2,iVar8,0);
      if ((lVar3 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar3,0), lVar4 == 0))
      goto LAB_042ccffc;
      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
      if (((uVar5 & 1) != 0) &&
         (uVar5 = CakeOrder_BaseUI_UIPopupBlurBackdrop__IsKeptActive(param_1,lVar3),
         (uVar5 & 1) == 0)) {
        uVar5 = CakeOrder_BaseUI_UIPopupBlurBackdrop__ContainsKeptActive(param_1,lVar3);
        if ((uVar5 & 1) == 0) {
          lVar4 = UnityEngine_Component__get_gameObject(lVar3,0);
          if (lVar4 == 0) goto LAB_042ccffc;
          UnityEngine_GameObject__SetActive(lVar4,0,0);
          lVar4 = *(long *)(param_1 + 0x118);
          uVar6 = UnityEngine_Component__get_gameObject(lVar3,0);
          lVar3 = DAT_091acd50;
          if (lVar4 == 0) goto LAB_042ccffc;
          lVar7 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_042ccffc;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar4,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          uVar2 = UnityEngine_Transform__get_childCount(lVar3,0);
          CakeOrder_BaseUI_UIPopupBlurBackdrop__DeactivateChildren(param_1,lVar3,uVar2);
        }
      }
      iVar8 = iVar8 + 1;
    } while (param_3 != iVar8);
  }
  return;
}


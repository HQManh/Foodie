// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder$$SetUpBooster
// address: 0x429e724
// body: available
// range: 0x429e724-0x429e9fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429e9d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429e9f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder__SetUpBooster(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long local_58;
  
  if ((DAT_0951721f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a0678);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951721f = 1;
  }
  lVar4 = *(long *)(param_1 + 0x160);
  local_58 = 0;
  if (lVar4 != 0) {
    uVar5 = 0;
    do {
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar5) {
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar4 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
      if (((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) || (param_2 == 0)) break;
      uVar1 = FUN_06fd9fbc(param_2,*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x18),&local_58,
                           DAT_091a0678);
      if ((uVar1 & 1) == 0) {
        *(undefined8 *)(lVar4 + 0x40) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x40),0);
        lVar2 = DAT_09188ad0;
        uVar7 = *(undefined8 *)(lVar4 + 0x18);
        *(undefined1 *)(lVar4 + 0x48) = 0;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar1 & 1) != 0) {
          if ((*(long *)(lVar4 + 0x18) == 0) ||
             (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x18),0), lVar2 == 0))
          break;
          UnityEngine_GameObject__SetActive(lVar2,0,0);
          if ((*(long *)(lVar4 + 0x18) == 0) ||
             (lVar2 = UnityEngine_Component__get_transform(*(long *)(lVar4 + 0x18),0), lVar2 == 0))
          break;
          uVar7 = UnityEngine_Transform__GetParent(lVar2,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar1 = UnityEngine_Object__op_Implicit(uVar7,0);
          if ((uVar1 & 1) != 0) {
            if (((*(long *)(lVar4 + 0x18) == 0) ||
                (lVar4 = UnityEngine_Component__get_transform(*(long *)(lVar4 + 0x18),0), lVar4 == 0
                )) || ((lVar4 = UnityEngine_Transform__GetParent(lVar4,0), lVar4 == 0 ||
                       (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0))))
            break;
            UnityEngine_GameObject__SetActive(lVar4,0,0);
          }
        }
      }
      else {
        plVar6 = (long *)(lVar4 + 0x40);
        *plVar6 = local_58;
        thunk_FUN_03f5d7b8(plVar6);
        uVar7 = *(undefined8 *)(lVar4 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar1 & 1) != 0) {
          if ((*(long *)(lVar4 + 0x18) == 0) ||
             (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x18),0), lVar2 == 0))
          break;
          UnityEngine_GameObject__SetActive(lVar2,1,0);
          if (*(long *)(lVar4 + 0x18) == 0) break;
          CakeOrder_InGame_UIButtonHUDBooster__SetUp
                    (*(long *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x40),
                     *(undefined8 *)(lVar4 + 0x10),0);
          if (*(long *)(lVar4 + 0x18) == 0) break;
          CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(lVar4 + 0x18),0);
          uVar1 = CakeOrder_UI_InGameUITutorialControl__IsDoneTut(2,uVar5,0);
          if (*plVar6 == 0) break;
          if (*(char *)(*plVar6 + 0x20) == '\0') {
            if ((uVar1 & 1) != 0) {
              lVar2 = *(long *)(lVar4 + 0x18);
              *(undefined1 *)(lVar4 + 0x48) = 1;
              if (lVar2 != 0) goto LAB_0429e978;
              break;
            }
            *(undefined1 *)(lVar4 + 0x48) = 0;
            if (*(long *)(lVar4 + 0x18) == 0) break;
            CakeOrder_InGame_UIButtonHUD__Lock(*(long *)(lVar4 + 0x18),0);
          }
          else {
            lVar2 = *(long *)(lVar4 + 0x18);
            *(undefined1 *)(lVar4 + 0x48) = 1;
            if ((uVar1 & 1) == 0) {
              if (lVar2 == 0) break;
              CakeOrder_InGame_UIButtonHUD__Lock(lVar2,0);
              if ((*plVar6 == 0) || (plVar3 = *(long **)(param_1 + 0xc0), plVar3 == (long *)0x0))
              break;
              (**(code **)(*plVar3 + 0x248))
                        (plVar3,*(undefined4 *)(*plVar6 + 0x24),*(undefined8 *)(*plVar3 + 0x250));
            }
            else {
              if (lVar2 == 0) break;
LAB_0429e978:
              CakeOrder_InGame_UIButtonHUD__Unlock(lVar2,0);
            }
          }
        }
      }
      lVar4 = *(long *)(param_1 + 0x160);
      uVar5 = uVar5 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


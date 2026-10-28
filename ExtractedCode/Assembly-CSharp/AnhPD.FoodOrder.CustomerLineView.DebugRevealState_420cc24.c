// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView$$DebugRevealState
// address: 0x420cc24
// body: available
// range: 0x420cc24-0x420ce73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420ce38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineView__DebugRevealState(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined1 local_44 [4];
  undefined4 local_38;
  byte local_34 [4];
  
  if ((DAT_09516c44 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aec50);
    FUN_03f5c2a4(&DAT_091aec58);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_09221ae0);
    FUN_03f5c2a4(&DAT_09225578);
    DAT_09516c44 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(lVar1,0);
  lVar2 = UnityEngine_Component__get_gameObject(param_1,0);
  if (lVar2 != 0) {
    local_34[0] = UnityEngine_GameObject__get_activeInHierarchy(lVar2,0);
    local_34[0] = local_34[0] & 1;
    uVar3 = FUN_03f5c42c(DAT_09535400,local_34);
    local_38 = *(undefined4 *)(param_1 + 0x100);
    uVar4 = FUN_03f5c42c(DAT_09535450,&local_38);
    uVar3 = System_String__Format(DAT_09225578,uVar3,uVar4,0);
    local_44[0] = *(long *)(param_1 + 0xf8) != 0;
    uVar4 = FUN_03f5c42c(DAT_09535400,local_44);
    uVar4 = System_String__Format(DAT_09221ae0,uVar4,0);
    uVar3 = System_String__Concat(uVar3,uVar4,0);
    if (lVar1 != 0) {
      System_Text_StringBuilder__Append(lVar1,uVar3,0);
      lVar2 = *(long *)(param_1 + 0x30);
      if (lVar2 != 0) {
        iVar8 = 0;
        while (iVar8 < *(int *)(lVar2 + 0x18)) {
          lVar2 = FUN_057e0998(lVar2,iVar8,DAT_091aec58);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar5 = UnityEngine_Object__op_Implicit(lVar2,0);
          if ((uVar5 & 1) != 0) {
            if ((lVar2 == 0) || (lVar6 = UnityEngine_Component__get_gameObject(lVar2,0), lVar6 == 0)
               ) goto LAB_0420ce38;
            uVar5 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
            if (((uVar5 & 1) != 0) &&
               (uVar5 = AnhPD_FoodOrder_OrderBoard__get_IsLoadingOrder(lVar2,0), (uVar5 & 1) != 0))
            {
              lVar2 = System_Text_StringBuilder__Append(lVar1,iVar8,0);
              if (lVar2 == 0) goto LAB_0420ce38;
              System_Text_StringBuilder__Append(lVar2,0x20,0);
            }
          }
          lVar2 = *(long *)(param_1 + 0x30);
          iVar8 = iVar8 + 1;
          if (lVar2 == 0) goto LAB_0420ce38;
        }
        plVar7 = (long *)System_Text_StringBuilder__Append(lVar1,0x5d,0);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          return;
        }
      }
    }
  }
LAB_0420ce38:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


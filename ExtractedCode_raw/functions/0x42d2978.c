// rea decompile_all
// name: CakeOrder.BaseUI.SceneMainUI$$OnDestroy
// address: 0x42d2978
// body: available
// range: 0x42d2978-0x42d2d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d2d38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d2d3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_SceneMainUI__OnDestroy(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_095173af & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091bf690);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_0919c398);
    FUN_03f5c2a4(&DAT_0919c3a8);
    FUN_03f5c2a4(&DAT_091a5c48);
    FUN_03f5c2a4(&DAT_091a5c50);
    FUN_03f5c2a4(&DAT_091a5c58);
    FUN_03f5c2a4(&DAT_091b4cf0);
    FUN_03f5c2a4(&DAT_091b48b0);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b48b8);
    FUN_03f5c2a4(&DAT_091b48d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d8600);
    FUN_03f5c2a4(&DAT_091d8608);
    FUN_03f5c2a4(&DAT_091be8e0);
    DAT_095173af = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  FUN_05a8f270(param_1,DAT_091b4cf0);
  if ((*(char *)(param_1 + 0x62) != '\0') && (uVar1 = FUN_05a8eda4(DAT_091b48d8), (uVar1 & 1) != 0))
  {
    lVar2 = *(long *)(DAT_091b48d0 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_042d2d3c;
    CakeOrder_AudioManagerCakeOrder__SetGameplaySfxMuted(**(long **)(lVar2 + 0xb8),0,0,0);
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar2 = FUN_06fd8278(*(long *)(param_1 + 0x30),DAT_0919c3a8), lVar2 != 0)) {
    FUN_06544014(&local_80,lVar2,DAT_091be8e0);
    local_90 = local_70;
    uStack_98 = uStack_78;
    local_a0 = local_80;
    while (uVar1 = FUN_072759a8(&local_a0,DAT_091a5c50), lVar2 = local_90, (uVar1 & 1) != 0) {
      if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = FUN_0640f598(local_90 + 0x10,DAT_091977b8);
      if ((uVar1 & 1) != 0) {
        uVar4 = *(undefined8 *)(lVar2 + 0x18);
        uVar3 = *(undefined8 *)(lVar2 + 0x10);
        lVar2 = *(long *)(lVar2 + 0x20);
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_80 = uVar3;
        uStack_78 = uVar4;
        local_70 = lVar2;
        FUN_04b71ee0(&local_80,DAT_091bf690);
      }
    }
    FUN_072759a4(&local_a0,DAT_091a5c48);
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_06fd85dc(*(long *)(param_1 + 0x30),DAT_0919c398);
      uVar1 = FUN_05a8eda4(DAT_091b48b8);
      if ((uVar1 & 1) != 0) {
        lVar2 = *(long *)(DAT_091b48b0 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c();
        }
        lVar2 = **(long **)(lVar2 + 0xb8);
        uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar3,param_1,DAT_091d8608,0);
        if (lVar2 == 0) goto LAB_042d2d3c;
        IapAdsSystem_AdsManager__remove_onCampaignProfileChanged(lVar2,uVar3,0);
      }
      if (*(char *)(param_1 + 0x78) != '\0') {
        uVar3 = *(undefined8 *)(param_1 + 0x68);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar1 & 1) != 0) {
          lVar2 = *(long *)(param_1 + 0x68);
          uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar3,param_1,DAT_091d8600,0);
          if (lVar2 == 0) goto LAB_042d2d3c;
          CakeOrder_BaseUI_UIPopupBlurBackdrop__remove_onTap(lVar2,uVar3);
        }
      }
      return;
    }
  }
LAB_042d2d3c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


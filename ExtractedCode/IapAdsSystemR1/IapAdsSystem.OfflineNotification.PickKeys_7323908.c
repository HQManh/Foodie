// rea decompile_all
// name: IapAdsSystem.OfflineNotification$$PickKeys
// address: 0x7323908
// body: available
// range: 0x7323908-0x7323ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7323ad0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7323ad4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long IapAdsSystem_OfflineNotification__PickKeys(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  
  if ((DAT_095205c3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adce8);
    FUN_03f5c2a4(&DAT_091adc80);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_0917c520);
    DAT_095205c3 = 1;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796990(lVar5,0x15,DAT_091adc80);
  if (lVar5 != 0) {
    iVar8 = 1;
    lVar6 = DAT_091adc88;
    do {
      lVar7 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_07323ad0;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(int *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = iVar8;
      }
      else {
        FUN_057971a8(lVar5,iVar8,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar6 = DAT_091adc88;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x16);
    lVar6 = FUN_03f5c394(DAT_091801b8,param_1);
    if (0 < (int)param_1) {
      uVar9 = 0;
      do {
        uVar3 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar5 + 0x18),0);
        uVar4 = FUN_05796eb0(lVar5,uVar3,DAT_091add20);
        uVar2 = DAT_091adce8;
        if (lVar6 == 0) goto LAB_07323ad0;
        if (*(uint *)(lVar6 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined4 *)(lVar6 + 0x20 + uVar9 * 4) = uVar4;
        FUN_05798a08(lVar5,uVar3,uVar2);
        uVar9 = uVar9 + 1;
      } while (param_1 != uVar9);
    }
    return lVar6;
  }
LAB_07323ad0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


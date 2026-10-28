// rea decompile_all
// name: CakeOrder.UI.UIHeartCounter$$Awake
// address: 0x42b937c
// body: available
// range: 0x42b937c-0x42b9653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b964c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b9650 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIHeartCounter__Awake(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_48;
  
  if ((DAT_095172e1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091cdc40);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_091b4978);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09191518);
    FUN_03f5c2a4(&DAT_091dc9c8);
    FUN_03f5c2a4(&DAT_091dc9d0);
    FUN_03f5c2a4(&DAT_091dc9c0);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_095172e1 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  local_48 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_042b9650;
    lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 0x100);
    uVar3 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar3,param_1,DAT_091dc9c0,0);
    if (lVar4 == 0) goto LAB_042b9650;
    UnityEngine_Events_UnityEvent__AddListener(lVar4,uVar3,0);
  }
  uVar1 = FUN_05a8eda4(DAT_091b4978);
  if ((uVar1 & 1) != 0) {
    lVar4 = *(long *)(DAT_091b4970 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = **(long **)(lVar4 + 0xb8);
    uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar3,param_1,DAT_091dc9d0,0);
    if (lVar4 != 0) {
      CakeOrder_HeartSystem_HeartSystemController__add_onUnlimitedHeartActivated(lVar4,uVar3,0);
      lVar4 = *(long *)(DAT_091b4970 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = **(long **)(lVar4 + 0xb8);
      uVar3 = thunk_FUN_03f9944c(DAT_09191518);
      CakeOrder_DataSO_IItemCurrencyHoldingSource_OnAmountChangedDelegate___ctor
                (uVar3,param_1,DAT_091dc9c8,0);
      if (lVar4 != 0) {
        CakeOrder_HeartSystem_HeartSystemController__add_onAmountChanged(lVar4,uVar3,0);
        goto LAB_042b95a8;
      }
    }
LAB_042b9650:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_042b95a8:
  lVar4 = *(long *)(param_1 + 0x80);
  if ((lVar4 != 0) && (0 < (int)*(ulong *)(lVar4 + 0x18))) {
    uVar1 = 0;
    uVar2 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
    do {
      if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar5 = *(long *)(lVar4 + 0x20 + uVar1 * 8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(lVar5,0,0);
      if ((uVar2 & 1) != 0) {
        if (lVar5 == 0) goto LAB_042b9650;
        uVar2 = FUN_04b7d49c(lVar5,&local_48,DAT_091cdc40);
        if ((uVar2 & 1) != 0) {
          CakeOrder_UI_UIHeartCounter__AddHeartSource(param_1,local_48);
        }
      }
      uVar2 = (ulong)*(uint *)(lVar4 + 0x18);
      uVar1 = uVar1 + 1;
    } while ((long)uVar1 < (long)(int)*(uint *)(lVar4 + 0x18));
  }
  return;
}


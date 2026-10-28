// rea decompile_all
// name: CakeOrder.Shop.UICookOrderShop$$SetColumnLayoutFrozen
// address: 0x4364268
// body: available
// range: 0x4364268-0x436441f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4364348 to 0x4364488 CakeOrder.Shop.UICookOrderShop$$<SetColumnLayoutFrozen>g__FreezeLayoutsOn|57_0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4364418 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436441c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UICookOrderShop__SetColumnLayoutFrozen(long param_1,ulong param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong extraout_x1;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  uVar3 = param_2;
  if ((DAT_09517863 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2290);
    FUN_03f5c2a4(&DAT_091a2298);
    FUN_03f5c2a4(&DAT_091a22a0);
    FUN_03f5c2a4(&DAT_091ab3a8);
    FUN_03f5c2a4(&DAT_091ab3b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517863 = 1;
    uVar3 = extraout_x1;
  }
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  if ((param_2 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x138);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
    uVar5 = 0;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar3;
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x138) == 0) goto LAB_0436441c;
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x138) + 0x20);
    }
    CakeOrder_Shop_UICookOrderShop__<SetColumnLayoutFrozen>g__FreezeLayoutsOn_57_0(param_1,uVar5);
    CakeOrder_Shop_UICookOrderShop__<SetColumnLayoutFrozen>g__FreezeLayoutsOn_57_0
              (param_1,*(undefined8 *)(param_1 + 0x100));
    return;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  auVar6 = auVar2 << 0x40;
  if (*(long *)(param_1 + 0x1c8) != 0) {
    FUN_057e185c(&local_48,*(long *)(param_1 + 0x1c8),DAT_091ab3b8);
    while (uVar3 = FUN_071bd28c(&local_48,DAT_091a2298), lVar4 = local_38, (uVar3 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
      if ((uVar3 & 1) != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Behaviour__set_enabled(lVar4,1,0);
      }
    }
    auVar6 = FUN_071bd288(&local_48,DAT_091a2290);
    lVar4 = *(long *)(param_1 + 0x1c8);
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
LAB_0436441c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar6._0_8_,auVar6._8_8_);
}


// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIPopup7DayLogin$$OnReceiveReward
// address: 0x42f004c
// body: available
// range: 0x42f004c-0x42f039f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42f02e4 to 0x44f6690 Utilities.AsyncExtension$$RunWithLogException (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42f0394 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f0398 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f039c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIPopup7DayLogin__OnReceiveReward
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  long lStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  long lStack_68;
  ulong local_60;
  
  if ((DAT_095174a8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091a5a98);
    FUN_03f5c2a4(&DAT_091a5aa0);
    FUN_03f5c2a4(&DAT_091a5aa8);
    FUN_03f5c2a4(&DAT_091b3f78);
    FUN_03f5c2a4(&DAT_091b3f80);
    FUN_03f5c2a4(&DAT_091b3f68);
    FUN_03f5c2a4(&DAT_091b3f88);
    FUN_03f5c2a4(&DAT_0917d858);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dceb8);
    DAT_095174a8 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x108);
  local_60 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  lStack_68 = 0;
  local_70 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917d858);
  FUN_059cf5a0(lVar3,uVar7,DAT_091b3f68);
  lVar6 = *(long *)(param_1 + 0x108);
  if (lVar6 != 0) {
    iVar2 = *(int *)(lVar6 + 0x18);
    lVar8 = *(long *)(param_1 + 0x110);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar2) {
      System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar2,0);
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
    thunk_FUN_03f5d7b8(param_1 + 0x110,0);
    if (*(char *)(param_1 + 0xdc) != '\0') {
      if (lVar3 == 0) goto LAB_042f039c;
      if (0 < *(int *)(lVar3 + 0x18)) {
        FUN_059d0bc8(&local_a8,lVar3,DAT_091b3f80);
        puStack_78 = puStack_a0;
        local_80 = local_a8;
        lStack_68 = lStack_90;
        local_70 = local_98;
        local_60 = local_88;
        local_a8 = 0;
        puStack_a0 = &local_80;
        while (uVar4 = FUN_072362f8(&local_80,DAT_091a5aa0), uVar5 = local_60, lVar3 = lStack_68,
              uVar7 = local_70, (uVar4 & 1) != 0) {
          iVar2 = *(int *)(param_1 + 0xd8);
          if (iVar2 < 2) {
            iVar2 = 1;
          }
          iVar1 = (int)local_60;
          if (iVar2 <= (int)local_60) {
            iVar1 = iVar2;
          }
          iVar2 = iVar1;
          if ((int)local_60 < 1) {
            iVar2 = 1;
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(iVar1);
          }
          uVar4 = UnityEngine_Object__op_Inequality(lVar8,0,0);
          if ((uVar4 & 1) == 0) {
            uVar7 = 0;
          }
          else {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar7 = CakeOrder_LiveOpsImplement_UIItemLoginDayReward__GetRewardFlyStartPoint
                              (lVar8,uVar7);
          }
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          Utilities_UIImageFlyToCounter__ShowCurrencyFly(0,lVar3,uVar5 & 0xffffffff,iVar2,uVar7,0,0)
          ;
        }
        FUN_072362f4(&local_80,DAT_091a5a98);
        uVar7 = *(undefined8 *)(param_1 + 0xe0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar5 & 1) != 0) {
          lVar3 = *(long *)(DAT_091b48d0 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_042f039c;
          CakeOrder_AudioManagerCakeOrder__PlaySfx
                    (0x3f800000,**(long **)(lVar3 + 0xb8),*(undefined8 *)(param_1 + 0xe0),3,0);
        }
        return;
      }
    }
    lVar3 = *(long *)(param_1 + 0xb0);
    uVar7 = thunk_FUN_03f9944c(DAT_09174a48);
    FUN_070a8c30(uVar7,param_1,DAT_091dceb8,0);
    if (lVar3 != 0) {
      uVar7 = CakeOrder_BaseUI_SceneMainUI__ShowPopupRewards(lVar3,param_3,uVar7,0,0);
      Utilities_AsyncExtension__RunWithLogException(uVar7,0);
      return;
    }
  }
LAB_042f039c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CakeOrder.InGame.CustomerScheduleBuilder$$BuildSlotStatuses
// address: 0x428b7e4
// body: available
// range: 0x428b7e4-0x428bbfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428bbf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428bbf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428bbf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CustomerScheduleBuilder__BuildSlotStatuses
               (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int local_9c;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_09517170 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a2b40);
    FUN_03f5c2a4(&DAT_091a2b48);
    FUN_03f5c2a4(&DAT_091a2b50);
    FUN_03f5c2a4(&DAT_09171ea8);
    FUN_03f5c2a4(&DAT_09186c38);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091ac858);
    FUN_03f5c2a4(&DAT_091add08);
    FUN_03f5c2a4(&DAT_091adc80);
    FUN_03f5c2a4(&DAT_091ac860);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_09214008);
    DAT_09517170 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  *param_4 = 0;
  thunk_FUN_03f5d7b8(param_4,0);
  if ((param_2 != 0) && (iVar1 = *(int *)(param_2 + 0x18), iVar1 != 0)) {
    lVar4 = thunk_FUN_03f9944c(DAT_0917c520);
    FUN_05796990(lVar4,iVar1,DAT_091adc80);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    lVar5 = thunk_FUN_03f9944c(DAT_0917c520);
    FUN_05796990(lVar5,uVar3,DAT_091adc80);
    FUN_057e185c(&local_98,param_2,DAT_091ac858);
    uStack_78 = puStack_90;
    local_80 = local_98;
    local_70 = local_88;
    puStack_90 = &local_80;
    local_98 = 0;
LAB_0428b9ac:
    uVar6 = FUN_071bd28c(&local_80,DAT_091a2b48);
    lVar9 = local_70;
    uVar7 = DAT_09171ea8;
    if ((uVar6 & 1) != 0) {
      if ((local_70 != 0) && (iVar1 = *(int *)(local_70 + 0x10), iVar1 != 0)) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = System_Type__GetTypeFromHandle(uVar7,0);
        local_9c = iVar1;
        uVar8 = FUN_03f5c42c(DAT_09186c38,&local_9c);
        if (*(int *)(DAT_09535470 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_Enum__IsDefined(uVar7,uVar8,0);
        lVar11 = DAT_091adc88;
        iVar1 = *(int *)(lVar9 + 0x10);
        if ((uVar6 & 1) != 0) {
          if (lVar4 != 0) {
            lVar10 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar2 = *(uint *)(lVar4 + 0x18);
              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                *(int *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = iVar1;
              }
              else {
                FUN_057971a8(lVar4,iVar1,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              lVar9 = *(long *)(lVar9 + 0x18);
              if ((lVar9 == 0) || (*(int *)(lVar9 + 0x18) < 1)) {
                uVar3 = 0xffffffff;
              }
              else {
                uVar3 = FUN_05796eb0(lVar9,0,DAT_091add20);
              }
              lVar9 = DAT_091adc88;
              if (lVar5 != 0) {
                lVar11 = *(long *)(lVar5 + 0x10);
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar11 != 0) {
                  uVar2 = *(uint *)(lVar5 + 0x18);
                  if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                    *(undefined4 *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = uVar3;
                  }
                  else {
                    FUN_057971a8(lVar5,uVar3,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  goto LAB_0428b9ac;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_9c = iVar1;
        uVar7 = FUN_03f5c42c(DAT_09535420,&local_9c);
        uVar7 = System_String__Format(DAT_09214008,uVar7,0);
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogWarning(uVar7,uVar8,0);
      }
      goto LAB_0428b9ac;
    }
    FUN_071bd288(&local_80,DAT_091a2b40);
    if (lVar4 == 0) {
LAB_0428bbf8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar4 + 0x18) != 0) {
      uVar7 = FUN_05798d44(lVar4,DAT_091add08);
      *param_3 = uVar7;
      thunk_FUN_03f5d7b8(param_3,uVar7);
      if (lVar5 == 0) goto LAB_0428bbf8;
      uVar7 = FUN_05798d44(lVar5,DAT_091add08);
      *param_4 = uVar7;
      thunk_FUN_03f5d7b8(param_4,uVar7);
    }
  }
  return;
}


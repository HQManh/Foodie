// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIPopupDailyRewards$$ClaimOnline
// address: 0x42e9e50
// body: available
// range: 0x42e9e50-0x42ea0f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ea0ec to 0x42ea100 CakeOrder.LiveOpsImplement.UIPopupDailyRewards.<>c__DisplayClass23_0$$<ClaimOnline>g__TakeReward|0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42ea0f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ea0f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIPopupDailyRewards__ClaimOnline(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined4 local_44;
  
  if ((DAT_09517472 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09180fe8);
    FUN_03f5c2a4(&DAT_091f1828);
    FUN_03f5c2a4(&DAT_091957b0);
    FUN_03f5c2a4(&DAT_0921a130);
    FUN_03f5c2a4(&DAT_0921a128);
    DAT_09517472 = 1;
  }
  local_44 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_091957b0);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_1);
    plVar7 = (long *)(lVar2 + 0x18);
    *plVar7 = param_2;
    thunk_FUN_03f5d7b8(plVar7,param_2);
    if (*plVar7 != 0) {
      if (*(int *)(*plVar7 + 0x90) < 1) {
        CakeOrder_LiveOpsImplement_UIPopupDailyRewards_<>c__DisplayClass23_0__<ClaimOnline>g__TakeReward_0
                  (lVar2);
        return;
      }
      plVar6 = *(long **)(param_1 + 0xb0);
      lVar3 = thunk_FUN_03f9944c(DAT_09180fe8);
      IapAdsSystem_AdsRuntimeData___ctor(lVar3,0);
      if (lVar3 != 0) {
        lVar5 = *plVar7;
        *(undefined4 *)(lVar3 + 0x28) = 8;
        if (lVar5 != 0) {
          local_44 = *(undefined4 *)(lVar5 + 0x90);
          uVar4 = System_Int32__ToString(&local_44,0);
          *(undefined8 *)(lVar3 + 0x10) = uVar4;
          thunk_FUN_03f5d7b8();
          if (*plVar7 != 0) {
            local_44 = *(undefined4 *)(*plVar7 + 0x90);
            uVar4 = System_Int32__ToString(&local_44,0);
            uVar4 = System_String__Concat(DAT_0921a130,uVar4,0);
            *(undefined8 *)(lVar3 + 0x30) = uVar4;
            thunk_FUN_03f5d7b8();
            *(undefined8 *)(lVar3 + 0x38) = DAT_0921a128;
            thunk_FUN_03f5d7b8();
            if ((((*(long *)(param_1 + 0xc0) != 0) &&
                 (lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x40), lVar5 != 0)) &&
                (*plVar7 != 0)) && (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) {
              uVar1 = *(uint *)(*plVar7 + 0x90);
              if (*(uint *)(lVar5 + 0x18) <= uVar1) {
LAB_042ea0f4:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar5 = *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
              if (lVar5 != 0) {
                *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(lVar5 + 0x10);
                thunk_FUN_03f5d7b8();
                uVar4 = DAT_09180e78;
                if (((*(long *)(param_1 + 0xc0) != 0) &&
                    (lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x40), lVar5 != 0)) &&
                   ((*plVar7 != 0 && (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)))) {
                  uVar1 = *(uint *)(*plVar7 + 0x90);
                  if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_042ea0f4;
                  lVar5 = *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                  if (lVar5 != 0) {
                    *(undefined4 *)(lVar3 + 0x48) = *(undefined4 *)(lVar5 + 0x18);
                    uVar4 = thunk_FUN_03f9944c(uVar4);
                    System_Action___ctor(uVar4,lVar2,DAT_091f1828,0);
                    if (plVar6 != (long *)0x0) {
                      (**(code **)(*plVar6 + 0x238))
                                (plVar6,lVar3,uVar4,0,*(undefined8 *)(*plVar6 + 0x240));
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


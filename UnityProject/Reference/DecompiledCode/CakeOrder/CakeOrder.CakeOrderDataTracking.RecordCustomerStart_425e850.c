// rea decompile_all
// name: CakeOrder.CakeOrderDataTracking$$RecordCustomerStart
// address: 0x425e850
// body: available
// range: 0x425e850-0x425eb87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425eb74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425eb78 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425eb84 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderDataTracking__RecordCustomerStart(undefined4 param_1,undefined4 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_34;
  
  local_34 = param_2;
  if ((DAT_09516f63 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_0918ea90);
    FUN_03f5c2a4(&DAT_0919dfb8);
    FUN_03f5c2a4(&DAT_0919dfc8);
    FUN_03f5c2a4(&DAT_091b4928);
    FUN_03f5c2a4(&DAT_091b4930);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_0921a070);
    FUN_03f5c2a4(&DAT_0921a078);
    FUN_03f5c2a4(&DAT_0921e6b0);
    DAT_09516f63 = 1;
  }
  uVar1 = FUN_05a8eda4(DAT_091b4930);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
  if (lVar4 == 0) {
    return;
  }
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar4 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_0425eb74;
  }
  if (*(char *)(lVar4 + 0x4c) != '\0') {
    return;
  }
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar4 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_0425eb74;
  }
  if (*(long *)(lVar4 + 0x40) != 0) {
    uVar1 = FUN_06ef0700(*(long *)(lVar4 + 0x40),param_2,DAT_0919dfb8);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (*(int *)(DAT_09182280 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x40);
      lVar4 = thunk_FUN_03f9944c(DAT_0918ea90);
      System_Object___ctor(lVar4,0);
      if ((lVar4 != 0) && (*(undefined4 *)(lVar4 + 0x10) = param_1, lVar5 != 0)) {
        FUN_06ef04f8(lVar5,param_2,lVar4,DAT_0919dfc8);
        lVar4 = *(long *)(DAT_091b4928 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar5 = **(long **)(lVar4 + 0xb8);
        plVar2 = (long *)FUN_03f5c394(DAT_09180358,2);
        lVar4 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
        if (lVar4 != 0) {
          uVar6 = *(undefined8 *)(lVar4 + 0x18);
          lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
          Firebase_Analytics_Parameter___ctor(lVar4,DAT_0921e6b0,uVar6,0);
          if (plVar2 != (long *)0x0) {
            if ((lVar4 != 0) &&
               (lVar3 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_0425eb7c:
              uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar6,0);
            }
            if ((int)plVar2[3] != 0) {
              plVar2[4] = lVar4;
              thunk_FUN_03f5d7b8(plVar2 + 4,lVar4);
              uVar6 = System_Int32__ToString(&local_34,0);
              lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
              Firebase_Analytics_Parameter___ctor(lVar4,DAT_0921a078,uVar6,0);
              if ((lVar4 != 0) &&
                 (lVar3 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
              goto LAB_0425eb7c;
              if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
                plVar2[5] = lVar4;
                thunk_FUN_03f5d7b8(plVar2 + 5,lVar4);
                if (lVar5 != 0) {
                  IapAdsSystem_DataTrackingManager__LogEvent(lVar5,DAT_0921a070,plVar2,0);
                  return;
                }
                goto LAB_0425eb74;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
        }
      }
    }
  }
LAB_0425eb74:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


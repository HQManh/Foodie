// rea decompile_all
// name: CakeOrder.CakeOrderDataTracking$$TrackReviveOffer
// address: 0x425f0ac
// body: available
// range: 0x425f0ac-0x425f54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425f538 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425f53c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425f548 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderDataTracking__TrackReviveOffer
               (undefined4 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  if ((DAT_09516f66 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_091b4928);
    FUN_03f5c2a4(&DAT_091b4930);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_0918a5c0);
    FUN_03f5c2a4(&DAT_0921ec18);
    FUN_03f5c2a4(&DAT_0921c978);
    FUN_03f5c2a4(&DAT_09221a28);
    FUN_03f5c2a4(&DAT_09224f00);
    FUN_03f5c2a4(&DAT_09221a78);
    FUN_03f5c2a4(&DAT_09217270);
    FUN_03f5c2a4(&DAT_09221b80);
    FUN_03f5c2a4(&DAT_0921be80);
    FUN_03f5c2a4(&DAT_0920b3b0);
    FUN_03f5c2a4(&DAT_09221b00);
    FUN_03f5c2a4(&DAT_0921e6b0);
    DAT_09516f66 = 1;
  }
  uVar2 = FUN_05a8eda4(DAT_091b4930);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(long *)(*(long *)(DAT_09182280 + 0xb8) + 8) == 0) {
    return;
  }
  lVar3 = *(long *)(DAT_091b4928 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182280);
  }
  lVar5 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
  if (lVar5 == 0) goto LAB_0425f538;
  uVar8 = *(undefined8 *)(lVar5 + 0x18);
  lVar5 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(lVar5,DAT_0921e6b0,uVar8,0);
  lVar6 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) goto LAB_0425f538;
  iVar1 = *(int *)(lVar6 + 0x38);
  lVar6 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(lVar6,DAT_09221a78,(long)iVar1,0);
  uVar2 = System_String__op_Equality(param_2,DAT_09221b80,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = System_String__op_Equality(param_2,DAT_0921c978,0);
    if ((uVar2 & 1) != 0) {
      plVar7 = &DAT_0921be80;
      goto LAB_0425f30c;
    }
    lVar9 = DAT_09224f00;
    if (param_2 != 0) {
      lVar9 = param_2;
    }
  }
  else {
    plVar7 = &DAT_09217270;
LAB_0425f30c:
    lVar9 = *plVar7;
  }
  plVar7 = (long *)FUN_03f5c394(DAT_09180358,5);
  if (plVar7 == (long *)0x0) {
LAB_0425f538:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar5 != 0) &&
     (lVar4 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
LAB_0425f540:
    uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,0);
  }
  if ((int)plVar7[3] != 0) {
    plVar7[4] = lVar5;
    thunk_FUN_03f5d7b8(plVar7 + 4,lVar5);
    if ((lVar6 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
    goto LAB_0425f540;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
      plVar7[5] = lVar6;
      thunk_FUN_03f5d7b8(plVar7 + 5,lVar6);
      lVar5 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(lVar5,DAT_09221a28,lVar9,0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
      goto LAB_0425f540;
      if (2 < *(uint *)(plVar7 + 3)) {
        plVar7[6] = lVar5;
        thunk_FUN_03f5d7b8(plVar7 + 6,lVar5);
        if (*(int *)(DAT_09182280 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = CakeOrder_CakeOrderDataTracking__LoseTypeOf(param_3);
        lVar5 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor(lVar5,DAT_0921ec18,uVar8,0);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
        goto LAB_0425f540;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
          plVar7[7] = lVar5;
          thunk_FUN_03f5d7b8(plVar7 + 7,lVar5);
          local_68 = DAT_0918a5c0;
          uStack_60 = 0xffffffffffffffff;
          local_58 = param_1;
          uVar8 = System_Enum__ToString(&local_68,0);
          lVar5 = thunk_FUN_03f9944c(DAT_09188e48);
          Firebase_Analytics_Parameter___ctor(lVar5,DAT_09221b00,uVar8,0);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
          goto LAB_0425f540;
          if (4 < *(uint *)(plVar7 + 3)) {
            plVar7[8] = lVar5;
            thunk_FUN_03f5d7b8(plVar7 + 8,lVar5);
            if (lVar3 != 0) {
              IapAdsSystem_DataTrackingManager__LogEvent(lVar3,DAT_0920b3b0,plVar7,0);
              return;
            }
            goto LAB_0425f538;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}


// rea decompile_all
// name: CakeOrder.CakeOrderDataTracking$$FlushDishServeSequence
// address: 0x4260c98
// body: available
// range: 0x4260c98-0x4261113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4261100 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4261104 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4261110 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderDataTracking__FlushDishServeSequence(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_09516f72 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_091b2220);
    FUN_03f5c2a4(&DAT_091b2228);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_09217b80);
    FUN_03f5c2a4(&DAT_092222d8);
    FUN_03f5c2a4(&DAT_0921e6b0);
    FUN_03f5c2a4(&DAT_0921a4c8);
    FUN_03f5c2a4(&DAT_0921a060);
    FUN_03f5c2a4(&DAT_0921e700);
    FUN_03f5c2a4(&DAT_0921a830);
    FUN_03f5c2a4(&DAT_09222338);
    DAT_09516f72 = 1;
  }
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x38) != 0)) {
    uVar1 = *(uint *)(*(long *)(lVar5 + 0x38) + 0x18);
    if (0 < (int)uVar1) {
      fVar10 = 0.0;
      lVar5 = *(long *)(lVar5 + 0x10);
      uVar8 = 0;
      do {
        if (*(int *)(DAT_09182280 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x38), lVar6 == 0)) goto LAB_04261100;
        lVar6 = FUN_057e0998(lVar6,uVar8 & 0xffffffff,DAT_091b2228);
        plVar3 = (long *)FUN_03f5c394(DAT_09180358,7);
        lVar7 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
        if (lVar7 == 0) goto LAB_04261100;
        uVar9 = *(undefined8 *)(lVar7 + 0x18);
        lVar7 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor(lVar7,DAT_0921e6b0,uVar9,0);
        if (plVar3 == (long *)0x0) goto LAB_04261100;
        if ((lVar7 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_04261108:
          uVar9 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar9,0);
        }
        if ((int)plVar3[3] == 0) {
LAB_04261104:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar3[4] = lVar7;
        thunk_FUN_03f5d7b8(plVar3 + 4,lVar7);
        lVar7 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor(lVar7,DAT_092222d8,uVar8,0);
        if ((lVar7 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_04261108;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_04261104;
        plVar3[5] = lVar7;
        thunk_FUN_03f5d7b8(plVar3 + 5,lVar7);
        if (lVar6 == 0) goto LAB_04261100;
        fVar11 = *(float *)(lVar6 + 0x10);
        lVar7 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor((double)fVar11,lVar7,DAT_09222338,0);
        if ((lVar7 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_04261108;
        if (*(uint *)(plVar3 + 3) < 3) goto LAB_04261104;
        plVar3[6] = lVar7;
        thunk_FUN_03f5d7b8(plVar3 + 6,lVar7);
        fVar11 = *(float *)(lVar6 + 0x10);
        lVar7 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor((double)(fVar11 - fVar10),lVar7,DAT_0921a4c8,0);
        if ((lVar7 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_04261108;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 0) goto LAB_04261104;
        plVar3[7] = lVar7;
        thunk_FUN_03f5d7b8(plVar3 + 7,lVar7);
        iVar2 = *(int *)(lVar6 + 0x14);
        lVar7 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor(lVar7,DAT_0921a060,(long)iVar2,0);
        if ((lVar7 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_04261108;
        if (*(uint *)(plVar3 + 3) < 5) goto LAB_04261104;
        plVar3[8] = lVar7;
        thunk_FUN_03f5d7b8(plVar3 + 8,lVar7);
        iVar2 = *(int *)(lVar6 + 0x18);
        lVar7 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor(lVar7,DAT_0921a830,(long)iVar2,0);
        if ((lVar7 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_04261108;
        if (*(uint *)(plVar3 + 3) < 6) goto LAB_04261104;
        plVar3[9] = lVar7;
        thunk_FUN_03f5d7b8(plVar3 + 9,lVar7);
        if (lVar5 == 0) goto LAB_04261100;
        iVar2 = *(int *)(lVar5 + 0x38);
        lVar7 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor(lVar7,DAT_09217b80,(long)iVar2,0);
        if ((lVar7 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_04261108;
        if (*(uint *)(plVar3 + 3) < 7) goto LAB_04261104;
        plVar3[10] = lVar7;
        thunk_FUN_03f5d7b8(plVar3 + 10,lVar7);
        if (param_1 == 0) goto LAB_04261100;
        IapAdsSystem_DataTrackingManager__LogEvent(param_1,DAT_0921e700,plVar3,0);
        uVar8 = uVar8 + 1;
        fVar10 = *(float *)(lVar6 + 0x10);
      } while (uVar1 != uVar8);
    }
    return;
  }
LAB_04261100:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


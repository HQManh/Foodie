// rea decompile_all
// name: AnhPD.FoodOrder.PieceLedger$$SessionHeader
// address: 0x41fb450
// body: available
// range: 0x41fb450-0x41fb8ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41fb8ec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41fb8f8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41fb8fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceLedger__SessionHeader(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_50;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_09516bb2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_09182c40);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09187830);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_091b4c30);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_09226438);
    FUN_03f5c2a4(&DAT_0921f108);
    FUN_03f5c2a4(&DAT_0921e6b8);
    DAT_09516bb2 = 1;
  }
  uVar1 = FUN_05a8f088(DAT_091b4c30);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(DAT_091b4c28 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar2,0);
  lVar6 = DAT_0921e6b8;
  if ((uVar1 & 1) != 0) {
    if (lVar2 == 0) goto LAB_041fb8fc;
    lVar7 = *(long *)(lVar2 + 0x38);
    if (lVar7 != 0) {
      plVar3 = (long *)FUN_03f5c394(DAT_09180318,5);
      if (plVar3 == (long *)0x0) goto LAB_041fb8fc;
      lVar6 = *(long *)(lVar7 + 0x10);
      if ((lVar6 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
      goto LAB_041fb8f0;
      if ((int)plVar3[3] == 0) goto LAB_041fb8ec;
      plVar3[4] = lVar6;
      thunk_FUN_03f5d7b8(plVar3 + 4,lVar6);
      local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(lVar7 + 0x18));
      lVar6 = FUN_03f5c42c(DAT_09535420,&local_50);
      if ((lVar6 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
      goto LAB_041fb8f0;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto LAB_041fb8ec;
      plVar3[5] = lVar6;
      thunk_FUN_03f5d7b8(plVar3 + 5,lVar6);
      local_34 = *(undefined4 *)(lVar7 + 0x1c);
      lVar6 = FUN_03f5c42c(DAT_09535420,&local_34);
      if ((lVar6 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
      goto LAB_041fb8f0;
      if (*(uint *)(plVar3 + 3) < 3) goto LAB_041fb8ec;
      plVar3[6] = lVar6;
      thunk_FUN_03f5d7b8(plVar3 + 6,lVar6);
      local_38 = *(undefined4 *)(lVar7 + 0x20);
      lVar6 = FUN_03f5c42c(DAT_09182c40,&local_38);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar7 == 0))
      goto LAB_041fb8f0;
      if ((*(uint *)(plVar3 + 3) & 0xfffffffc) == 0) goto LAB_041fb8ec;
      plVar3[7] = lVar6;
      thunk_FUN_03f5d7b8(plVar3 + 7,lVar6);
      local_44 = *(undefined4 *)(lVar2 + 0x50);
      lVar2 = FUN_03f5c42c(DAT_09187830,&local_44);
      if ((lVar2 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
      goto LAB_041fb8f0;
      if (*(uint *)(plVar3 + 3) < 5) goto LAB_041fb8ec;
      plVar3[8] = lVar2;
      thunk_FUN_03f5d7b8(plVar3 + 8,lVar2);
      lVar6 = System_String__Format(DAT_0921f108,plVar3,0);
    }
  }
  plVar3 = (long *)FUN_03f5c394(DAT_09180318,4);
  if (plVar3 == (long *)0x0) {
LAB_041fb8fc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar6 != 0) &&
     (lVar2 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0)) {
LAB_041fb8f0:
    uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar6;
    thunk_FUN_03f5d7b8(plVar3 + 4,lVar6);
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = UnityEngine_Application__get_version(0);
    if ((lVar2 != 0) &&
       (lVar6 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
    goto LAB_041fb8f0;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar2;
      thunk_FUN_03f5d7b8(plVar3 + 5,lVar2);
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_50 = *(undefined8 *)(*(long *)(DAT_09189140 + 0xb8) + 0xa0);
      lVar2 = FUN_03f5c42c(DAT_09183548,&local_50);
      if ((lVar2 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
      goto LAB_041fb8f0;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar2;
        thunk_FUN_03f5d7b8(plVar3 + 6,lVar2);
        local_34 = UnityEngine_Time__get_timeSinceLevelLoad(0);
        lVar2 = FUN_03f5c42c(DAT_09535450,&local_34);
        if ((lVar2 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
        goto LAB_041fb8f0;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
          plVar3[7] = lVar2;
          thunk_FUN_03f5d7b8(plVar3 + 7,lVar2);
          System_String__Format(DAT_09226438,plVar3,0);
          return;
        }
      }
    }
  }
LAB_041fb8ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}


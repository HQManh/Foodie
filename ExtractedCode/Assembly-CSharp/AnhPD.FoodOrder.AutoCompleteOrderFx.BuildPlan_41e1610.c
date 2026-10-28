// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$BuildPlan
// address: 0x41e1610
// body: available
// range: 0x41e1610-0x41e1887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e1884 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_AutoCompleteOrderFx__BuildPlan(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long local_80;
  long lStack_78;
  long local_70;
  
  if ((DAT_09516ad8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_091b20e8);
    FUN_03f5c2a4(&DAT_091b20f8);
    FUN_03f5c2a4(&DAT_091b20d8);
    FUN_03f5c2a4(&DAT_091b20d0);
    FUN_03f5c2a4(&DAT_0917d198);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516ad8 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917d198);
  FUN_057e053c(lVar3,param_1,DAT_091b20d8);
  lVar4 = thunk_FUN_03f9944c(DAT_0917d198);
  FUN_057e0400(lVar4,DAT_091b20d0);
  do {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0) {
LAB_041e1850:
      lVar8 = param_2[1];
      lVar3 = *param_2;
      param_3[2] = param_2[2];
      param_3[1] = lVar8;
      *param_3 = lVar3;
      return lVar4;
    }
    lStack_78 = param_2[1];
    local_80 = *param_2;
    local_70 = param_2[2];
    if (*(int *)(DAT_09181918 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lStack_98 = lStack_78;
    local_a0 = local_80;
    local_90 = local_70;
    lVar5 = AnhPD_FoodOrder_AutoCompleteOrderFx__PickBestCandidate(lVar3,&local_a0);
    lVar8 = DAT_091b20e8;
    if (lVar5 == 0) goto LAB_041e1850;
    if (lVar4 == 0) {
LAB_041e1884:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_041e1884;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *plVar6 = lVar5;
      thunk_FUN_03f5d7b8(plVar6,lVar5);
    }
    else {
      FUN_057e0c68(lVar4,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    iVar2 = *(int *)(lVar5 + 0x44) + -1;
    *(int *)(lVar5 + 0x44) = iVar2;
    if (iVar2 < 1) {
      if (lVar3 == 0) goto LAB_041e1884;
      FUN_057e2274(lVar3,lVar5,DAT_091b20f8);
    }
    lVar8 = *(long *)(lVar5 + 0x10);
    if (lVar8 == 0) goto LAB_041e1884;
    lStack_78 = *(undefined8 *)(lVar8 + 0x18);
    local_80 = *(undefined8 *)(lVar8 + 0x10);
    local_70 = *(undefined8 *)(lVar8 + 0x20);
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_c0 = local_70;
    uStack_c8 = lStack_78;
    local_d0 = local_80;
    AnhPD_FoodOrder_PieceSet__Subtract(&local_b8,param_2,&local_d0);
    param_2[1] = lStack_b0;
    *param_2 = local_b8;
    param_2[2] = local_a8;
  } while( true );
}


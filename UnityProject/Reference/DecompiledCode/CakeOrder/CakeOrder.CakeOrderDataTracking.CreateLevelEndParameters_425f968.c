// rea decompile_all
// name: CakeOrder.CakeOrderDataTracking$$CreateLevelEndParameters
// address: 0x425f968
// body: available
// range: 0x425f968-0x42600a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42600a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderDataTracking__CreateLevelEndParameters
               (undefined8 param_1,long param_2,long param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined8 local_78;
  
  if ((DAT_09516f6c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_091aee10);
    FUN_03f5c2a4(&DAT_091aee18);
    FUN_03f5c2a4(&DAT_091aee20);
    FUN_03f5c2a4(&DAT_091aee00);
    FUN_03f5c2a4(&DAT_0917c878);
    FUN_03f5c2a4(&DAT_091b73f8);
    FUN_03f5c2a4(&DAT_091b73f0);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_0921ec18);
    FUN_03f5c2a4(&DAT_09221a28);
    FUN_03f5c2a4(&DAT_09225818);
    FUN_03f5c2a4(&DAT_09221a78);
    FUN_03f5c2a4(&DAT_0921ab00);
    FUN_03f5c2a4(&DAT_09225880);
    FUN_03f5c2a4(&DAT_0921ec10);
    FUN_03f5c2a4(&DAT_0921e6b0);
    FUN_03f5c2a4(&DAT_09222dd0);
    FUN_03f5c2a4(&DAT_0921afb0);
    FUN_03f5c2a4(&DAT_0921e6f8);
    DAT_09516f6c = 1;
  }
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
  if (lVar4 == 0) goto LAB_042600a0;
  if (param_2 != 0) {
    param_5 = *(undefined4 *)(param_2 + 0x14);
  }
  lVar6 = *(long *)(lVar4 + 0x10);
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar4 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_042600a0;
  }
  uVar7 = *(undefined8 *)(lVar4 + 0x30);
  lVar4 = thunk_FUN_03f9944c(DAT_0917c878);
  FUN_057e053c(lVar4,uVar7,DAT_091aee00);
  lVar5 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
  if (lVar5 == 0) goto LAB_042600a0;
  uVar8 = *(undefined8 *)(lVar5 + 0x18);
  uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(uVar7,DAT_0921e6b0,uVar8,0);
  if (lVar4 == 0) goto LAB_042600a0;
  FUN_057e1b20(lVar4,0,uVar7,DAT_091aee18);
  lVar5 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
  if (lVar5 == 0) goto LAB_042600a0;
  uVar7 = System_Int32__ToString(lVar5 + 0x28,0);
  uVar8 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(uVar8,DAT_0921e6f8,uVar7,0);
  FUN_057e1b20(lVar4,1,uVar8,DAT_091aee18);
  if (lVar6 == 0) goto LAB_042600a0;
  uVar1 = *(int *)(lVar6 + 0x38) - 1;
  uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor
            (uVar7,DAT_09221a78,uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU),0);
  FUN_057e1b20(lVar4,2,uVar7,DAT_091aee18);
  uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(uVar7,DAT_09225880,(long)param_4,0);
  lVar6 = DAT_091aee10;
  lVar5 = *(long *)(lVar4 + 0x10);
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  if (lVar5 == 0) goto LAB_042600a0;
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
    puVar2 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
    *puVar2 = uVar7;
    thunk_FUN_03f5d7b8(puVar2,uVar7);
  }
  else {
    FUN_057e0c68(lVar4,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
  }
  uVar3 = System_String__op_Equality(param_1,DAT_09225818,0);
  uVar7 = DAT_09221a28;
  puVar2 = &DAT_09225818;
  if ((uVar3 & 1) == 0) {
    uVar3 = System_String__op_Equality(param_1,DAT_09222dd0,0);
    if ((uVar3 & 1) == 0) {
      puVar2 = &DAT_0921ec10;
    }
  }
  uVar9 = *puVar2;
  uVar8 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(uVar8,uVar7,uVar9,0);
  lVar6 = DAT_091aee10;
  lVar5 = *(long *)(lVar4 + 0x10);
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  if (lVar5 == 0) goto LAB_042600a0;
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
    puVar2 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
    *puVar2 = uVar8;
    thunk_FUN_03f5d7b8(puVar2,uVar8);
  }
  else {
    FUN_057e0c68(lVar4,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
  }
  uVar3 = System_String__op_Equality(param_1,DAT_09225818,0);
  uVar7 = DAT_0921ec18;
  if (((uVar3 & 1) == 0) &&
     (uVar3 = System_String__op_Equality(param_1,DAT_09222dd0,0), (uVar3 & 1) == 0)) {
    if (*(int *)(DAT_09182280 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = CakeOrder_CakeOrderDataTracking__LoseTypeOf(param_5);
  }
  else {
    uVar8 = **(undefined8 **)(DAT_09535468 + 0xb8);
  }
  uVar9 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(uVar9,uVar7,uVar8,0);
  lVar6 = DAT_091aee10;
  lVar5 = *(long *)(lVar4 + 0x10);
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  if (lVar5 == 0) goto LAB_042600a0;
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
    puVar2 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
    *puVar2 = uVar9;
    thunk_FUN_03f5d7b8(puVar2,uVar9);
  }
  else {
    FUN_057e0c68(lVar4,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
  }
  uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(uVar7,DAT_0921afb0,param_1,0);
  lVar6 = DAT_091aee10;
  lVar5 = *(long *)(lVar4 + 0x10);
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  if (lVar5 == 0) goto LAB_042600a0;
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
    puVar2 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
    *puVar2 = uVar7;
    thunk_FUN_03f5d7b8(puVar2,uVar7);
  }
  else {
    FUN_057e0c68(lVar4,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
  }
  uVar7 = DAT_0921ab00;
  if (param_2 == 0) {
    fVar12 = 0.0;
    if ((param_3 != 0) && (*(long *)(param_3 + 0x18) != 0)) {
      local_78 = 0.0;
      FUN_05c37590(*(undefined4 *)(*(long *)(param_3 + 0x18) + 0x10),&local_78,DAT_091b73f0);
      fVar12 = local_78._4_4_;
    }
  }
  else {
    fVar12 = *(float *)(param_2 + 0x18);
  }
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar11 = (double)fVar12;
  dVar10 = modf(dVar11,(double *)&local_78);
  if (0.0 <= fVar12) {
    if (dVar10 == 0.5) {
      dVar10 = 1.0;
      goto LAB_0425ff78;
    }
    dVar11 = (double)(long)(dVar11 + 0.5);
  }
  else if (dVar10 == -0.5) {
    dVar10 = -1.0;
LAB_0425ff78:
    dVar11 = local_78;
    if (((long)local_78 & 1U) != 0) {
      dVar11 = local_78 + dVar10;
    }
  }
  else {
    dVar11 = (double)(long)(dVar11 + -0.5);
  }
  uVar8 = thunk_FUN_03f9944c(DAT_09188e48);
  lVar6 = -0x80000000;
  if (dVar11 != INFINITY) {
    lVar6 = (long)(int)dVar11;
  }
  Firebase_Analytics_Parameter___ctor(uVar8,uVar7,lVar6,0);
  lVar6 = DAT_091aee10;
  lVar5 = *(long *)(lVar4 + 0x10);
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      puVar2 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar2 = uVar8;
      thunk_FUN_03f5d7b8(puVar2,uVar8);
    }
    else {
      FUN_057e0c68(lVar4,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    FUN_057e28a4(lVar4,DAT_091aee20);
    return;
  }
LAB_042600a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


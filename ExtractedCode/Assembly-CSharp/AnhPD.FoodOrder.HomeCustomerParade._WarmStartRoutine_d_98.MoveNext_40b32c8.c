// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade.<WarmStartRoutine>d__98$$MoveNext
// address: 0x40b32c8
// body: available
// range: 0x40b32c8-0x40b3547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b3544 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_HomeCustomerParade_<WarmStartRoutine>d__98__MoveNext(long param_1)

{
  int iVar1;
  float fVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double local_28;
  
  if ((DAT_09515ef2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091ce9e0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918cec0);
    DAT_09515ef2 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar6 = thunk_FUN_03f9944c(DAT_09177ab8);
    FUN_053007d8(uVar6,lVar5,DAT_091ce9e0,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0918cec0);
    UnityEngine_WaitUntil___ctor(uVar4,uVar6,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar4);
    *(undefined4 *)(param_1 + 0x10) = 1;
    goto LAB_040b348c;
  }
  if (iVar1 != 1) goto LAB_040b348c;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar5 == 0) {
LAB_040b3544:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(lVar5 + 0x131) != '\0') goto LAB_040b348c;
  uVar6 = *(undefined8 *)(lVar5 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
  fVar7 = 0.0;
  if ((uVar3 & 1) != 0) {
    if (*(long *)(lVar5 + 0x40) == 0) goto LAB_040b3544;
    fVar7 = (float)CakeOrder_Home_HomeMapBuildingBase__get_UpgradeProgress
                             (*(long *)(lVar5 + 0x40),0);
  }
  iVar10 = *(int *)(lVar5 + 0xcc);
  iVar11 = *(int *)(lVar5 + 0xd0);
  fVar9 = 1.0;
  if (fVar7 <= 1.0) {
    fVar9 = fVar7;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar7) {
    fVar2 = fVar9;
  }
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  fVar7 = fVar2 * ((float)iVar11 - (float)iVar10) + (float)iVar10;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar12 = (double)fVar7;
  dVar8 = modf(dVar12,&local_28);
  if (0.0 <= fVar7) {
    if (dVar8 == 0.5) {
      dVar8 = 1.0;
      goto LAB_040b34bc;
    }
    dVar12 = (double)(long)(dVar12 + 0.5);
  }
  else if (dVar8 == -0.5) {
    dVar8 = -1.0;
LAB_040b34bc:
    dVar12 = local_28;
    if (((long)local_28 & 1U) != 0) {
      dVar12 = local_28 + dVar8;
    }
  }
  else {
    dVar12 = (double)(long)(dVar12 + -0.5);
  }
  fVar7 = (float)AnhPD_FoodOrder_HomeCustomerParade__get_ScreenLeftX(lVar5,0);
  if (dVar12 != INFINITY && 0 < (int)dVar12) {
    iVar10 = 0;
    fVar7 = fVar7 + *(float *)(lVar5 + 0xd4) * -0.5;
    do {
      AnhPD_FoodOrder_HomeCustomerParade__SpawnNext(fVar7,lVar5,0);
      iVar10 = iVar10 + 1;
      fVar7 = fVar7 - *(float *)(lVar5 + 0xd4);
    } while (iVar10 < (int)dVar12);
  }
LAB_040b348c:
  return iVar1 == 0;
}


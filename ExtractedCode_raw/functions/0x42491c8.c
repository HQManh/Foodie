// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade$$Step
// address: 0x42491c8
// body: available
// range: 0x42491c8-0x42494c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42494ac to 0x866b604 UnityEngine.Transform$$set_localPosition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42494c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_HomeCustomerParade__Step(float param_1,long param_2,long param_3)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  
  if ((DAT_09516e9e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516e9e = 1;
  }
  if (param_3 == 0) goto LAB_042494c0;
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if ((*(char *)(param_2 + 0x131) != '\0') ||
     (fVar8 = (float)UnityEngine_Time__get_time(0), fVar8 < *(float *)(param_3 + 0x70))) {
    param_1 = 0.0;
  }
  if ((*(char *)(param_3 + 0x74) != '\0') &&
     (uVar5 = AnhPD_FoodOrder_HomeCustomerParade__IsWalkCyclePlaying(param_3), (uVar5 & 1) == 0)) {
    *(undefined1 *)(param_3 + 0x74) = 0;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x54);
  uVar12 = *(undefined8 *)(param_3 + 0x4c);
  if (DAT_09516ea4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09516ea4 = '\x01';
  }
  fVar8 = (float)uVar7 - (float)uVar12;
  fVar13 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar12 >> 0x20);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar11 = SQRT(fVar8 * fVar8 + fVar13 * fVar13);
  if (fVar11 <= 0.001) {
    *(undefined4 *)(param_3 + 0x60) = 0;
    *(undefined1 *)(param_3 + 0x6c) = 0;
    *(undefined8 *)(param_3 + 0x4c) = *(undefined8 *)(param_3 + 0x54);
  }
  else {
    fVar1 = param_1;
    if (*(char *)(param_3 + 0x74) != '\0') {
      fVar1 = 0.0;
    }
    if (*(char *)(param_3 + 0x40) == '\0') {
      fVar9 = *(float *)(param_3 + 0x5c);
    }
    else if (((*(char *)(param_3 + 0x48) == '\0') && (*(int *)(param_3 + 0x68) < 0)) &&
            (*(char *)(param_3 + 0x6e) == '\0')) {
      fVar9 = *(float *)(param_3 + 0x44) * *(float *)(param_2 + 0x80);
    }
    else {
      fVar9 = *(float *)(param_3 + 0x44);
    }
    fVar10 = fVar11;
    if (fVar1 * fVar9 <= fVar11) {
      fVar10 = fVar1 * fVar9;
    }
    *(ulong *)(param_3 + 0x4c) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x4c) >> 0x20) +
                  (fVar13 / fVar11) * fVar10,
                  (float)*(undefined8 *)(param_3 + 0x4c) + (fVar8 / fVar11) * fVar10);
    *(float *)(param_3 + 0x60) = *(float *)(param_3 + 0x60) + fVar1 * *(float *)(param_2 + 0x100);
  }
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
  if (((uVar5 & 1) == 0) || (*(char *)(param_3 + 0x40) == '\0')) {
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)(param_3 + 0x10);
      if (lVar6 == 0) goto LAB_042494c0;
      if (((param_1 <= 0.0) || (fVar11 <= 0.001)) ||
         ((*(int *)(lVar6 + 0x40) != 0 || (*(char *)(param_3 + 0x6c) != '\0')))) {
        bVar2 = false;
        bVar3 = false;
        if (0.001 < fVar11) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(param_1)) {
            bVar2 = param_1 == 0.0;
            bVar3 = 0.0 <= param_1;
          }
        }
        if ((bVar3 && !bVar2) || (*(int *)(lVar6 + 0x40) != 4)) goto LAB_04249454;
        uVar7 = 0;
      }
      else {
        uVar7 = 4;
      }
      AnhPD_FoodOrder_Customer__ChangeState(lVar6,uVar7,0,0,0);
    }
  }
  else {
    bVar2 = false;
    bVar3 = true;
    bVar4 = false;
    if (0.001 < fVar11) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(param_1)) {
        bVar2 = param_1 < 0.0;
        bVar3 = param_1 == 0.0;
        bVar4 = false;
      }
    }
    AnhPD_FoodOrder_HomeCustomerParade__StepRunner(uVar5,param_3,!bVar3 && bVar2 == bVar4);
  }
LAB_04249454:
  fVar8 = 0.0;
  if ((0.001 < fVar11) && (*(char *)(param_3 + 100) != '\0')) {
    fVar8 = sinf(*(float *)(param_3 + 0x60));
    fVar8 = *(float *)(param_2 + 0xfc) * ABS(fVar8);
  }
  if (*(long *)(param_3 + 0x18) != 0) {
    UnityEngine_Transform__set_localPosition
              (*(undefined4 *)(param_3 + 0x4c),fVar8 + *(float *)(param_3 + 0x50),0,
               *(long *)(param_3 + 0x18),0);
    return;
  }
LAB_042494c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


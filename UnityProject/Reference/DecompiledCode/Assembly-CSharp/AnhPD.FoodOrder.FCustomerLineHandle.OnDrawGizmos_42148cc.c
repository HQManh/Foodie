// rea decompile_all
// name: AnhPD.FoodOrder.FCustomerLineHandle$$OnDrawGizmos
// address: 0x42148cc
// body: available
// range: 0x42148cc-0x4214a57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4214a50 to 0x85ff8a8 UnityEngine.Gizmos$$DrawLine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4214a54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FCustomerLineHandle__OnDrawGizmos(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar1 = *(int *)(param_1 + 0x38);
  fVar13 = *(float *)(param_1 + 0x4c);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  fVar12 = fVar13 * 0.5;
  fVar11 = *(float *)(param_1 + 0x3c) * (float)iVar1 * 0.5;
  UnityEngine_Gizmos__set_color(0x3f800000,0x3f59999a,0,0x3f333333,0);
  fVar13 = -(fVar13 * 0.5);
  iVar3 = 0;
  do {
    fVar14 = *(float *)(param_1 + 0x3c);
    lVar2 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar2 == 0) goto LAB_04214a54;
    uVar9 = 0;
    fVar15 = fVar14 * (float)iVar3 - fVar11;
    fVar14 = fVar12;
    uVar4 = UnityEngine_Transform__TransformPoint(fVar15,fVar12,0,lVar2,0);
    lVar2 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar2 == 0) goto LAB_04214a54;
    uVar6 = 0;
    fVar7 = fVar13;
    uVar5 = UnityEngine_Transform__TransformPoint(fVar15,fVar13,0,lVar2,0);
    UnityEngine_Gizmos__DrawLine(uVar4,fVar14,uVar9,uVar5,fVar7,uVar6,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 <= iVar1);
  lVar2 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar2 != 0) {
    uVar9 = 0;
    uVar5 = 0;
    uVar4 = UnityEngine_Transform__TransformPoint(-fVar11,0,0,lVar2,0);
    lVar2 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar2 != 0) {
      uVar8 = 0;
      uVar10 = 0;
      uVar6 = UnityEngine_Transform__TransformPoint(fVar11,0,0,lVar2,0);
      UnityEngine_Gizmos__DrawLine(uVar4,uVar9,uVar5,uVar6,uVar8,uVar10,0);
      return;
    }
  }
LAB_04214a54:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


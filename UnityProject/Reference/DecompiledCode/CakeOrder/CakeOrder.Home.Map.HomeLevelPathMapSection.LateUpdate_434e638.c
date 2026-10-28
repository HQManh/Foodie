// rea decompile_all
// name: CakeOrder.Home.Map.HomeLevelPathMapSection$$LateUpdate
// address: 0x434e638
// body: available
// range: 0x434e638-0x434e81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434e7a4 to 0x434e81c CakeOrder.Home.Map.HomeLevelPathMapSection$$UpdateLevelOfDetails (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x434e818 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Map_HomeLevelPathMapSection__LateUpdate
               (undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_095177a8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177a8 = 1;
  }
  if (*(char *)(param_3 + 0x7c) == '\0') {
    return;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x70);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if ((*(long *)(param_3 + 0x70) == 0) ||
     (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_3 + 0x70),0), lVar2 == 0)) {
LAB_0434e818:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  UnityEngine_Transform__get_position(lVar2,0);
  if (*(long *)(param_3 + 0x70) == 0) goto LAB_0434e818;
  fVar7 = param_2;
  fVar5 = (float)UnityEngine_Camera__get_orthographicSize(*(long *)(param_3 + 0x70),0);
  if ((*(long *)(param_3 + 0x68) == 0) || (*(long *)(param_3 + 0x70) == 0)) goto LAB_0434e818;
  fVar8 = *(float *)(*(long *)(param_3 + 0x68) + 0x14);
  fVar6 = (float)UnityEngine_Camera__get_orthographicSize(*(long *)(param_3 + 0x70),0);
  if ((*(long *)(param_3 + 0x68) == 0) || (*(long *)(param_3 + 0x38) == 0)) goto LAB_0434e818;
  fVar9 = *(float *)(*(long *)(param_3 + 0x68) + 0x14);
  UnityEngine_Transform__get_position(*(long *)(param_3 + 0x38),0);
  if (*(long *)(param_3 + 0x68) == 0) goto LAB_0434e818;
  fVar9 = (param_2 - fVar6) - fVar9;
  fVar6 = fVar9 - *(float *)(*(long *)(param_3 + 0x68) + 0x10);
  if (fVar6 <= fVar7 + *(float *)(param_3 + 0x2c)) {
    if (*(long *)(param_3 + 0x38) == 0) goto LAB_0434e818;
    UnityEngine_Transform__get_position(*(long *)(param_3 + 0x38),0);
    if (*(long *)(param_3 + 0x68) == 0) goto LAB_0434e818;
    fVar8 = param_2 + fVar5 + fVar8;
    if (fVar6 <= fVar8 + *(float *)(*(long *)(param_3 + 0x68) + 0x10)) {
      if (*(long *)(param_3 + 0x38) == 0) goto LAB_0434e818;
      UnityEngine_Transform__get_position(*(long *)(param_3 + 0x38),0);
      if (fVar9 <= fVar6 + *(float *)(param_3 + 0x2c)) {
        if (*(long *)(param_3 + 0x38) == 0) goto LAB_0434e818;
        UnityEngine_Transform__get_position(*(long *)(param_3 + 0x38),0);
        if (fVar6 <= fVar8) {
          if (*(long *)(param_3 + 0x70) == 0) goto LAB_0434e818;
          fVar7 = (float)UnityEngine_Camera__get_orthographicSize(*(long *)(param_3 + 0x70),0);
          if (*(long *)(param_3 + 0x68) == 0) goto LAB_0434e818;
          uVar3 = 3;
          if (fVar7 <= *(float *)(*(long *)(param_3 + 0x68) + 0x18)) {
            uVar3 = 4;
          }
          goto LAB_0434e78c;
        }
      }
      uVar3 = 2;
      goto LAB_0434e78c;
    }
  }
  uVar3 = 1;
LAB_0434e78c:
  CakeOrder_Home_Map_HomeLevelPathMapSection__UpdateLevelOfDetails(param_3,uVar3);
  return;
}


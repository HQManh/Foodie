// rea decompile_all
// name: UnityEngine.UI.Extensions.UIFlippable$$ModifyMesh
// address: 0x7738ed4
// body: available
// range: 0x7738ed4-0x77390d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77390d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UnityEngine_UI_Extensions_UIFlippable__ModifyMesh
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               long param_6)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_14c [108];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  
  if ((DAT_09522aae & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09522aae = 1;
  }
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_90 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  plVar3 = (long *)UnityEngine_Component__get_transform(param_5,0);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else if (*plVar3 != DAT_09189c98) {
    plVar3 = (long *)0x0;
  }
  if (param_6 != 0) {
    iVar1 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_6,0);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        uStack_7c = 0;
        uStack_80 = 0;
        uStack_b8 = 0;
        local_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        uStack_88 = 0;
        local_84 = 0;
        uStack_90 = 0;
        uStack_d8 = 0;
        local_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        UnityEngine_UI_VertexHelper__PopulateUIVertex(param_6,&local_e0,iVar1,0);
        fVar7 = (float)local_e0;
        if (*(char *)(param_5 + 0x28) == '\0') {
          fVar6 = param_3;
          if (*(char *)(param_5 + 0x29) == '\0') goto LAB_0773906c;
          if (plVar3 == (long *)0x0) goto LAB_077390d4;
LAB_07739028:
          fVar6 = local_e0._4_4_;
          UnityEngine_RectTransform__get_rect(plVar3,0);
          fVar4 = param_4;
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar5 = (param_2 + param_4 * 0.5) - local_e0._4_4_;
          fVar6 = fVar6 + fVar5 + fVar5;
          param_2 = local_e0._4_4_;
        }
        else {
          if (plVar3 == (long *)0x0) goto LAB_077390d4;
          fVar4 = (float)UnityEngine_RectTransform__get_rect(plVar3,0);
          fVar6 = param_3;
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar4 = (fVar4 + param_3 * 0.5) - (float)local_e0;
          fVar7 = fVar7 + fVar4 + fVar4;
          param_2 = (float)local_e0;
          param_3 = fVar6;
          if (*(char *)(param_5 + 0x29) != '\0') goto LAB_07739028;
LAB_0773906c:
          param_3 = fVar6;
          fVar4 = param_4;
          fVar6 = local_e0._4_4_;
        }
        local_e0 = CONCAT44(fVar6,fVar7);
        memcpy(auStack_14c,&local_e0,0x6c);
        UnityEngine_UI_VertexHelper__SetUIVertex(param_6,auStack_14c,iVar1,0);
        iVar1 = iVar1 + 1;
        iVar2 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_6,0);
        param_4 = fVar4;
      } while (iVar1 < iVar2);
    }
    return;
  }
LAB_077390d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


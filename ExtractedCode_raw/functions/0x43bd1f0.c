// rea decompile_all
// name: ChocDino.UIFX.FilterStackTextMeshPro$$IsMaterialHdr
// address: 0x43bd1f0
// body: available
// range: 0x43bd1f0-0x43bd5df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43bd5dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
ChocDino_UIFX_FilterStackTextMeshPro__IsMaterialHdr
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,long *param_5,
          long param_6)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_09517b68 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918aac8);
    FUN_03f5c2a4(&DAT_092116c0);
    FUN_03f5c2a4(&DAT_0920ea08);
    DAT_09517b68 = 1;
  }
  if (*(int *)(DAT_0918aac8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_6 == 0) {
LAB_043bd5dc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  fVar7 = (float)UnityEngine_Material__GetColorImpl
                           (param_6,*(undefined4 *)(*(long *)(DAT_0918aac8 + 0xb8) + 8),0);
  if (fVar7 <= param_2) {
    fVar7 = param_2;
  }
  fVar8 = 1.0;
  if (fVar7 <= param_3) {
    fVar7 = param_3;
  }
  if (1.0 < fVar7) goto LAB_043bd2a0;
  if (*(int *)(DAT_0918aac8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Material__HasProperty
                    (param_6,*(undefined4 *)(*(long *)(DAT_0918aac8 + 0xb8) + 0x5c),0);
  if ((uVar3 & 1) == 0) {
LAB_043bd470:
    if (*(int *)(DAT_0918aac8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Material__HasProperty
                      (param_6,*(undefined4 *)(*(long *)(DAT_0918aac8 + 0xb8) + 0x2c),0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(DAT_0918aac8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar7 = (float)UnityEngine_Material__GetColorImpl
                               (param_6,*(undefined4 *)(*(long *)(DAT_0918aac8 + 0xb8) + 0x2c),0);
      if (fVar7 <= fVar8) {
        fVar7 = fVar8;
      }
      fVar8 = 1.0;
      if (fVar7 <= param_3) {
        fVar7 = param_3;
      }
      if (1.0 < fVar7) {
        if (*(int *)(DAT_0918aac8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Material__IsKeywordEnabled
                          (param_6,*(undefined8 *)(*(long *)(DAT_0918aac8 + 0xb8) + 0x100),0);
        if (((uVar3 & 1) != 0) ||
           (uVar3 = UnityEngine_Material__IsKeywordEnabled(param_6,DAT_092116c0,0), (uVar3 & 1) != 0
           )) goto LAB_043bd2a0;
      }
    }
    if (*(int *)(DAT_0918aac8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Material__HasProperty
                      (param_6,*(undefined4 *)(*(long *)(DAT_0918aac8 + 0xb8) + 0x8c),0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(DAT_0918aac8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar7 = (float)UnityEngine_Material__GetColorImpl
                               (param_6,*(undefined4 *)(*(long *)(DAT_0918aac8 + 0xb8) + 0x8c),0);
      if (fVar7 <= fVar8) {
        fVar7 = fVar8;
      }
      if (fVar7 <= param_3) {
        fVar7 = param_3;
      }
      if (1.0 < fVar7) {
        if (*(int *)(DAT_0918aac8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Material__IsKeywordEnabled
                          (param_6,*(undefined8 *)(*(long *)(DAT_0918aac8 + 0xb8) + 0xf8),0);
        if ((uVar3 & 1) != 0) goto LAB_043bd2a0;
      }
    }
    uVar2 = 0;
  }
  else {
    if (*(int *)(DAT_0918aac8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar7 = (float)UnityEngine_Material__GetColorImpl
                             (param_6,*(undefined4 *)(*(long *)(DAT_0918aac8 + 0xb8) + 0x5c),0);
    if (fVar7 <= fVar8) {
      fVar7 = fVar8;
    }
    fVar8 = 1.0;
    if (fVar7 <= param_3) {
      fVar7 = param_3;
    }
    if (fVar7 <= 1.0) goto LAB_043bd470;
    if (param_5 == (long *)0x0) goto LAB_043bd5dc;
    uVar2 = (**(code **)(*param_5 + 0x568))(param_5,*(undefined8 *)(*param_5 + 0x570));
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Equality(param_6,uVar2,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(DAT_0918aac8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar7 = (float)UnityEngine_Material__GetFloatImpl
                               (param_6,*(undefined4 *)(*(long *)(DAT_0918aac8 + 0xb8) + 0x54),0);
    }
    else {
      fVar7 = (float)TMPro_TMP_Text__get_outlineWidth(param_5,0);
    }
    if (fVar7 <= 0.0) goto LAB_043bd470;
    if (*(int *)(DAT_0918aac8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Material__IsKeywordEnabled
                      (param_6,*(undefined8 *)(*(long *)(DAT_0918aac8 + 0xb8) + 0x128),0);
    if ((uVar3 & 1) == 0) {
      puVar5 = (undefined8 *)(param_4 + 0xc0);
      uVar6 = *puVar5;
      uVar2 = UnityEngine_Material__get_shader(param_6,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar6,uVar2,0);
      if ((uVar3 & 1) == 0) {
        bVar1 = *(byte *)(param_4 + 200);
      }
      else {
        uVar2 = UnityEngine_Material__get_shader(param_6,0);
        *puVar5 = uVar2;
        thunk_FUN_03f5d7b8(puVar5,uVar2);
        lVar4 = UnityEngine_Material__get_shader(param_6,0);
        if ((lVar4 == 0) || (lVar4 = UnityEngine_Object__GetName(lVar4,0), lVar4 == 0))
        goto LAB_043bd5dc;
        bVar1 = System_String__StartsWith(lVar4,DAT_0920ea08,0);
        bVar1 = bVar1 & 1;
        *(byte *)(param_4 + 200) = bVar1;
      }
      if (bVar1 != 0) goto LAB_043bd470;
    }
LAB_043bd2a0:
    uVar2 = 1;
  }
  return uVar2;
}


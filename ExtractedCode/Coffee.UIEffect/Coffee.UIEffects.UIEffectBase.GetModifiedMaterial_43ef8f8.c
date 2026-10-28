// rea decompile_all
// name: Coffee.UIEffects.UIEffectBase$$GetModifiedMaterial
// address: 0x43ef8f8
// body: available
// range: 0x43ef8f8-0x43efc57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43efc54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Coffee_UIEffects_UIEffectBase__GetModifiedMaterial(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_09517dd8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09178cf0);
    FUN_03f5c2a4(&DAT_091d2b18);
    FUN_03f5c2a4(&DAT_09187e68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f12b8);
    FUN_03f5c2a4(&DAT_09195528);
    DAT_09517dd8 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((((uVar5 & 1) == 0) &&
      (uVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled(param_1,0), (uVar5 & 1) != 0)) &&
     (lVar6 = (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0)), lVar6 != 0
     )) {
    lVar6 = (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
    if (lVar6 != 0) {
      uVar5 = Coffee_UIEffects_UIEffectContext__get_willModifyMaterial();
      if ((uVar5 & 1) == 0) goto LAB_043efab8;
      fVar12 = (float)(**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(*param_1 + 0x2d0));
      fVar13 = (fVar12 + -0.01) / 99.99;
      fVar12 = 1.0;
      if (fVar13 <= 1.0) {
        fVar12 = fVar13;
      }
      fVar14 = 0.0;
      if (0.0 <= fVar13) {
        fVar14 = fVar12 * 4.2949673e+09;
      }
      uVar7 = (**(code **)(*param_1 + 0x2f8))((int)fVar14,param_1,*(undefined8 *)(*param_1 + 0x300))
      ;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        lVar6 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
        if (lVar6 == 0) goto LAB_043efc54;
        uVar2 = UnityEngine_Object__GetInstanceID(lVar6,0);
      }
      if (param_2 != 0) {
        uVar3 = UnityEngine_Object__GetInstanceID(param_2,0);
        uVar4 = (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined8 *)(*param_1 + 0x2c0));
        UnityEngine_Hash128___ctor(&local_60,uVar3,uVar4,(int)fVar14,uVar2,0);
        uVar1 = uStack_58;
        uVar7 = local_60;
        plVar10 = param_1 + 5;
        lVar6 = *plVar10;
        if (*(int *)(DAT_09187e68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Coffee_UIEffectInternal_MaterialRepository__Valid(uVar7,uVar1,lVar6);
        uVar1 = uStack_58;
        uVar7 = local_60;
        if ((uVar5 & 1) == 0) {
          if (*(int *)(DAT_09195528 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar9 = *(undefined8 **)(DAT_09195528 + 0xb8);
          lVar6 = puVar9[1];
          if (lVar6 == 0) {
            if (*(int *)(DAT_09195528 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar9 = *(undefined8 **)(DAT_09195528 + 0xb8);
            }
            uVar11 = *puVar9;
            lVar6 = thunk_FUN_03f9944c(DAT_09178cf0);
            FUN_05324070(lVar6,uVar11,DAT_091f12b8,0);
            plVar8 = (long *)(*(long *)(DAT_09195528 + 0xb8) + 8);
            *plVar8 = lVar6;
            thunk_FUN_03f5d7b8(plVar8,lVar6);
          }
          if (*(int *)(DAT_09187e68 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_04bfe080(uVar7,uVar1,plVar10,lVar6,param_2,DAT_091d2b18);
        }
        if (*plVar10 != 0) {
          UnityEngine_Material__CopyPropertiesFromMaterial(*plVar10,param_2,0);
          (**(code **)(*param_1 + 0x358))(param_1,param_1[5],*(undefined8 *)(*param_1 + 0x360));
          return param_1[5];
        }
      }
    }
LAB_043efc54:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_043efab8:
  if (*(int *)(DAT_09187e68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Coffee_UIEffectInternal_MaterialRepository__Release(param_1 + 5);
  return param_2;
}


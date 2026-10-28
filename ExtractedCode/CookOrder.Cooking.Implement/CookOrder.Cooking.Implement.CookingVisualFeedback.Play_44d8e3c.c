// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingVisualFeedback$$Play
// address: 0x44d8e3c
// body: available
// range: 0x44d8e3c-0x44d919b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d9198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingVisualFeedback__Play
               (undefined4 param_1,float param_2,float param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  if ((DAT_0951832a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091858e8);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091d4d80);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951832a = 1;
  }
  local_68 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((param_5 & 1) != 0) {
    uVar8 = *(undefined8 *)(param_4 + 0x10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar8,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(DAT_091b48d0 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_044d9198;
      CakeOrder_AudioManagerCakeOrder__PlaySfx
                (*(undefined4 *)(param_4 + 0x34),**(long **)(lVar2 + 0xb8),
                 *(undefined8 *)(param_4 + 0x10),4,0);
    }
  }
  uVar8 = *(undefined8 *)(param_4 + 0x18);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar1 & 1) != 0) {
    uVar8 = *(undefined8 *)(param_4 + 0x18);
    if (DAT_09515ed5 == '\0') {
      FUN_03f5c2a4(&DAT_091898c0);
      DAT_09515ed5 = '\x01';
    }
    puVar5 = *(undefined4 **)(DAT_091898c0 + 0xb8);
    uVar13 = *puVar5;
    uVar14 = puVar5[1];
    uVar15 = puVar5[2];
    uVar16 = puVar5[3];
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar10 = param_3;
    fVar11 = param_2;
    lVar2 = FUN_04c3546c(param_1,param_2,param_3,uVar13,uVar14,uVar15,uVar16,uVar8,DAT_091d4d80);
    if ((lVar2 == 0) || (lVar3 = UnityEngine_Component__get_transform(lVar2,0), lVar3 == 0)) {
LAB_044d9198:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    fVar9 = (float)UnityEngine_Transform__get_localScale(lVar3,0);
    fVar12 = *(float *)(param_4 + 0x30);
    UnityEngine_Transform__set_localScale(fVar9 * fVar12,fVar11 * fVar12,fVar10 * fVar12,lVar3,0);
    UnityEngine_ParticleSystem__Play(lVar2,0);
    uVar8 = UnityEngine_Component__get_gameObject(lVar2,0);
    local_68 = UnityEngine_ParticleSystem__get_main(lVar2,0);
    fVar10 = (float)UnityEngine_ParticleSystem_MainModule__get_duration(&local_68,0);
    local_68 = UnityEngine_ParticleSystem__get_main(lVar2,0);
    UnityEngine_ParticleSystem_MainModule__get_startLifetime(&local_b0,&local_68,0);
    uStack_88 = uStack_a8;
    local_90 = local_b0;
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    fVar11 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&local_90,0);
    UnityEngine_Object__Destroy(fVar10 + fVar11,uVar8,0);
  }
  uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(param_4 + 0x20),0);
  if ((uVar1 & 1) == 0) {
    CookOrder_Cooking_Implement_CookingFeedback__Particle
              (param_1,param_2,param_3,*(undefined4 *)(param_4 + 0x30),
               *(undefined4 *)(param_4 + 0x34),*(undefined8 *)(param_4 + 0x20),
               *(undefined8 *)(param_4 + 0x28),0);
  }
  if (*(char *)(param_4 + 0x38) != '\0') {
    if (DAT_09518261 == '\0') {
      FUN_03f5c2a4(&DAT_09182d78);
      DAT_09518261 = '\x01';
    }
    plVar7 = (long *)**(undefined8 **)(DAT_09182d78 + 0xb8);
    if (plVar7 != (long *)0x0) {
      lVar2 = *plVar7;
      uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091858e8) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_044d9168;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091858e8,3);
LAB_044d9168:
      (*(code *)*puVar4)(plVar7,puVar4[1]);
    }
  }
  return;
}


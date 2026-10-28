// rea decompile_all
// name: DG.Tweening.Plugins.StringPlugin$$EvaluateAndApply
// address: 0x4569cc4
// body: available
// range: 0x4569cc4-0x456a17b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456a178 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_StringPlugin__EvaluateAndApply
               (undefined4 param_1,undefined4 param_2,long param_3,byte *param_4,long param_5,
               ulong param_6,undefined8 param_7,long param_8,byte *param_9,long param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  float fVar13;
  double dVar14;
  double __x;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  double local_78;
  
  puVar9 = &local_c0;
  if ((DAT_09518862 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_0918b3e0);
    FUN_03f5c2a4(&DAT_0918b3d8);
    DAT_09518862 = 1;
  }
  if (*(int *)(DAT_0918b3d8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar12 = **(long **)(DAT_0918b3d8 + 0xb8);
  if (lVar12 == 0) goto LAB_0456a178;
  uVar5 = System_Text_StringBuilder__get_Length(lVar12,0);
  System_Text_StringBuilder__Remove(lVar12,0,uVar5,0);
  if ((param_6 & 1) != 0) {
    if (param_5 == 0) goto LAB_0456a178;
    if ((*(int *)(param_5 + 0xa8) == 2) &&
       (iVar11 = *(int *)(param_5 + 0x10c) - (int)*(char *)(param_5 + 0x111), 0 < iVar11)) {
      if (*(int *)(DAT_0918b3d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_0918b3d8 + 0xb8) == 0) goto LAB_0456a178;
      System_Text_StringBuilder__Append(**(long **)(DAT_0918b3d8 + 0xb8),param_9,0);
      do {
        if (*(int *)(DAT_0918b3d8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_0918b3d8 + 0xb8) == 0) goto LAB_0456a178;
        System_Text_StringBuilder__Append(**(long **)(DAT_0918b3d8 + 0xb8),param_10,0);
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      if (*(int *)(DAT_0918b3d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = (long *)**(long **)(DAT_0918b3d8 + 0xb8);
      if (plVar6 == (long *)0x0) goto LAB_0456a178;
      param_9 = (byte *)(**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      lVar12 = **(long **)(DAT_0918b3d8 + 0xb8);
      if (lVar12 == 0) goto LAB_0456a178;
      uVar5 = System_Text_StringBuilder__get_Length(lVar12,0);
      System_Text_StringBuilder__Remove(lVar12,0,uVar5,0);
    }
  }
  pbVar4 = param_4;
  if ((*param_4 & 1) == 0) {
    uVar7 = System_String__IsNullOrEmpty(param_9,0);
    if ((uVar7 & 1) == 0) {
      pbVar4 = param_9;
      if (param_9 == (byte *)0x0) goto LAB_0456a178;
      goto LAB_04569ea4;
    }
    iVar11 = 0;
  }
  else {
LAB_04569ea4:
    iVar11 = *(int *)(pbVar4 + 0x10);
  }
  if ((*param_4 & 1) == 0) {
    if (param_10 == 0) goto LAB_0456a178;
    puVar10 = (uint *)(param_10 + 0x10);
  }
  else {
    puVar10 = (uint *)(param_4 + 0x14);
  }
  if (param_5 == 0) goto LAB_0456a178;
  uVar3 = *puVar10;
  fVar13 = (float)DG_Tweening_Core_Easing_EaseManager__Evaluate
                            (param_1,param_2,*(undefined4 *)(param_5 + 0xc0),
                             *(undefined4 *)(param_5 + 0xc4),*(undefined4 *)(param_5 + 0xb4),
                             *(undefined8 *)(param_5 + 0xb8),0);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar13 = fVar13 * (float)(int)uVar3;
  __x = (double)fVar13;
  dVar14 = modf(__x,&local_78);
  if (0.0 <= fVar13) {
    if (dVar14 == 0.5) {
      dVar14 = 1.0;
      goto LAB_04569f4c;
    }
    local_78 = (double)(long)(__x + 0.5);
  }
  else if (dVar14 == -0.5) {
    dVar14 = -1.0;
LAB_04569f4c:
    if (((long)local_78 & 1U) != 0) {
      local_78 = local_78 + dVar14;
    }
  }
  else {
    local_78 = (double)(long)(__x + -0.5);
  }
  uVar1 = 0x80000000;
  if (local_78 != INFINITY) {
    uVar1 = (int)local_78;
  }
  uVar2 = uVar3;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  }
  if ((param_6 & 1) == 0) {
    if (*(int *)(param_4 + 4) != 0) {
      plVar6 = (long *)DG_Tweening_Plugins_StringPlugin__Append();
      uStack_b8 = *(undefined8 *)(param_4 + 8);
      local_c0 = *(undefined8 *)param_4;
      local_b0 = *(undefined8 *)(param_4 + 0x10);
LAB_0456a03c:
      uVar8 = DG_Tweening_Plugins_StringPlugin__ScrambledCharsToUse(plVar6,puVar9);
      if (*(int *)(DAT_0918b3e0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918b3e0);
      }
      DG_Tweening_Plugins_StringPluginExtensions__AppendScrambledChars(plVar6,uVar3 - uVar2,uVar8);
      goto joined_r0x0456a070;
    }
    uVar1 = uVar2;
    if (0 < (int)(iVar11 - uVar3)) {
      fVar13 = ((float)(int)uVar2 / (float)(int)uVar3) * (float)iVar11;
      uVar1 = 0x80000000;
      if (fVar13 != INFINITY) {
        uVar1 = (int)fVar13;
      }
    }
    uVar8 = DG_Tweening_Plugins_StringPlugin__Append();
    if (((int)uVar2 < (int)uVar3) && ((int)uVar2 < iVar11)) {
      if (param_3 == 0) goto LAB_0456a178;
      DG_Tweening_Plugins_StringPlugin__Append
                (uVar8,param_9,uVar2,(iVar11 - uVar1) + (-(*param_4 & 1) & uVar2),*param_4 & 1);
    }
    if (*(int *)(DAT_0918b3d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar6 = (long *)**(long **)(DAT_0918b3d8 + 0xb8);
    if (plVar6 == (long *)0x0) goto LAB_0456a178;
    lVar12 = *plVar6;
  }
  else {
    if (*(int *)(DAT_0918b3d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_0918b3d8 + 0xb8) == 0) goto LAB_0456a178;
    uVar8 = System_Text_StringBuilder__Append(**(long **)(DAT_0918b3d8 + 0xb8),param_9,0);
    iVar11 = *(int *)(param_4 + 4);
    plVar6 = (long *)DG_Tweening_Plugins_StringPlugin__Append(uVar8,param_10,0,uVar2,*param_4 & 1);
    if (iVar11 != 0) {
      uStack_98 = *(undefined8 *)(param_4 + 8);
      local_a0 = *(undefined8 *)param_4;
      local_90 = *(undefined8 *)(param_4 + 0x10);
      puVar9 = &local_a0;
      goto LAB_0456a03c;
    }
joined_r0x0456a070:
    if (plVar6 == (long *)0x0) goto LAB_0456a178;
    lVar12 = *plVar6;
  }
  uVar8 = (**(code **)(lVar12 + 0x168))(plVar6,*(undefined8 *)(lVar12 + 0x170));
  if (param_8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0456a174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_8 + 0x18))
              (*(undefined8 *)(param_8 + 0x40),uVar8,*(undefined8 *)(param_8 + 0x28));
    return;
  }
LAB_0456a178:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


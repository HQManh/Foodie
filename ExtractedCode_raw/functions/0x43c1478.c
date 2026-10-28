// rea decompile_all
// name: ChocDino.UIFX.UIToolkitTextSource$$ApplyTextSettings
// address: 0x43c1478
// body: available
// range: 0x43c1478-0x43c28a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c28a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_UIToolkitTextSource__ApplyTextSettings(long param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 local_80 [12];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_09517b86 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186760);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bbbb0);
    FUN_03f5c2a4(&DAT_091bba98);
    FUN_03f5c2a4(&DAT_091bbb10);
    FUN_03f5c2a4(&DAT_091bbae8);
    FUN_03f5c2a4(&DAT_091bb9f0);
    DAT_09517b86 = 1;
  }
  local_80._8_4_ = 0;
  local_80._0_8_ = 0;
  if (*(long *)(param_1 + 0x188) == 0) {
    return;
  }
  lVar8 = UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  if (lVar8 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  uVar10 = FUN_061ddeac(*(undefined4 *)(param_1 + 0x15c),DAT_091bbb10);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0xa1) * 0x10 + 0x138);
        goto LAB_043c15a4;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0xa1);
LAB_043c15a4:
  (*(code *)*puVar11)(plVar9,uVar10,puVar11[1]);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  uVar10 = FUN_061ddeac(*(undefined4 *)(param_1 + 0x104),DAT_091bbae8);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x9d) * 0x10 + 0x138);
        goto LAB_043c1638;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x9d);
LAB_043c1638:
  (*(code *)*puVar11)(plVar9,uVar10,puVar11[1]);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  uVar10 = FUN_061ddeac(*(undefined4 *)(param_1 + 0x108),DAT_091bbbb0);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0xab) * 0x10 + 0x138);
        goto LAB_043c16cc;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0xab);
LAB_043c16cc:
  (*(code *)*puVar11)(plVar9,uVar10,puVar11[1]);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  uVar10 = FUN_061ddeac(*(undefined4 *)(param_1 + 0x110),DAT_091bb9f0);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x89) * 0x10 + 0x138);
        goto LAB_043c1760;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x89);
LAB_043c1760:
  (*(code *)*puVar11)(plVar9,uVar10,puVar11[1]);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit(*(undefined4 *)(param_1 + 0xf0),0);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x41) * 0x10 + 0x138);
        goto LAB_043c17ec;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x41);
LAB_043c17ec:
  (*(code *)*puVar11)(plVar9,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit(*(undefined4 *)(param_1 + 0x150),0);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0xaf) * 0x10 + 0x138);
        goto LAB_043c187c;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0xaf);
LAB_043c187c:
  (*(code *)*puVar11)(plVar9,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit(*(undefined4 *)(param_1 + 0x14c),0);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x49) * 0x10 + 0x138);
        goto LAB_043c190c;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x49);
LAB_043c190c:
  (*(code *)*puVar11)(plVar9,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit(*(undefined4 *)(param_1 + 0x154),0);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x8f) * 0x10 + 0x138);
        goto LAB_043c199c;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x8f);
LAB_043c199c:
  (*(code *)*puVar11)(plVar9,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  uVar10 = FUN_061ddeac(*(undefined4 *)(param_1 + 0x104),DAT_091bbae8);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x9d) * 0x10 + 0x138);
        goto LAB_043c1a2c;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x9d);
LAB_043c1a2c:
  (*(code *)*puVar11)(plVar9,uVar10,puVar11[1]);
  auVar1._8_4_ = local_80._8_4_;
  auVar1._0_8_ = local_80._0_8_;
  lVar8 = *(long *)(param_1 + 0x188);
  if (*(char *)(param_1 + 0x114) == '\0') {
    if (lVar8 == 0) goto LAB_043c28a4;
    plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
    uVar10 = UnityEngine_UIElements_StyleFloat__op_Implicit(0,0);
    if (plVar9 == (long *)0x0) goto LAB_043c28a4;
    lVar8 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_09186760) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0xa5) * 0x10 + 0x138);
          goto LAB_043c1bfc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0xa5);
LAB_043c1bfc:
    (*(code *)*puVar11)(plVar9,uVar10,puVar11[1]);
  }
  else {
    local_80 = auVar1;
    if (lVar8 == 0) goto LAB_043c28a4;
    plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
    uVar10 = UnityEngine_UIElements_StyleFloat__op_Implicit(*(undefined4 *)(param_1 + 0x118),0);
    if (plVar9 == (long *)0x0) goto LAB_043c28a4;
    lVar8 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_09186760) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0xa5) * 0x10 + 0x138);
          goto LAB_043c1b20;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0xa5);
LAB_043c1b20:
    (*(code *)*puVar11)(plVar9,uVar10,puVar11[1]);
    if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
    plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
    UnityEngine_UIElements_StyleColor__op_Implicit
              (&local_c0,*(undefined4 *)(param_1 + 0x11c),*(undefined4 *)(param_1 + 0x120),
               *(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x128),0);
    if (plVar9 == (long *)0x0) goto LAB_043c28a4;
    lVar8 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uStack_98 = uStack_b8;
    local_a0 = local_c0;
    local_90 = (undefined4)local_b0;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_09186760) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0xa3) * 0x10 + 0x138);
          goto LAB_043c1bc4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0xa3);
LAB_043c1bc4:
    uStack_68 = uStack_98;
    local_70 = local_a0;
    local_60 = CONCAT44(local_60._4_4_,local_90);
    (*(code *)*puVar11)(plVar9,&local_70,puVar11[1]);
  }
  auVar2._8_4_ = local_80._8_4_;
  auVar2._0_8_ = local_80._0_8_;
  if (*(char *)(param_1 + 300) == '\0') {
    if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
    plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
    uStack_10c = *(undefined8 *)(param_1 + 0x1c8);
    local_120 = *(undefined8 *)(param_1 + 0x1b4);
    uStack_118 = (undefined4)*(undefined8 *)(param_1 + 0x1bc);
    uStack_114 = (undefined4)*(undefined8 *)(param_1 + 0x1c0);
    uStack_110 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1c0) >> 0x20);
    UnityEngine_UIElements_StyleTextShadow__op_Implicit(&local_c0,&local_120,0);
    uVar14 = local_b0;
    uVar21 = uStack_b8;
    uVar10 = local_c0;
    if (plVar9 == (long *)0x0) goto LAB_043c28a4;
    lVar8 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_09186760) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x71) * 0x10 + 0x138);
          local_70 = uVar10;
          uStack_68 = uVar21;
          local_60 = uVar14;
          goto LAB_043c1d64;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x71);
    local_70 = uVar10;
    uStack_68 = uVar21;
    local_60 = uVar14;
  }
  else {
    *(undefined8 *)(param_1 + 0x1ac) = *(undefined8 *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x1a4) = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x140);
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x148);
    local_80 = auVar2;
    if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
    plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
    local_e0 = *(undefined8 *)(param_1 + 0x198);
    uStack_cc = *(undefined8 *)(param_1 + 0x1ac);
    uStack_d8 = (undefined4)*(undefined8 *)(param_1 + 0x1a0);
    uStack_d4 = (undefined4)*(undefined8 *)(param_1 + 0x1a4);
    uStack_d0 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1a4) >> 0x20);
    UnityEngine_UIElements_StyleTextShadow__op_Implicit(&local_c0,&local_e0,0);
    if (plVar9 == (long *)0x0) goto LAB_043c28a4;
    lVar8 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uStack_f8 = uStack_b8;
    local_100 = local_c0;
    uStack_e8 = uStack_a8;
    uStack_f0 = local_b0;
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_09186760) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x71) * 0x10 + 0x138);
          local_70 = local_c0;
          uStack_68 = uStack_b8;
          local_60 = local_b0;
          goto LAB_043c1d64;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x71);
    local_70 = local_100;
    uStack_68 = uStack_f8;
    local_60 = uStack_f0;
    uStack_a8 = uStack_e8;
  }
LAB_043c1d64:
  uStack_58 = uStack_a8;
  (*(code *)*puVar11)(plVar9,&local_70,puVar11[1]);
  plVar9 = *(long **)(param_1 + 0x188);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  (**(code **)(*plVar9 + 0xe38))
            (plVar9,*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(*plVar9 + 0xe40));
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  fVar22 = *(float *)(param_1 + 0xf8);
  UnityEngine_UIElements_StyleColor__op_Implicit
            (&local_c0,*(undefined4 *)(param_1 + 0xf4),fVar22,*(undefined4 *)(param_1 + 0xfc),
             *(undefined4 *)(param_1 + 0x100),0);
  uVar21 = uStack_b8;
  uVar10 = local_c0;
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar17 = (undefined4)local_b0;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x2f) * 0x10 + 0x138);
        goto LAB_043c1e24;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x2f);
LAB_043c1e24:
  uStack_68 = uVar21;
  local_70 = uVar10;
  local_60 = CONCAT44(local_60._4_4_,uVar17);
  (*(code *)*puVar11)(plVar9,&local_70,puVar11[1]);
  uVar10 = *(undefined8 *)(param_1 + 0xe8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar15 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  auVar3._8_4_ = local_80._8_4_;
  auVar3._0_8_ = local_80._0_8_;
  lVar8 = *(long *)(param_1 + 0x188);
  if ((uVar15 & 1) == 0) {
    if (lVar8 == 0) goto LAB_043c28a4;
    plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    UnityEngine_UIElements_StyleFontDefinition___ctor(&local_c0,*(undefined8 *)(param_1 + 0xe0),0);
    uVar14 = local_b0;
    uVar21 = uStack_b8;
    uVar10 = local_c0;
    if (plVar9 == (long *)0x0) goto LAB_043c28a4;
    lVar8 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_09186760) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x87) * 0x10 + 0x138);
          goto LAB_043c1fac;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x87);
  }
  else {
    local_80 = auVar3;
    if (lVar8 == 0) goto LAB_043c28a4;
    plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    UnityEngine_UIElements_StyleFontDefinition___ctor(&local_c0,*(undefined8 *)(param_1 + 0xe8),0);
    uVar14 = local_b0;
    uVar21 = uStack_b8;
    uVar10 = local_c0;
    if (plVar9 == (long *)0x0) goto LAB_043c28a4;
    lVar8 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_09186760) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x87) * 0x10 + 0x138);
          goto LAB_043c1fac;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x87);
  }
LAB_043c1fac:
  local_70 = uVar10;
  uStack_68 = uVar21;
  local_60 = uVar14;
  (*(code *)*puVar11)(plVar9,&local_70,puVar11[1]);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_043c28a4;
  UnityEngine_RectTransform__get_sizeDelta(*(long *)(param_1 + 0x1d0),0);
  auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit(0);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0xad) * 0x10 + 0x138);
        goto LAB_043c2054;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0xad);
LAB_043c2054:
  (*(code *)*puVar11)(plVar9,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_043c28a4;
  UnityEngine_RectTransform__get_sizeDelta(*(long *)(param_1 + 0x1d0),0);
  auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit(fVar22,0);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x43) * 0x10 + 0x138);
        goto LAB_043c20f8;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x43);
LAB_043c20f8:
  (*(code *)*puVar11)(plVar9,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  uVar10 = FUN_061ddeac(0,DAT_091bba98);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x67) * 0x10 + 0x138);
        goto LAB_043c218c;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x67);
LAB_043c218c:
  (*(code *)*puVar11)(plVar9,uVar10,puVar11[1]);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit(2,0);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x47) * 0x10 + 0x138);
        goto LAB_043c2218;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x47);
LAB_043c2218:
  (*(code *)*puVar11)(plVar9,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit(2,0);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x73) * 0x10 + 0x138);
        goto LAB_043c22a8;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x73);
LAB_043c22a8:
  (*(code *)*puVar11)(plVar9,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit(2,0);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x69) * 0x10 + 0x138);
        goto LAB_043c2338;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x69);
LAB_043c2338:
  (*(code *)*puVar11)(plVar9,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar11[1]);
  if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
  plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
  auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit(2,0);
  if (plVar9 == (long *)0x0) goto LAB_043c28a4;
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_09186760) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x2d) * 0x10 + 0x138);
        goto LAB_043c23c8;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x2d);
LAB_043c23c8:
  (*(code *)*puVar11)(plVar9,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar11[1]);
  if ((*(int *)(param_1 + 0x108) != 0) && (*(int *)(param_1 + 0x108) != 3)) {
    plVar9 = *(long **)(param_1 + 0x188);
    if (plVar9 == (long *)0x0) goto LAB_043c28a4;
    uVar10 = (**(code **)(*plVar9 + 0xe28))(plVar9,*(undefined8 *)(*plVar9 + 0xe30));
    if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_043c28a4;
    uVar17 = UnityEngine_RectTransform__get_sizeDelta(*(long *)(param_1 + 0x1d0),0);
    if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_043c28a4;
    UnityEngine_RectTransform__get_sizeDelta(*(long *)(param_1 + 0x1d0),0);
    fVar18 = (float)UnityEngine_UIElements_TextElement__MeasureTextSize(uVar17,plVar9,uVar10,0,0,0);
    auVar7._8_4_ = local_80._8_4_;
    auVar7._0_8_ = local_80._0_8_;
    auVar4._8_4_ = local_80._8_4_;
    auVar4._0_8_ = local_80._0_8_;
    uVar13 = *(uint *)(param_1 + 0x104);
    fVar23 = fVar22;
    if (uVar13 < 9) {
      uVar13 = 1 << (ulong)(uVar13 & 0x1f);
      if ((uVar13 & 0x49) == 0) {
        if ((uVar13 & 0x92) == 0) {
          local_80 = auVar7;
          if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
          plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style
                                     (*(long *)(param_1 + 0x188),0);
          if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_043c28a4;
          fVar20 = (float)UnityEngine_RectTransform__get_sizeDelta(*(long *)(param_1 + 0x1d0),0);
          fVar23 = 0.0;
          fVar19 = 0.0;
          if (fVar18 - fVar20 <= 0.0) {
            fVar19 = fVar18 - fVar20;
          }
          auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit(fVar19,0);
          if (plVar9 == (long *)0x0) goto LAB_043c28a4;
          lVar8 = *plVar9;
          uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == DAT_09186760) goto LAB_043c25ec;
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
        }
        else {
          local_80 = auVar4;
          if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
          plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style
                                     (*(long *)(param_1 + 0x188),0);
          if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_043c28a4;
          fVar19 = (float)UnityEngine_RectTransform__get_sizeDelta(*(long *)(param_1 + 0x1d0),0);
          fVar23 = 0.5;
          auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit((fVar18 - fVar19) * 0.5,0);
          if (plVar9 == (long *)0x0) goto LAB_043c28a4;
          lVar8 = *plVar9;
          uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == DAT_09186760) goto LAB_043c25ec;
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
        }
      }
      else {
        if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
        plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style
                                   (*(long *)(param_1 + 0x188),0);
        auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit(0,0);
        if (plVar9 == (long *)0x0) goto LAB_043c28a4;
        lVar8 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == DAT_09186760) goto LAB_043c25ec;
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
      }
      puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x47);
      goto LAB_043c25fc;
    }
    goto LAB_043c2614;
  }
LAB_043c2760:
  if (*(long *)(param_1 + 0x188) != 0) {
    plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
    if (*(long *)(param_1 + 0x188) != 0) {
      plVar12 = (long *)UnityEngine_UIElements_VisualElement__get_style
                                  (*(long *)(param_1 + 0x188),0);
      if (plVar12 != (long *)0x0) {
        lVar8 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == DAT_09186760) {
              puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x46) * 0x10 + 0x138);
              goto LAB_043c27e0;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09186760,0x46);
LAB_043c27e0:
        local_80 = (*(code *)*puVar11)(plVar12,puVar11[1]);
        fVar22 = (float)UnityEngine_UIElements_StyleLength__get_value(local_80,0);
        auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit
                            (fVar22 + (float)*(int *)(param_1 + 0x158),0);
        if (plVar9 != (long *)0x0) {
          lVar8 = *plVar9;
          uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == DAT_09186760) {
                puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x47) * 0x10 + 0x138);
                goto LAB_043c2874;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x47);
LAB_043c2874:
          (*(code *)*puVar11)(plVar9,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar11[1]);
          return;
        }
      }
    }
  }
LAB_043c28a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_043c25ec:
  puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x47) * 0x10 + 0x138);
LAB_043c25fc:
  (*(code *)*puVar11)(plVar9,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar11[1]);
  uVar13 = *(uint *)(param_1 + 0x104);
LAB_043c2614:
  auVar6._8_4_ = local_80._8_4_;
  auVar6._0_8_ = local_80._0_8_;
  auVar5._8_4_ = local_80._8_4_;
  auVar5._0_8_ = local_80._0_8_;
  if (uVar13 < 9) {
    uVar13 = 1 << (ulong)(uVar13 & 0x1f);
    if ((uVar13 & 7) == 0) {
      if ((uVar13 & 0x38) == 0) {
        local_80 = auVar6;
        if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
        lVar8 = UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
        if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_043c28a4;
        UnityEngine_RectTransform__get_sizeDelta(*(long *)(param_1 + 0x1d0),0);
        fVar22 = fVar22 - fVar23;
      }
      else {
        local_80 = auVar5;
        if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
        lVar8 = UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0);
        if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_043c28a4;
        UnityEngine_RectTransform__get_sizeDelta(*(long *)(param_1 + 0x1d0),0);
        fVar22 = (fVar22 - fVar23) * 0.5;
      }
      fVar23 = 0.0;
      if (0.0 <= fVar22) {
        fVar23 = fVar22;
      }
      auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit(fVar23,0);
      if (lVar8 == 0) goto LAB_043c28a4;
      FUN_039b7bd4(0x73,DAT_09186760,lVar8,auVar24._0_8_,auVar24._8_8_ & 0xffffffff);
    }
    else {
      if (*(long *)(param_1 + 0x188) == 0) goto LAB_043c28a4;
      plVar9 = (long *)UnityEngine_UIElements_VisualElement__get_style(*(long *)(param_1 + 0x188),0)
      ;
      auVar24 = UnityEngine_UIElements_StyleLength__op_Implicit(0,0);
      if (plVar9 == (long *)0x0) goto LAB_043c28a4;
      lVar8 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == DAT_09186760) {
            puVar11 = (undefined8 *)(lVar8 + (long)(*piVar16 + 0x73) * 0x10 + 0x138);
            goto LAB_043c274c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186760,0x73);
LAB_043c274c:
      (*(code *)*puVar11)(plVar9,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar11[1]);
    }
  }
  goto LAB_043c2760;
}


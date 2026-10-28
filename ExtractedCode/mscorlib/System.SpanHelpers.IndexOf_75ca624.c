// rea decompile_all
// name: System.SpanHelpers$$IndexOf
// address: 0x75ca624
// body: available
// range: 0x75ca624-0x75cac8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75cac88 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_SpanHelpers__IndexOf(ushort *param_1,uint param_2,ulong param_3)

{
  ushort *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ushort *puVar13;
  ulong uVar14;
  ushort *puVar15;
  undefined1 auVar16 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  uVar14 = param_3 & 0xffffffff;
  local_68 = *(long *)(lVar5 + 0x28);
  if ((DAT_09521dca & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf068);
    FUN_03f5c2a4(&DAT_091bf060);
    FUN_03f5c2a4(&DAT_091bf070);
    FUN_03f5c2a4(&DAT_091bf078);
    FUN_03f5c2a4(&DAT_0917f888);
    FUN_03f5c2a4(&DAT_091debc0);
    DAT_09521dca = 1;
  }
  local_70 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uVar9 = System_Numerics_Vector__get_IsHardwareAccelerated(0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(DAT_0917f888 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar11 = DAT_091bf070;
    lVar10 = *(long *)(DAT_091bf070 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar11 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c();
    }
    if (**(int **)(lVar11 + 0xb8) * 2 <= (int)param_3) {
      if (*(int *)(DAT_0917f888 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = DAT_091bf070;
      lVar10 = *(long *)(DAT_091bf070 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = *(long *)(lVar11 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar10 = DAT_091bf070;
      lVar12 = *(long *)(DAT_091bf070 + 0x20);
      iVar8 = **(int **)(lVar11 + 0xb8);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c(lVar12);
      }
      lVar11 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      uVar14 = (ulong)(**(int **)(lVar11 + 0xb8) - 1U & iVar8 - ((uint)param_1 >> 1 & 7));
    }
  }
  puVar1 = param_1 + (int)param_3;
  puVar15 = param_1;
LAB_075ca88c:
  while (iVar8 = (int)uVar14, puVar13 = puVar15, 3 < iVar8) {
    if (((uint)*puVar15 == (param_2 & 0xffff)) ||
       (puVar13 = puVar15 + 1, (uint)*puVar13 == (param_2 & 0xffff))) goto LAB_075cac44;
    if ((uint)puVar15[2] == (param_2 & 0xffff)) goto LAB_075cac40;
    if ((uint)puVar15[3] == (param_2 & 0xffff)) goto LAB_075cac3c;
    puVar15 = puVar15 + 4;
    uVar14 = (ulong)(iVar8 - 4);
  }
  if (0 < iVar8) {
    iVar8 = iVar8 + 1;
    do {
      if ((uint)*puVar13 == (param_2 & 0xffff)) goto LAB_075cac44;
      iVar8 = iVar8 + -1;
      puVar15 = puVar13 + 1;
      puVar13 = puVar15;
    } while (1 < iVar8);
  }
  uVar14 = System_Numerics_Vector__get_IsHardwareAccelerated(0);
  if (((uVar14 & 1) != 0) &&
     (uVar14 = (long)puVar1 - (long)puVar15, puVar15 <= puVar1 && uVar14 != 0)) {
    if (*(int *)(DAT_0917f888 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar11 = DAT_091bf070;
    lVar10 = *(long *)(DAT_091bf070 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar11 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c();
    }
    if ((long)uVar14 < 0) {
      uVar14 = uVar14 + 1;
    }
    iVar8 = **(int **)(lVar11 + 0xb8);
    FUN_067aa900(&local_78,param_2,DAT_091bf060);
    uVar6 = local_78;
    uVar7 = local_70;
    for (uVar2 = -iVar8 & (uint)(uVar14 >> 1); lVar11 = DAT_091debc0, local_78 = uVar6,
        local_70 = uVar7, 0 < (int)uVar2; uVar2 = uVar2 - **(int **)(lVar11 + 0xb8)) {
      uVar3 = *(undefined8 *)puVar15;
      uVar4 = *(undefined8 *)(puVar15 + 4);
      lVar10 = *(long *)(DAT_091debc0 + 0x38);
      if (lVar10 == 0) {
        FUN_03f95ac8(DAT_091debc0);
        lVar10 = *(long *)(lVar11 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar16 = FUN_04e66164(uVar6,uVar7,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 8));
      if (*(int *)(DAT_0917f888 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = DAT_091bf078;
      lVar10 = *(long *)(DAT_091bf078 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = *(long *)(lVar11 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      uStack_88 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10);
      local_90 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8);
      uVar14 = FUN_067ae4dc(&local_90,auVar16._0_8_,auVar16._8_8_,DAT_091bf068);
      if ((uVar14 & 1) == 0) {
        iVar8 = FUN_075dd3b4(auVar16._0_8_,auVar16._8_8_,0);
        uVar14 = (long)puVar15 - (long)param_1;
        if ((long)uVar14 < 0) {
          uVar14 = uVar14 + 1;
        }
        uVar14 = (ulong)(uint)(iVar8 + (int)(uVar14 >> 1));
        goto LAB_075cac58;
      }
      if (*(int *)(DAT_0917f888 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = DAT_091bf070;
      lVar10 = *(long *)(DAT_091bf070 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = *(long *)(lVar11 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar10 = DAT_091bf070;
      lVar12 = *(long *)(DAT_091bf070 + 0x20);
      iVar8 = **(int **)(lVar11 + 0xb8);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f95a6c(lVar12);
      }
      lVar11 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      puVar15 = puVar15 + iVar8;
      uVar6 = local_78;
      uVar7 = local_70;
    }
    uVar14 = (long)puVar1 - (long)puVar15;
    if (puVar15 <= puVar1 && uVar14 != 0) {
      if ((long)uVar14 < 0) {
        uVar14 = uVar14 + 1;
      }
      uVar14 = uVar14 >> 1;
      goto LAB_075ca88c;
    }
  }
  uVar14 = 0xffffffff;
  goto LAB_075cac58;
LAB_075cac3c:
  puVar13 = puVar15 + 2;
LAB_075cac40:
  puVar13 = puVar13 + 1;
LAB_075cac44:
  uVar14 = (long)puVar13 - (long)param_1;
  if ((long)uVar14 < 0) {
    uVar14 = uVar14 + 1;
  }
  uVar14 = uVar14 >> 1;
LAB_075cac58:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar14);
}


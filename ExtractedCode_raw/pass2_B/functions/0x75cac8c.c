// rea decompile_all
// name: System.SpanHelpers$$LastIndexOf
// address: 0x75cac8c
// body: available
// range: 0x75cac8c-0x75cb297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75cb294 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_SpanHelpers__LastIndexOf(ushort *param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ushort *puVar12;
  ulong uVar13;
  ushort *puVar14;
  undefined1 auVar15 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  uVar13 = param_3 & 0xffffffff;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((DAT_09521dcb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf068);
    FUN_03f5c2a4(&DAT_091bf060);
    FUN_03f5c2a4(&DAT_091bf070);
    FUN_03f5c2a4(&DAT_091bf078);
    FUN_03f5c2a4(&DAT_0917f888);
    FUN_03f5c2a4(&DAT_091debc0);
    DAT_09521dcb = 1;
  }
  local_70 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  puVar14 = param_1 + (int)param_3;
  uVar8 = System_Numerics_Vector__get_IsHardwareAccelerated(0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(DAT_0917f888 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar10 = DAT_091bf070;
    lVar9 = *(long *)(DAT_091bf070 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar10 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    if (**(int **)(lVar10 + 0xb8) * 2 <= (int)param_3) {
      uVar13 = (ulong)((uint)puVar14 >> 1 & 7);
    }
  }
LAB_075caddc:
  while (iVar7 = (int)uVar13, 3 < iVar7) {
    puVar12 = puVar14 + -4;
    if ((uint)puVar14[-1] == (param_2 & 0xffff)) {
      uVar13 = (long)puVar12 - (long)param_1;
      if ((long)uVar13 < 0) {
        uVar13 = uVar13 + 1;
      }
      uVar13 = (ulong)((int)(uVar13 >> 1) + 3);
      goto LAB_075cb260;
    }
    if ((uint)puVar14[-2] == (param_2 & 0xffff)) {
      uVar13 = (long)puVar12 - (long)param_1;
      if ((long)uVar13 < 0) {
        uVar13 = uVar13 + 1;
      }
      uVar13 = (ulong)((int)(uVar13 >> 1) + 2);
      goto LAB_075cb260;
    }
    if ((uint)puVar14[-3] == (param_2 & 0xffff)) {
      uVar13 = (long)puVar12 - (long)param_1;
      if ((long)uVar13 < 0) {
        uVar13 = uVar13 + 1;
      }
      uVar13 = (ulong)((int)(uVar13 >> 1) + 1);
      goto LAB_075cb260;
    }
    uVar13 = (ulong)(iVar7 - 4);
    puVar14 = puVar12;
    if ((uint)*puVar12 == (param_2 & 0xffff)) {
LAB_075cb1c4:
      uVar13 = (long)puVar12 - (long)param_1;
      if ((long)uVar13 < 0) {
        uVar13 = uVar13 + 1;
      }
      uVar13 = uVar13 >> 1;
LAB_075cb260:
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar13);
    }
  }
  iVar7 = iVar7 + 1;
  puVar12 = puVar14;
  while (iVar7 = iVar7 + -1, 0 < iVar7) {
    puVar12 = puVar12 + -1;
    if ((uint)*puVar12 == (param_2 & 0xffff)) goto LAB_075cb1c4;
  }
  uVar13 = System_Numerics_Vector__get_IsHardwareAccelerated(0);
  if (((uVar13 & 1) != 0) &&
     (uVar13 = (long)puVar12 - (long)param_1, param_1 <= puVar12 && uVar13 != 0)) {
    if (*(int *)(DAT_0917f888 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar10 = DAT_091bf070;
    lVar9 = *(long *)(DAT_091bf070 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar10 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    if ((long)uVar13 < 0) {
      uVar13 = uVar13 + 1;
    }
    iVar7 = **(int **)(lVar10 + 0xb8);
    FUN_067aa900(&local_78,param_2,DAT_091bf060);
    puVar14 = puVar12;
    for (uVar1 = -iVar7 & (uint)(uVar13 >> 1); 0 < (int)uVar1;
        uVar1 = uVar1 - **(int **)(lVar10 + 0xb8)) {
      if (*(int *)(DAT_0917f888 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = DAT_091bf070;
      lVar9 = *(long *)(DAT_091bf070 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      uVar6 = local_70;
      uVar5 = local_78;
      lVar9 = DAT_091debc0;
      puVar12 = puVar14 + -(long)**(int **)(lVar10 + 0xb8);
      uVar2 = *(undefined8 *)puVar12;
      uVar3 = *(undefined8 *)(puVar12 + 4);
      lVar10 = *(long *)(DAT_091debc0 + 0x38);
      if (lVar10 == 0) {
        FUN_03f95ac8(DAT_091debc0);
        lVar10 = *(long *)(lVar9 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar15 = FUN_04e66164(uVar5,uVar6,uVar2,uVar3,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 8));
      lVar10 = DAT_091bf078;
      lVar9 = *(long *)(DAT_091bf078 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      uStack_88 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
      local_90 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
      uVar13 = FUN_067ae4dc(&local_90,auVar15._0_8_,auVar15._8_8_,DAT_091bf068);
      if ((uVar13 & 1) == 0) {
        iVar7 = FUN_075dd5a4(auVar15._0_8_,auVar15._8_8_,0);
        uVar13 = (long)puVar12 - (long)param_1;
        if ((long)uVar13 < 0) {
          uVar13 = uVar13 + 1;
        }
        uVar13 = (ulong)(uint)(iVar7 + (int)(uVar13 >> 1));
        goto LAB_075cb260;
      }
      if (*(int *)(DAT_0917f888 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = DAT_091bf070;
      lVar9 = *(long *)(DAT_091bf070 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      lVar9 = DAT_091bf070;
      lVar11 = *(long *)(DAT_091bf070 + 0x20);
      iVar7 = **(int **)(lVar10 + 0xb8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c(lVar11);
      }
      lVar10 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = *(long *)(lVar9 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      puVar14 = puVar14 + -(long)iVar7;
    }
    uVar13 = (long)puVar14 - (long)param_1;
    if (param_1 <= puVar14 && uVar13 != 0) {
      if ((long)uVar13 < 0) {
        uVar13 = uVar13 + 1;
      }
      uVar13 = uVar13 >> 1;
      goto LAB_075caddc;
    }
  }
  uVar13 = 0xffffffff;
  goto LAB_075cb260;
}


// rea decompile_all
// name: _GAME.R1HomeFlow.<Check>d__2$$MoveNext
// address: 0x773befc
// body: available
// range: 0x773befc-0x773ddaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x773ddac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0773ddac) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_R1HomeFlow_<Check>d__2__MoveNext(uint *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 local_60 [16];
  uint local_44;
  undefined1 local_40 [16];
  
  if ((DAT_09522ad1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c2d98);
    FUN_03f5c2a4(&DAT_091cb8d8);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_09189938);
    FUN_03f5c2a4(&DAT_09189940);
    FUN_03f5c2a4(&DAT_091eecd0);
    FUN_03f5c2a4(&DAT_091eecd8);
    FUN_03f5c2a4(&DAT_091eece0);
    FUN_03f5c2a4(&DAT_091eece8);
    FUN_03f5c2a4(&DAT_091eecf0);
    FUN_03f5c2a4(&DAT_091eecf8);
    FUN_03f5c2a4(&DAT_091eed00);
    FUN_03f5c2a4(&DAT_091eed08);
    FUN_03f5c2a4(&DAT_09193898);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_091df318);
    DAT_09522ad1 = 1;
  }
  local_44 = *param_1;
  local_60._8_8_ = 0;
  local_60._0_8_ = 0;
  if (0xb < local_44) {
    auVar9 = ZEXT816(0);
    if (**(char **)(DAT_09189940 + 0xb8) != '\0') goto LAB_0773dd84;
    if (*(int *)(DAT_09189938 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522bd9 == '\0') {
      FUN_03f5c2a4(&DAT_09189938);
      DAT_09522bd9 = '\x01';
    }
    if (*(int *)(DAT_09189938 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar9._8_8_ = local_60._8_8_;
    auVar9._0_8_ = local_60._0_8_;
    if (*(char *)(*(long *)(DAT_09189938 + 0xb8) + 8) == '\0') goto LAB_0773dd84;
    **(undefined1 **)(DAT_09189940 + 0xb8) = 1;
    _GAME_R1HomeFlow__LockTabsIfTabTutorialPending();
  }
  if (5 < (int)local_44) {
    if ((int)local_44 < 9) {
      if (local_44 == 6) {
        local_60 = *(undefined1 (*) [16])(param_1 + 10);
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        local_44 = 0xffffffff;
        *param_1 = 0xffffffff;
        goto LAB_0773d044;
      }
      if (local_44 == 7) {
        local_60 = *(undefined1 (*) [16])(param_1 + 10);
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        local_44 = 0xffffffff;
        *param_1 = 0xffffffff;
        goto LAB_0773d2a0;
      }
      if (local_44 != 8) goto LAB_0773c270;
      local_60 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      local_44 = 0xffffffff;
      *param_1 = 0xffffffff;
      goto LAB_0773d4fc;
    }
    if (local_44 == 9) {
      local_60 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      local_44 = 0xffffffff;
      *param_1 = 0xffffffff;
      goto LAB_0773d758;
    }
    if (local_44 == 10) {
      local_60 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      local_44 = 0xffffffff;
      *param_1 = 0xffffffff;
      goto LAB_0773d960;
    }
    if (local_44 != 0xb) goto LAB_0773c270;
    local_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    local_44 = 0xffffffff;
    *param_1 = 0xffffffff;
    goto LAB_0773dbbc;
  }
  if (2 < (int)local_44) {
    if (local_44 == 3) {
      local_60 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      local_44 = 0xffffffff;
      *param_1 = 0xffffffff;
      goto LAB_0773c930;
    }
    if (local_44 == 4) {
      local_60 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      local_44 = 0xffffffff;
      *param_1 = 0xffffffff;
      goto LAB_0773cb8c;
    }
    if (local_44 != 5) goto LAB_0773c270;
    local_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    local_44 = 0xffffffff;
    *param_1 = 0xffffffff;
    goto LAB_0773cde8;
  }
  if (local_44 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    local_44 = 0xffffffff;
    *param_1 = 0xffffffff;
    goto LAB_0773c3a0;
  }
  if (local_44 == 1) {
    local_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    local_44 = 0xffffffff;
    *param_1 = 0xffffffff;
    goto LAB_0773c54c;
  }
  if (local_44 == 2) {
    local_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    local_44 = 0xffffffff;
    *param_1 = 0xffffffff;
LAB_0773c714:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0773c798;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0773c798:
      (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
    }
    if (*(int *)(DAT_09193898 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
    lVar4 = puVar2[1];
    if (lVar4 == 0) {
      if (*(int *)(DAT_09193898 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
      }
      uVar8 = *puVar2;
      lVar4 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(lVar4,uVar8,DAT_091eecd0,0);
      plVar3 = (long *)(*(long *)(DAT_09193898 + 0xb8) + 8);
      *plVar3 = lVar4;
      thunk_FUN_03f5d7b8(plVar3,lVar4);
    }
    auVar9 = _GAME_R1HomeFlow__Step(1,lVar4);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = auVar9;
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0773c91c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0773c91c:
      iVar1 = (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
      if (iVar1 == 0) {
        local_44 = 3;
        *param_1 = 3;
        *(undefined1 (*) [16])(param_1 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049ca828(param_1 + 2,local_60,param_1,DAT_091c2d98);
        goto LAB_0773dd50;
      }
    }
LAB_0773c930:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0773c9f4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0773c9f4:
      (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
    }
    if (*(int *)(DAT_09193898 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
    lVar4 = puVar2[2];
    if (lVar4 == 0) {
      if (*(int *)(DAT_09193898 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
      }
      uVar8 = *puVar2;
      lVar4 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(lVar4,uVar8,DAT_091eecd8,0);
      plVar3 = (long *)(*(long *)(DAT_09193898 + 0xb8) + 0x10);
      *plVar3 = lVar4;
      thunk_FUN_03f5d7b8(plVar3,lVar4);
    }
    auVar9 = _GAME_R1HomeFlow__Step(2,lVar4);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = auVar9;
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0773cb78;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0773cb78:
      iVar1 = (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
      if (iVar1 == 0) {
        local_44 = 4;
        *param_1 = 4;
        *(undefined1 (*) [16])(param_1 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049ca828(param_1 + 2,local_60,param_1,DAT_091c2d98);
        goto LAB_0773dd50;
      }
    }
LAB_0773cb8c:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0773cc50;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0773cc50:
      (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
    }
    if (*(int *)(DAT_09193898 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
    lVar4 = puVar2[3];
    if (lVar4 == 0) {
      if (*(int *)(DAT_09193898 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
      }
      uVar8 = *puVar2;
      lVar4 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(lVar4,uVar8,DAT_091eece0,0);
      plVar3 = (long *)(*(long *)(DAT_09193898 + 0xb8) + 0x18);
      *plVar3 = lVar4;
      thunk_FUN_03f5d7b8(plVar3,lVar4);
    }
    auVar9 = _GAME_R1HomeFlow__Step(2,lVar4);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = auVar9;
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0773cdd4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0773cdd4:
      iVar1 = (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
      if (iVar1 == 0) {
        local_44 = 5;
        *param_1 = 5;
        *(undefined1 (*) [16])(param_1 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049ca828(param_1 + 2,local_60,param_1,DAT_091c2d98);
        goto LAB_0773dd50;
      }
    }
LAB_0773cde8:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0773ceac;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0773ceac:
      (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
    }
    if (*(int *)(DAT_09193898 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
    lVar4 = puVar2[4];
    if (lVar4 == 0) {
      if (*(int *)(DAT_09193898 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
      }
      uVar8 = *puVar2;
      lVar4 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(lVar4,uVar8,DAT_091eece8,0);
      plVar3 = (long *)(*(long *)(DAT_09193898 + 0xb8) + 0x20);
      *plVar3 = lVar4;
      thunk_FUN_03f5d7b8(plVar3,lVar4);
    }
    auVar9 = _GAME_R1HomeFlow__Step(3,lVar4);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = auVar9;
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0773d030;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0773d030:
      iVar1 = (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
      if (iVar1 == 0) {
        local_44 = 6;
        *param_1 = 6;
        *(undefined1 (*) [16])(param_1 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049ca828(param_1 + 2,local_60,param_1,DAT_091c2d98);
        goto LAB_0773dd50;
      }
    }
LAB_0773d044:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0773d108;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0773d108:
      (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
    }
    if (*(int *)(DAT_09193898 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
    lVar4 = puVar2[5];
    if (lVar4 == 0) {
      if (*(int *)(DAT_09193898 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
      }
      uVar8 = *puVar2;
      lVar4 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(lVar4,uVar8,DAT_091eecf0,0);
      plVar3 = (long *)(*(long *)(DAT_09193898 + 0xb8) + 0x28);
      *plVar3 = lVar4;
      thunk_FUN_03f5d7b8(plVar3,lVar4);
    }
    auVar9 = _GAME_R1HomeFlow__Step(3,lVar4);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = auVar9;
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0773d28c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0773d28c:
      iVar1 = (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
      if (iVar1 == 0) {
        local_44 = 7;
        *param_1 = 7;
        *(undefined1 (*) [16])(param_1 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049ca828(param_1 + 2,local_60,param_1,DAT_091c2d98);
        goto LAB_0773dd50;
      }
    }
LAB_0773d2a0:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0773d364;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0773d364:
      (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
    }
    if (*(int *)(DAT_09193898 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
    lVar4 = puVar2[6];
    if (lVar4 == 0) {
      if (*(int *)(DAT_09193898 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
      }
      uVar8 = *puVar2;
      lVar4 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(lVar4,uVar8,DAT_091eecf8,0);
      plVar3 = (long *)(*(long *)(DAT_09193898 + 0xb8) + 0x30);
      *plVar3 = lVar4;
      thunk_FUN_03f5d7b8(plVar3,lVar4);
    }
    auVar9 = _GAME_R1HomeFlow__Step(0,lVar4);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = auVar9;
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0773d4e8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0773d4e8:
      iVar1 = (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
      if (iVar1 == 0) {
        local_44 = 8;
        *param_1 = 8;
        *(undefined1 (*) [16])(param_1 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049ca828(param_1 + 2,local_60,param_1,DAT_091c2d98);
        goto LAB_0773dd50;
      }
    }
LAB_0773d4fc:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0773d5c0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0773d5c0:
      (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
    }
    if (*(int *)(DAT_09193898 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
    lVar4 = puVar2[7];
    if (lVar4 == 0) {
      if (*(int *)(DAT_09193898 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
      }
      uVar8 = *puVar2;
      lVar4 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(lVar4,uVar8,DAT_091eed00,0);
      plVar3 = (long *)(*(long *)(DAT_09193898 + 0xb8) + 0x38);
      *plVar3 = lVar4;
      thunk_FUN_03f5d7b8(plVar3,lVar4);
    }
    auVar9 = _GAME_R1HomeFlow__Step(4,lVar4);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = auVar9;
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0773d744;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0773d744:
      iVar1 = (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
      if (iVar1 == 0) {
        local_44 = 9;
        *param_1 = 9;
        *(undefined1 (*) [16])(param_1 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049ca828(param_1 + 2,local_60,param_1,DAT_091c2d98);
        goto LAB_0773dd50;
      }
    }
LAB_0773d758:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0773d81c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0773d81c:
      (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
    }
    uVar8 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar8,0,DAT_091df318,0);
    auVar9 = _GAME_R1HomeFlow__Step(5,uVar8);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = auVar9;
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0773d94c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0773d94c:
      iVar1 = (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
      if (iVar1 == 0) {
        local_44 = 10;
        *param_1 = 10;
        *(undefined1 (*) [16])(param_1 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049ca828(param_1 + 2,local_60,param_1,DAT_091c2d98);
        goto LAB_0773dd50;
      }
    }
LAB_0773d960:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0773da24;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0773da24:
      (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
    }
    _GAME_R1HomeFlow__LockTabsIfTabTutorialPending();
    if (*(int *)(DAT_09193898 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
    lVar4 = puVar2[8];
    if (lVar4 == 0) {
      if (*(int *)(DAT_09193898 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar2 = *(undefined8 **)(DAT_09193898 + 0xb8);
      }
      uVar8 = *puVar2;
      lVar4 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(lVar4,uVar8,DAT_091eed08,0);
      plVar3 = (long *)(*(long *)(DAT_09193898 + 0xb8) + 0x40);
      *plVar3 = lVar4;
      thunk_FUN_03f5d7b8(plVar3,lVar4);
    }
    auVar9 = _GAME_R1HomeFlow__Step(lVar4);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = auVar9;
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0773dba8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0773dba8:
      iVar1 = (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
      if (iVar1 == 0) {
        local_44 = 0xb;
        *param_1 = 0xb;
        *(undefined1 (*) [16])(param_1 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049ca828(param_1 + 2,local_60,param_1,DAT_091c2d98);
        goto LAB_0773dd50;
      }
    }
LAB_0773dbbc:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0773dc80;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0773dc80:
      (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
    }
    iVar1 = 0x2a;
  }
  else {
LAB_0773c270:
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_Profile_ProfileManager__CheckFrameNameFxForEvent(0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = Cysharp_Threading_Tasks_UniTask__Delay(100,1,8,0,0,0);
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ == (long *)0x0) {
LAB_0773c3a0:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar8 = local_60._0_8_;
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar4 = *(long *)local_60._0_8_;
        uVar7 = local_60._8_8_ & 0xffff;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_091868c0) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_0773c424;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0773c424:
        (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
      }
      if (*(int *)(DAT_09189468 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar9 = _GAME_GameUI_PopupController__WaitToCloseAll();
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_40 = auVar9;
      thunk_FUN_03f5d7b8(local_40,0);
      local_60 = local_40;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      uVar8 = local_60._0_8_;
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar4 = *(long *)local_60._0_8_;
        uVar7 = local_60._8_8_ & 0xffff;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_091868c0) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0773c538;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0773c538:
        iVar1 = (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
        if (iVar1 == 0) {
          local_44 = 1;
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 10) = local_60;
          thunk_FUN_03f5d7b8(param_1 + 10,0);
          FUN_049ca828(param_1 + 2,local_60,param_1,DAT_091c2d98);
          goto LAB_0773dd50;
        }
      }
LAB_0773c54c:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar8 = local_60._0_8_;
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar4 = *(long *)local_60._0_8_;
        uVar7 = local_60._8_8_ & 0xffff;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_091868c0) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_0773c5d0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0773c5d0:
        (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
      }
      uVar8 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar8,0,DAT_091cb8d8,0);
      auVar9 = _GAME_R1HomeFlow__Step(6,uVar8);
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_40 = auVar9;
      thunk_FUN_03f5d7b8(local_40,0);
      local_60 = local_40;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      uVar8 = local_60._0_8_;
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar4 = *(long *)local_60._0_8_;
        uVar7 = local_60._8_8_ & 0xffff;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_091868c0) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0773c700;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0773c700:
        iVar1 = (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
        if (iVar1 == 0) {
          local_44 = 2;
          *param_1 = 2;
          *(undefined1 (*) [16])(param_1 + 10) = local_60;
          thunk_FUN_03f5d7b8(param_1 + 10,0);
          FUN_049ca828(param_1 + 2,local_60,param_1,DAT_091c2d98);
          goto LAB_0773dd50;
        }
      }
      goto LAB_0773c714;
    }
    lVar4 = *(long *)local_60._0_8_;
    uVar7 = local_60._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091868c0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0773c38c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0773c38c:
    iVar1 = (*(code *)*puVar2)(uVar8,uVar7,puVar2[1]);
    if (iVar1 != 0) goto LAB_0773c3a0;
    local_44 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 10) = local_60;
    thunk_FUN_03f5d7b8(param_1 + 10,0);
    FUN_049ca828(param_1 + 2,local_60,param_1,DAT_091c2d98);
LAB_0773dd50:
    iVar1 = 0x14;
  }
  if ((int)local_44 < 0) {
    **(undefined1 **)(DAT_09189940 + 0xb8) = 0;
    _GAME_R1HomeFlow__ReleaseTabLock();
  }
  auVar9 = local_60;
  if ((iVar1 != 0) && (iVar1 != 0x2a)) {
    return;
  }
LAB_0773dd84:
  *param_1 = 0xfffffffe;
  local_60 = auVar9;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


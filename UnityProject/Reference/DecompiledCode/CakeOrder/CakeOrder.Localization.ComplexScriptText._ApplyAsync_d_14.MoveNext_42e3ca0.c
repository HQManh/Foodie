// rea decompile_all
// name: CakeOrder.Localization.ComplexScriptText.<ApplyAsync>d__14$$MoveNext
// address: 0x42e3ca0
// body: available
// range: 0x42e3ca0-0x42e43ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e43d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e43d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e43dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e43e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e43e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e43e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e43ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_ComplexScriptText_<ApplyAsync>d__14__MoveNext(int *param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  long *local_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined4 local_a8;
  long *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  long *local_80;
  undefined8 uStack_78;
  ulong local_70;
  long *local_60;
  undefined8 uStack_58;
  ulong local_50;
  
  if ((DAT_09517448 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf6e0);
    FUN_03f5c2a4(&DAT_091bf628);
    FUN_03f5c2a4(&DAT_091bf688);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091977a8);
    FUN_03f5c2a4(&DAT_091c1dc8);
    FUN_03f5c2a4(&DAT_0919a5b0);
    FUN_03f5c2a4(&DAT_0919a5b8);
    FUN_03f5c2a4(&DAT_09182870);
    FUN_03f5c2a4(&DAT_091d4af0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091897e0);
    FUN_03f5c2a4(&DAT_091bde18);
    FUN_03f5c2a4(&DAT_09207080);
    FUN_03f5c2a4(&DAT_09223e00);
    FUN_03f5c2a4(&DAT_092178a0);
    FUN_03f5c2a4(&DAT_0921cb50);
    DAT_09517448 = 1;
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  if (*param_1 == 0) {
    local_70 = *(ulong *)(param_1 + 0xe);
    uStack_78 = *(undefined8 *)(param_1 + 0xc);
    local_80 = *(long **)(param_1 + 10);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_042e3e50:
    plVar5 = local_80;
    uVar9 = uStack_78;
    if (local_80 != (long *)0x0) {
      uVar2 = local_70 & 0xffff;
      lVar10 = *(long *)(DAT_0919a5b0 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c(lVar10);
      }
      lVar7 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar10) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_042e41fc;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar5,lVar10,0);
LAB_042e41fc:
      uVar9 = (*(code *)*puVar3)(plVar5,uVar2,puVar3[1]);
    }
    if (*(int *)(DAT_09182870 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar10 = *(long *)(*(long *)(DAT_09182870 + 0xb8) + 8);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar3 = (undefined8 *)(lVar10 + 0x10);
    *puVar3 = uVar9;
    thunk_FUN_03f5d7b8(puVar3,uVar9);
    goto LAB_042e423c;
  }
  uVar9 = *(undefined8 *)(param_1 + 6);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar2 & 1) == 0) {
LAB_042e3ed8:
    lVar10 = **(long **)(DAT_09535468 + 0xb8);
  }
  else {
    plVar5 = *(long **)(param_1 + 6);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((*(byte *)(DAT_091897e0 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_091897e0 + 0x130) * 8 + -8) ==
        DAT_091897e0)) goto LAB_042e3ed8;
    lVar10 = plVar5[3];
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = System_String__StartsWith(lVar10,DAT_092178a0,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = System_String__StartsWith(lVar10,DAT_0921cb50,0);
    lVar7 = DAT_09182870;
    if ((uVar2 & 1) == 0) {
      uVar2 = System_String__StartsWith(lVar10,DAT_09223e00,0);
      iVar4 = 3;
      if ((uVar2 & 1) == 0) {
        iVar4 = 0;
      }
      goto LAB_042e4124;
    }
    param_1[8] = 2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar7 = DAT_09182870;
    }
    lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar9 = *(undefined8 *)(lVar10 + 0x10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar9,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04b711d8(&local_60,DAT_09207080,DAT_091bf628);
      uStack_c8 = uStack_58;
      local_d0 = local_60;
      local_c0 = local_50;
      if (*(int *)(DAT_09182870 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = DAT_09182870;
      lVar7 = *(long *)(DAT_09182870 + 0xb8);
      *(undefined8 *)(lVar7 + 0x20) = uStack_c8;
      *(long **)(lVar7 + 0x18) = local_d0;
      *(ulong *)(lVar7 + 0x28) = local_c0;
      thunk_FUN_03f5d7b8(*(long *)(lVar10 + 0xb8) + 0x18,0);
      lVar10 = *(long *)(DAT_09182870 + 0xb8);
      uStack_58 = *(undefined8 *)(lVar10 + 0x20);
      local_60 = *(long **)(lVar10 + 0x18);
      local_50 = *(undefined8 *)(lVar10 + 0x28);
      FUN_04b722fc(&local_e8,&local_60,0,8,0,0,0,DAT_091bf6e0);
      uStack_58 = 0;
      local_50 = 0;
      uStack_98 = uStack_e0;
      local_a0 = local_e8;
      local_90 = local_d8;
      local_60 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bde18 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uStack_58 = uStack_98;
      local_60 = local_a0;
      local_50 = local_90;
      thunk_FUN_03f5d7b8(&local_60,0);
      uStack_78 = uStack_58;
      local_80 = local_60;
      local_70 = local_50;
      uVar2 = FUN_041e5390(&local_80,DAT_0919a5b8);
      if ((uVar2 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0xc) = uStack_78;
        *(long **)(param_1 + 10) = local_80;
        *(ulong *)(param_1 + 0xe) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_042f4a90(param_1 + 2,&local_80,param_1,DAT_091c1dc8);
        return;
      }
      goto LAB_042e3e50;
    }
    if (param_1[8] == 2) goto LAB_042e423c;
  }
  else {
    iVar4 = 1;
LAB_042e4124:
    param_1[8] = iVar4;
  }
  if (*(int *)(DAT_09182870 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = FUN_0640f598(*(long *)(DAT_09182870 + 0xb8) + 0x18,DAT_091977a8);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_09182870 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar10 = *(long *)(DAT_09182870 + 0xb8);
    uStack_c8 = *(undefined8 *)(lVar10 + 0x20);
    local_d0 = *(long **)(lVar10 + 0x18);
    local_c0 = *(ulong *)(lVar10 + 0x28);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_58 = uStack_c8;
    local_60 = local_d0;
    local_50 = local_c0;
    FUN_04b71ee0(&local_60,DAT_091bf688);
    lVar10 = DAT_09182870;
    lVar7 = *(long *)(DAT_09182870 + 0xb8);
    *(undefined8 *)(lVar7 + 0x20) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar3 = (undefined8 *)(lVar10 + 0x10);
    *puVar3 = 0;
    thunk_FUN_03f5d7b8(puVar3,0);
  }
LAB_042e423c:
  iVar4 = param_1[8];
  if (*(int *)(DAT_09182870 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (iVar4 != *(int *)(*(long *)(DAT_09182870 + 0xb8) + 0x10)) {
    if (*(int *)(DAT_09182870 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    CakeOrder_Localization_ComplexScriptText__UnregisterAll();
    iVar4 = param_1[8];
    *(int *)(*(long *)(DAT_09182870 + 0xb8) + 0x10) = iVar4;
    CakeOrder_Localization_ComplexScriptText__Hook(iVar4 != 0);
    if (param_1[8] != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = FUN_04c34ed0(1,0,DAT_091d4af0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
        uVar2 = 0;
        uVar6 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar9 = *(undefined8 *)(lVar10 + 0x20 + uVar2 * 8);
          if (*(int *)(DAT_09182870 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          CakeOrder_Localization_ComplexScriptText__Register(uVar9,1);
          uVar6 = (ulong)*(uint *)(lVar10 + 0x18);
          uVar2 = uVar2 + 1;
        } while ((long)uVar2 < (long)(int)*(uint *)(lVar10 + 0x18));
      }
    }
  }
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar5 = *(long **)(param_1 + 2);
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    uVar2 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091866a8) {
          puVar3 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_042e43a0;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091866a8,2);
LAB_042e43a0:
    (*(code *)*puVar3)(plVar5,puVar3[1]);
  }
  return;
}


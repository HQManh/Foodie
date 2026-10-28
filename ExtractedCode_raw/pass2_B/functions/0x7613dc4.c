// rea decompile_all
// name: System.Decimal.DecCalc$$InternalRound
// address: 0x7613dc4
// body: available
// range: 0x7613dc4-0x76140b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76140b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76140b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Decimal_DecCalc__InternalRound(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  
  if ((DAT_095220c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    DAT_095220c8 = 1;
  }
  uVar10 = 0;
  *param_1 = *param_1 + param_2 * -0x10000;
  for (; 8 < param_2; param_2 = param_2 - 9) {
    uVar3 = param_1[1];
    if (uVar3 == 0) {
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = *(ulong *)(param_1 + 2) / 1000000000;
      uVar3 = (int)*(ulong *)(param_1 + 2) + (int)uVar5 * -1000000000;
      *(ulong *)(param_1 + 2) = uVar5;
    }
    else {
      iVar8 = param_1[3];
      uVar6 = (uint)((ulong)(uVar3 >> 9) * 0x44b83 >> 0x27);
      uVar3 = uVar3 + uVar6 * -1000000000;
      param_1[1] = uVar6;
      if (iVar8 != 0 || uVar3 != 0) {
        iVar7 = (int)(CONCAT44(uVar3,iVar8) / 1000000000);
        uVar3 = iVar8 + iVar7 * -1000000000;
        param_1[3] = iVar7;
      }
      uVar6 = param_1[2];
      uVar5 = (ulong)uVar6;
      if (uVar6 != 0 || uVar3 != 0) {
        uVar5 = CONCAT44(uVar3,uVar6) / 1000000000;
        iVar8 = (int)uVar5;
        uVar3 = uVar6 + iVar8 * -1000000000;
        uVar5 = uVar5 & 0xffffffff;
        param_1[2] = iVar8;
      }
    }
    uVar6 = (uint)uVar5;
    if (param_2 == 9) {
      uVar9 = 1000000000;
      goto LAB_07613fdc;
    }
    uVar10 = uVar3 | uVar10;
  }
  if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = **(long **)(DAT_0918ff90 + 0xb8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(uint *)(lVar4 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar3 = param_1[1];
  uVar9 = *(uint *)(lVar4 + (ulong)param_2 * 4 + 0x20);
  uVar5 = (ulong)uVar9;
  if (uVar3 == 0) {
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = *(ulong *)(param_1 + 2);
    if (uVar11 == 0) {
      if (param_3 < 3) {
        return;
      }
      uVar6 = 0;
      uVar3 = 0;
    }
    else {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar11 / uVar5;
      }
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = (uint)uVar2;
      uVar3 = (int)uVar11 - uVar6 * uVar9;
      *(ulong *)(param_1 + 2) = uVar2;
    }
  }
  else {
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = uVar3 / uVar9;
    }
    uVar3 = uVar3 - uVar6 * uVar9;
    iVar8 = param_1[3];
    param_1[1] = uVar6;
    if (iVar8 != 0 || uVar3 != 0) {
      iVar7 = 0;
      if (uVar5 != 0) {
        iVar7 = (int)(CONCAT44(uVar3,iVar8) / uVar5);
      }
      uVar3 = iVar8 - uVar9 * iVar7;
      param_1[3] = iVar7;
    }
    uVar6 = param_1[2];
    if (uVar6 != 0 || uVar3 != 0) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = (uint)(CONCAT44(uVar3,uVar6) / uVar5);
      }
      uVar3 = uVar6 - uVar9 * uVar1;
      param_1[2] = uVar1;
      uVar6 = uVar1;
    }
  }
LAB_07613fdc:
  if (param_3 < 2) {
    if (param_3 == 0) {
      if (((uint)((uVar6 & 1) != 0 || uVar10 != 0) | uVar3 << 1) <= uVar9) {
        return;
      }
      goto LAB_0761406c;
    }
    if (param_3 == 1) {
      if (uVar3 * 2 < uVar9) {
        return;
      }
      goto LAB_0761406c;
    }
  }
  else {
    if (param_3 == 2) {
      return;
    }
    if (param_3 == 3) {
      if (uVar3 == 0 && uVar10 == 0) {
        return;
      }
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (-1 < *param_1) {
        return;
      }
      goto LAB_0761406c;
    }
  }
  if (uVar3 == 0 && uVar10 == 0) {
    return;
  }
  if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*param_1 < 0) {
    return;
  }
LAB_0761406c:
  if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(param_1 + 2);
  *(long *)(param_1 + 2) = lVar4 + 1;
  if (lVar4 == -1) {
    param_1[1] = param_1[1] + 1;
  }
  return;
}


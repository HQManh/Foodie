// rea decompile_all
// name: System.Decimal.DecCalc$$VarDecMul
// address: 0x7614b18
// body: available
// range: 0x7614b18-0x761501b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7615000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7615014 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7615018 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Decimal_DecCalc__VarDecMul(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_095220bf & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    DAT_095220bf = 1;
  }
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar4 = *param_2 + *param_1 >> 0x10 & 0xff;
  if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_1[3] == 0 && param_1[1] == 0) {
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = param_2[1];
    uVar12 = param_2[3];
    if (uVar12 != 0 || uVar8 != 0) {
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
        uVar12 = param_2[3];
        uVar8 = param_2[1];
      }
      uVar7 = param_1[2];
      uVar13 = ((ulong)param_2[2] * (ulong)uVar7 >> 0x20) + (ulong)uVar7 * (ulong)uVar12;
      uVar11 = uVar13 >> 0x20;
      local_60 = CONCAT44((int)uVar13,(int)((ulong)param_2[2] * (ulong)uVar7));
      if (uVar8 != 0) {
        if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
          FUN_03f5c424();
          uVar7 = param_1[2];
          uVar8 = param_2[1];
        }
        uVar11 = uVar11 + (ulong)uVar7 * (ulong)uVar8;
        goto LAB_07614c94;
      }
      goto LAB_07614ca8;
    }
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar13 = (ulong)param_2[2] * (ulong)param_1[2];
    if (uVar4 < 0x1d) {
      uVar4 = uVar4 << 0x10;
      uVar11 = uVar13;
LAB_07614e38:
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      *(ulong *)(param_1 + 2) = uVar11;
      uVar4 = (*param_1 ^ *param_2) & 0x80000000 | uVar4;
      goto LAB_07614fc4;
    }
    if (uVar4 < 0x30) {
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(DAT_0918ff90 + 0xb8) + 8);
      if (lVar5 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_07615018;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar4 - 0x1d) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        goto LAB_07615018;
      }
      uVar9 = *(ulong *)(lVar5 + (ulong)(uVar4 - 0x1d) * 8 + 0x20);
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar13 / uVar9;
      }
      uVar13 = uVar13 - uVar11 * uVar9;
      if (uVar9 >> 1 <= uVar13) {
        uVar11 = uVar11 + ((ulong)((uint)uVar11 | (uint)(uVar9 >> 1 < uVar13)) & 1);
      }
      uVar4 = 0x1c0000;
      goto LAB_07614e38;
    }
LAB_07614dcc:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar12 = param_2[3];
    if (uVar12 == 0 && param_2[1] == 0) {
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = param_1[1];
      uVar13 = (ulong)param_2[2];
      uVar9 = (param_1[2] * uVar13 >> 0x20) + param_1[3] * uVar13;
      uVar11 = uVar9 >> 0x20;
      local_60 = CONCAT44((int)uVar9,(int)(param_1[2] * uVar13));
      if (uVar12 == 0) {
LAB_07614ca8:
        if ((int)uVar11 == 0) goto LAB_07614d64;
        local_58 = CONCAT44(local_58._4_4_,(int)uVar11);
        uVar13 = 2;
        goto LAB_07614f5c;
      }
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
        uVar13 = (ulong)param_2[2];
        uVar12 = param_1[1];
      }
      uVar11 = uVar11 + uVar13 * uVar12;
LAB_07614c94:
      if (uVar11 >> 0x20 == 0) goto LAB_07614ca8;
      uVar13 = 3;
      local_58 = uVar11;
LAB_07614f6c:
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Decimal_DecCalc__ScaleResult(&local_60,uVar13,uVar4);
    }
    else {
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
        uVar12 = param_2[3];
        bVar3 = *(int *)(DAT_0918ff90 + 0xe4) == 0;
      }
      else {
        bVar3 = false;
      }
      uVar8 = param_1[3];
      uVar11 = (ulong)param_2[2] * (ulong)param_1[2];
      uVar9 = (ulong)uVar8 * (ulong)param_2[2];
      uVar10 = (uVar11 >> 0x20) + (ulong)param_1[2] * (ulong)uVar12;
      uVar13 = uVar10 + uVar9;
      local_60 = CONCAT44((int)uVar13,(int)uVar11);
      uVar11 = uVar13 >> 0x20 | 0x100000000;
      if (!CARRY8(uVar10,uVar9)) {
        uVar11 = uVar13 >> 0x20;
      }
      if (bVar3) {
        FUN_03f5c424();
        uVar8 = param_1[3];
        uVar12 = param_2[3];
      }
      uVar11 = uVar11 + (ulong)uVar12 * (ulong)uVar8;
      if (param_2[1] == 0 && param_1[1] == 0) {
        if (uVar11 == 0) {
LAB_07614d64:
          uVar13 = 1;
        }
        else {
          local_58 = uVar11;
          uVar13 = 3;
        }
      }
      else {
        if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
          FUN_03f5c424();
          uVar13 = (ulong)param_2[1] * (ulong)param_1[2] + uVar11;
          uVar12 = (uint)CARRY8((ulong)param_2[1] * (ulong)param_1[2],uVar11);
          if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
            FUN_03f5c424();
            bVar3 = *(int *)(DAT_0918ff90 + 0xe4) == 0;
          }
          else {
            bVar3 = false;
          }
        }
        else {
          bVar3 = false;
          uVar9 = (ulong)param_2[1] * (ulong)param_1[2];
          uVar13 = uVar9 + uVar11;
          uVar12 = (uint)CARRY8(uVar9,uVar11);
        }
        uVar8 = 1;
        if (uVar12 != 0) {
          uVar8 = 2;
        }
        uVar11 = (ulong)param_2[2] * (ulong)param_1[1] + uVar13;
        if (!CARRY8((ulong)param_2[2] * (ulong)param_1[1],uVar13)) {
          uVar8 = uVar12;
        }
        local_58 = CONCAT44(local_58._4_4_,(int)uVar11);
        uVar13 = uVar11 >> 0x20 | (ulong)uVar8 << 0x20;
        if (bVar3) {
          FUN_03f5c424();
          uVar11 = (ulong)param_2[1] * (ulong)param_1[3];
          if (*(int *)(DAT_0918ff90 + 0xe4) != 0) goto LAB_07614ee0;
          FUN_03f5c424();
          bVar3 = *(int *)(DAT_0918ff90 + 0xe4) == 0;
        }
        else {
          uVar11 = (ulong)param_2[1] * (ulong)param_1[3];
LAB_07614ee0:
          bVar3 = false;
        }
        uVar12 = param_1[1];
        uVar9 = 2;
        if (!CARRY8(uVar11,uVar13)) {
          uVar9 = 1;
        }
        uVar10 = (ulong)param_2[3] * (ulong)uVar12 + uVar11 + uVar13;
        if (!CARRY8((ulong)param_2[3] * (ulong)uVar12,uVar11 + uVar13)) {
          uVar9 = (ulong)CARRY8(uVar11,uVar13);
        }
        local_58 = CONCAT44((int)uVar10,(uint)local_58);
        if (bVar3) {
          FUN_03f5c424();
          uVar12 = param_1[1];
        }
        uVar13 = 5;
        local_50 = (uVar10 >> 0x20 | uVar9 << 0x20) + (ulong)uVar12 * (ulong)param_2[1];
      }
      if (*(int *)((long)&local_60 + uVar13 * 4) == 0) {
        piVar6 = (int *)((long)&local_60 + uVar13 * 4);
        do {
          piVar6 = piVar6 + -1;
          if (uVar13 == 0) goto LAB_07614dcc;
          uVar13 = uVar13 - 1;
        } while (*piVar6 == 0);
        uVar13 = uVar13 & 0xffffffff;
      }
LAB_07614f5c:
      if ((0x1c < uVar4) || (2 < (uint)uVar13)) goto LAB_07614f6c;
    }
    uVar2 = local_60;
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(undefined8 *)(param_1 + 2) = uVar2;
    param_1[1] = (uint)local_58;
    uVar4 = (*param_1 ^ *param_2) & 0x80000000 | uVar4 << 0x10;
LAB_07614fc4:
    *param_1 = uVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_07615018:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

